/*
  Free Download Manager Copyright (c) 2003-2014 FreeDownloadManager.ORG
*/

#include "stdafx.h"
#include "fsLangMgr.h"
#include "fum.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

fsLangMgr::fsLangMgr()
{
	m_iCurLng = -1;
}

fsLangMgr::~fsLangMgr()
{

}

#define LNG_COMMENT_CHAR	';'

BOOL fsLangMgr::Initialize()
{
	LoadBuiltInLngStrings ();

	WIN32_FIND_DATA wfd;

	m_strLngFolder = AfxGetApp ()->GetProfileString ("", "lngsroot", ((CFUMApp*)AfxGetApp ())->m_strAppPath);
	if (m_strLngFolder.Right (1) != "\\")
		m_strLngFolder += "\\";
	m_strLngFolder += "Language\\";

	if (GetFileAttributes (m_strLngFolder) == DWORD (-1))
	{
		m_strLngFolder = ((CFUMApp*)AfxGetApp ())->m_strAppPath;
		if (m_strLngFolder.Right (1) != "\\")
			m_strLngFolder += "\\";
		m_strLngFolder += "Language\\";
	}

	CString strMask = m_strLngFolder;
	strMask += "*.lng";

	HANDLE hFind = FindFirstFile (strMask, &wfd);
	BOOL bFind = hFind != INVALID_HANDLE_VALUE;

	while (bFind)
	{
		try {
		fsLngFileInfo info;
		info.strFileName = wfd.cFileName;
		CStdioFile file (m_strLngFolder + info.strFileName, CFile::modeRead | CFile::typeText | CFile::shareDenyNone);

		
		while (file.ReadString (info.strLngName))
		{
			if (info.strLngName.GetLength () && info.strLngName [0] != LNG_COMMENT_CHAR)
			{
				AddLngFileInfo (info);
				break;
			}
		}
		}
		catch (...){}

		bFind = FindNextFile (hFind, &wfd);
	}

	if (hFind != INVALID_HANDLE_VALUE)
		FindClose (hFind);

	return m_vLngFiles.size () != 0;
}

int fsLangMgr::GetLngCount()
{
	return m_vLngFiles.size ();
}

LPCSTR fsLangMgr::GetLngName(int iIndex)
{
	static char szBuiltIn [] = "Built In";
	return m_vLngFiles.size () ? m_vLngFiles [iIndex].strLngName : szBuiltIn;
}

BOOL fsLangMgr::LoadLng(int iIndex)
{
	try {
	
	CStdioFile file (m_strLngFolder + m_vLngFiles [iIndex].strFileName, CFile::modeRead | CFile::typeText | CFile::shareDenyNone);
	CString str;

	
	do
	{
		if (FALSE == file.ReadString (str))
			return FALSE;

		if (str.GetLength () && str [0] != LNG_COMMENT_CHAR)
			break;
	}
	while (TRUE);

	m_vStrings.clear ();

	
	while (file.ReadString (str))
	{
		if (str.GetLength () == 0 || str [0] == LNG_COMMENT_CHAR)
			continue; 

		PreprocessLanguageString (str);

		m_vStrings.add (str);
	}

	m_iCurLng = iIndex;

	return m_vStrings.size () != 0;

	}
	catch (...)
	{
		return FALSE;
	}
}

int fsLangMgr::FindLngByName(LPCSTR pszName)
{
	for (int i = 0; i < m_vLngFiles.size (); i++)
	{
		if (m_vLngFiles [i].strLngName == pszName || 
				lstrcmpi (m_vLngFiles [i].strFileName, pszName) == 0)
			return i;
	}

	return -1;
}

int fsLangMgr::GetStringCount()
{
	return m_vStrings.size ();
}

LPCSTR fsLangMgr::GetString(int iIndex)
{
	static char szNull [1] = {0};

	if (iIndex < m_vStrings.size ()) 
		return m_vStrings [iIndex];
	else if (iIndex < m_vBuiltInStrings.size ()) 
		return m_vBuiltInStrings [iIndex];
	else
		return szNull;
}

int fsLangMgr::GetCurLng()
{
	return m_iCurLng;
}

CString fsLangMgr::GetStringNP(int iIndex)
{
	CString str = GetString (iIndex);
	str.Remove ('&');
	return str;
}

void fsLangMgr::AddLngFileInfo(fsLngFileInfo &info)
{
	for (int i = 0; i < m_vLngFiles.size (); i++)
	{
		if (stricmp (m_vLngFiles [i].strLngName, info.strLngName) > 0)
		{
			m_vLngFiles.insert (i, info);
			return;
		}
	}

	m_vLngFiles.add (info);
}

void fsLangMgr::LoadBuiltInLngStrings()
{
	HGLOBAL hResource;
	HRSRC hRes;
	LPBYTE pbRes;

	hRes = FindResource (NULL, MAKEINTRESOURCE (IDR_ENG_LNGSTRINGS), "RT_LNGSTRINGS");
	if (hRes == NULL)
		return;

	hResource = LoadResource (NULL, hRes);
	pbRes = (LPBYTE) LockResource (hResource);
	LPBYTE pbResEnd = pbRes + SizeofResource (NULL, hRes);

	LPCSTR psz = (LPCSTR) pbRes;
	LPCSTR pszE = (LPCSTR) pbResEnd;
	bool bLngNamePassed = false;

	while (psz < pszE) 
	{
		CString str;
		while (psz < pszE && *psz != '\n' && *psz != '\r')
			str += *psz++;
		while (psz < pszE && (*psz == '\n' || *psz == '\r'))
			psz++;

		if (str == "" || str [0] == LNG_COMMENT_CHAR)
			continue;

		if (bLngNamePassed == false) {
			bLngNamePassed = true;
			continue;
		}

		PreprocessLanguageString (str);
		m_vBuiltInStrings.add (str);
	}

	
}

void fsLangMgr::PreprocessLanguageString(CString &str)
{
	str.Replace ("\\n", "\n");
	str.Replace ("Free Download Manager", "Free Upload Manager");
	str.Replace (" FDM ", " FUM ");
	if (strncmp (str, "FDM ", 4) == 0)
		str.SetAt (1, 'U');
	if (str.GetLength () > 5 && str [str.GetLength () - 2] == 'D')
		str.SetAt (str.GetLength () - 2, 'U');
}
