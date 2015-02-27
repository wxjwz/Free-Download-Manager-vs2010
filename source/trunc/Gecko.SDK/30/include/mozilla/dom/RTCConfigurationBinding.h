/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_RTCConfigurationBinding_h__
#define mozilla_dom_RTCConfigurationBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

class NativePropertyHooks;
class ProtoAndIfaceArray;
struct RTCConfigurationAtoms;
struct RTCIceServer;
struct RTCIceServerAtoms;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct RTCIceServer : public DictionaryBase
{
  nsString mCredential;
  Optional<nsString > mUrl;
  nsString mUsername;

  RTCIceServer();

  explicit inline RTCIceServer(const RTCIceServer& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCIceServer(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCIceServerAtoms* atomsCache);

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
  operator=(const RTCIceServer& aOther);
};

namespace binding_detail {
struct FastRTCIceServer : public RTCIceServer
{
  inline FastRTCIceServer()
    : RTCIceServer(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCConfiguration : public DictionaryBase
{
  Optional<Sequence<RTCIceServer > > mIceServers;

  RTCConfiguration();

  explicit inline RTCConfiguration(const RTCConfiguration& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline RTCConfiguration(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, RTCConfigurationAtoms* atomsCache);

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
  operator=(const RTCConfiguration& aOther);
};

namespace binding_detail {
struct FastRTCConfiguration : public RTCConfiguration
{
  inline FastRTCConfiguration()
    : RTCConfiguration(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_RTCConfigurationBinding_h__
