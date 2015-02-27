/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_NetworkOptionsBinding_h__
#define mozilla_dom_NetworkOptionsBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

class NativePropertyHooks;
struct NetworkCommandOptionsAtoms;
struct NetworkResultOptionsAtoms;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct NetworkCommandOptions : public DictionaryBase
{
  nsString mCmd;
  Optional<nsString > mCurExternalIfname;
  Optional<nsString > mCurInternalIfname;
  Optional<nsString > mDate;
  Optional<nsString > mDns1;
  Optional<nsString > mDns1_str;
  Optional<nsString > mDns2;
  Optional<nsString > mDns2_str;
  Optional<nsString > mDomain;
  Optional<bool > mEnable;
  Optional<bool > mEnabled;
  Optional<nsString > mEndIp;
  Optional<nsString > mExternalIfname;
  Optional<nsString > mGateway;
  Optional<nsString > mGateway_str;
  Optional<Sequence<nsString > > mHostnames;
  int32_t mId;
  Optional<nsString > mIfname;
  Optional<Sequence<nsString > > mInterfaceList;
  Optional<nsString > mInternalIfname;
  Optional<nsString > mIp;
  Optional<bool > mIsAsync;
  Optional<nsString > mKey;
  Optional<nsString > mLink;
  Optional<nsString > mMaskLength;
  Optional<nsString > mMode;
  Optional<nsString > mOldIfname;
  Optional<nsString > mPreExternalIfname;
  Optional<nsString > mPreInternalIfname;
  Optional<nsString > mPrefix;
  Optional<uint32_t > mPrefixLength;
  Optional<bool > mReport;
  Optional<float > mRxBytes;
  Optional<nsString > mSecurity;
  Optional<nsString > mServerIp;
  Optional<nsString > mSsid;
  Optional<nsString > mStartIp;
  Optional<int32_t > mThreshold;
  Optional<float > mTxBytes;
  Optional<nsString > mUsbEndIp;
  Optional<nsString > mUsbStartIp;
  Optional<nsString > mWifiEndIp;
  Optional<nsString > mWifiStartIp;
  Optional<nsString > mWifictrlinterfacename;

  NetworkCommandOptions();

  explicit inline NetworkCommandOptions(const NetworkCommandOptions& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline NetworkCommandOptions(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, NetworkCommandOptionsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const NetworkCommandOptions& aOther);
};

namespace binding_detail {
struct FastNetworkCommandOptions : public NetworkCommandOptions
{
  inline FastNetworkCommandOptions()
    : NetworkCommandOptions(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct NetworkResultOptions : public DictionaryBase
{
  bool mBroadcast;
  nsString mCurExternalIfname;
  nsString mCurInternalIfname;
  nsString mDate;
  bool mEnable;
  bool mError;
  int32_t mId;
  nsString mReason;
  bool mResult;
  int32_t mResultCode;
  nsString mResultReason;
  bool mRet;
  float mRxBytes;
  bool mSuccess;
  nsString mTopic;
  float mTxBytes;

  NetworkResultOptions();

  explicit inline NetworkResultOptions(const NetworkResultOptions& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline NetworkResultOptions(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, NetworkResultOptionsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const NetworkResultOptions& aOther);
};

namespace binding_detail {
struct FastNetworkResultOptions : public NetworkResultOptions
{
  inline FastNetworkResultOptions()
    : NetworkResultOptions(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_NetworkOptionsBinding_h__
