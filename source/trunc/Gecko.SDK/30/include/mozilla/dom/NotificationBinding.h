/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_NotificationBinding_h__
#define mozilla_dom_NotificationBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

struct GetNotificationOptionsAtoms;
class NativePropertyHooks;
class Notification;
struct NotificationOptionsAtoms;
class NotificationPermissionCallback;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {


MOZ_BEGIN_ENUM_CLASS(NotificationPermission, uint32_t)
  Default,
  Denied,
  Granted
MOZ_END_ENUM_CLASS(NotificationPermission)

namespace NotificationPermissionValues {
extern const EnumEntry strings[4];
} // namespace NotificationPermissionValues



MOZ_BEGIN_ENUM_CLASS(NotificationDirection, uint32_t)
  Auto,
  Ltr,
  Rtl
MOZ_END_ENUM_CLASS(NotificationDirection)

namespace NotificationDirectionValues {
extern const EnumEntry strings[4];
} // namespace NotificationDirectionValues


struct GetNotificationOptions : public DictionaryBase
{
  Optional<nsString > mTag;

  GetNotificationOptions();

  explicit inline GetNotificationOptions(const GetNotificationOptions& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline GetNotificationOptions(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, GetNotificationOptionsAtoms* atomsCache);

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
  operator=(const GetNotificationOptions& aOther);
};

namespace binding_detail {
struct FastGetNotificationOptions : public GetNotificationOptions
{
  inline FastGetNotificationOptions()
    : GetNotificationOptions(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct NotificationOptions : public DictionaryBase
{
  nsString mBody;
  NotificationDirection mDir;
  nsString mIcon;
  nsString mLang;
  nsString mTag;

  NotificationOptions();

  explicit inline NotificationOptions(const NotificationOptions& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline NotificationOptions(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, NotificationOptionsAtoms* atomsCache);

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
  operator=(const NotificationOptions& aOther);
};

namespace binding_detail {
struct FastNotificationOptions : public NotificationOptions
{
  inline FastNotificationOptions()
    : NotificationOptions(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


class NotificationPermissionCallback : public CallbackFunction
{
public:
  explicit inline NotificationPermissionCallback(JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS_ObjectIsCallable(nullptr, mCallback));
  }

  explicit inline NotificationPermissionCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisObjPtr, NotificationPermission permission, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JSObject*> thisObjJS(s.GetContext(),
      WrapCallThisObject(s.GetContext(), CallbackPreserveColor(), thisObjPtr));
    if (!thisObjJS) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext(),
                                    JS::ObjectValue(*thisObjJS));
    return Call(s.GetContext(), thisValJS, permission, aRv);
  }

  inline void
  Call(NotificationPermission permission, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, permission, aRv);
  }

  inline bool
  operator==(const NotificationPermissionCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, NotificationPermission permission, ErrorResult& aRv);
};


namespace NotificationBinding {

  typedef mozilla::dom::Notification NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];
  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  bool
  ConstructorEnabled(JSContext* aCx, JS::Handle<JSObject*> aObj);

  const JSClass*
  GetJSClass();

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, mozilla::dom::Notification* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceArray& aProtoAndIfaceArray, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace NotificationBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_NotificationBinding_h__
