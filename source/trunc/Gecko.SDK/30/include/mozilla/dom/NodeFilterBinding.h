/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_NodeFilterBinding_h__
#define mozilla_dom_NodeFilterBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CallbackInterface.h"
#include "mozilla/dom/Nullable.h"

class nsINode;

namespace mozilla {
namespace dom {

class NativePropertyHooks;
class NodeFilter;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

namespace NodeFilterBinding {

  typedef mozilla::dom::NodeFilter NativeType;

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

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceArray& aProtoAndIfaceArray, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace NodeFilterBinding



class NodeFilter : public CallbackInterface
{
public:
  explicit inline NodeFilter(JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackInterface(aCallback, aIncumbentGlobal)
  {
  }

  template <typename T>
  inline uint16_t
  AcceptNode(const T& thisObjPtr, nsINode& node, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return uint16_t(0);
    }
    JS::Rooted<JSObject*> thisObjJS(s.GetContext(),
      WrapCallThisObject(s.GetContext(), CallbackPreserveColor(), thisObjPtr));
    if (!thisObjJS) {
      aRv.Throw(NS_ERROR_FAILURE);
      return uint16_t(0);
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext(),
                                    JS::ObjectValue(*thisObjJS));
    return AcceptNode(s.GetContext(), thisValJS, node, aRv);
  }

  inline uint16_t
  AcceptNode(nsINode& node, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return uint16_t(0);
    }
    return AcceptNode(s.GetContext(), JS::UndefinedHandleValue, node, aRv);
  }

  inline bool
  operator==(const NodeFilter& aOther) const
  {
    return CallbackInterface::operator==(aOther);
  }

private:
  uint16_t AcceptNode(JSContext* cx, JS::Handle<JS::Value> aThisVal, nsINode& node, ErrorResult& aRv);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_NodeFilterBinding_h__
