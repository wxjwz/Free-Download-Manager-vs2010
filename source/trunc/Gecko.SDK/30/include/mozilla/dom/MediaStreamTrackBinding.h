/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_MediaStreamTrackBinding_h__
#define mozilla_dom_MediaStreamTrackBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/UnionTypes.h"

namespace mozilla {
namespace dom {

class BooleanOrObject;
struct MediaStreamConstraintsAtoms;
struct MediaStreamConstraintsInternalAtoms;
class MediaStreamTrack;
struct MediaTrackConstraintSet;
struct MediaTrackConstraintSetAtoms;
struct MediaTrackConstraintsAtoms;
struct MediaTrackConstraintsInternal;
struct MediaTrackConstraintsInternalAtoms;
class NativePropertyHooks;
class OwningBooleanOrObject;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {


MOZ_BEGIN_ENUM_CLASS(VideoFacingModeEnum, uint32_t)
  User,
  Environment,
  Left,
  Right
MOZ_END_ENUM_CLASS(VideoFacingModeEnum)

namespace VideoFacingModeEnumValues {
extern const EnumEntry strings[5];
} // namespace VideoFacingModeEnumValues


struct MediaStreamConstraints : public DictionaryBase
{
  OwningBooleanOrObject mAudio;
  bool mFake;
  bool mPicture;
  OwningBooleanOrObject mVideo;

  MediaStreamConstraints();

protected:
  explicit inline MediaStreamConstraints(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  MediaStreamConstraints(const MediaStreamConstraints&) MOZ_DELETE;
  void operator=(const MediaStreamConstraints) MOZ_DELETE;

  static bool
  InitIds(JSContext* cx, MediaStreamConstraintsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);
};

namespace binding_detail {
struct FastMediaStreamConstraints : public MediaStreamConstraints
{
  inline FastMediaStreamConstraints()
    : MediaStreamConstraints(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MediaTrackConstraintSet : public DictionaryBase
{
  Optional<VideoFacingModeEnum > mFacingMode;

  MediaTrackConstraintSet();

  explicit inline MediaTrackConstraintSet(const MediaTrackConstraintSet& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline MediaTrackConstraintSet(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, MediaTrackConstraintSetAtoms* atomsCache);

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
  operator=(const MediaTrackConstraintSet& aOther);
};

namespace binding_detail {
struct FastMediaTrackConstraintSet : public MediaTrackConstraintSet
{
  inline FastMediaTrackConstraintSet()
    : MediaTrackConstraintSet(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MediaTrackConstraints : public DictionaryBase
{
  Optional<JSObject* > mMandatory;
  Optional<Sequence<MediaTrackConstraintSet > > mOptional;

  MediaTrackConstraints();

protected:
  explicit inline MediaTrackConstraints(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  MediaTrackConstraints(const MediaTrackConstraints&) MOZ_DELETE;
  void operator=(const MediaTrackConstraints) MOZ_DELETE;

  static bool
  InitIds(JSContext* cx, MediaTrackConstraintsAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);
};

namespace binding_detail {
struct FastMediaTrackConstraints : public MediaTrackConstraints
{
  inline FastMediaTrackConstraints()
    : MediaTrackConstraints(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MediaTrackConstraintsInternal : public DictionaryBase
{
  MediaTrackConstraintSet mMandatory;
  Optional<Sequence<MediaTrackConstraintSet > > mOptional;

  MediaTrackConstraintsInternal();

  explicit inline MediaTrackConstraintsInternal(const MediaTrackConstraintsInternal& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline MediaTrackConstraintsInternal(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, MediaTrackConstraintsInternalAtoms* atomsCache);

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
  operator=(const MediaTrackConstraintsInternal& aOther);
};

namespace binding_detail {
struct FastMediaTrackConstraintsInternal : public MediaTrackConstraintsInternal
{
  inline FastMediaTrackConstraintsInternal()
    : MediaTrackConstraintsInternal(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MediaStreamConstraintsInternal : public DictionaryBase
{
  bool mAudio;
  MediaTrackConstraintsInternal mAudiom;
  bool mFake;
  bool mPicture;
  bool mVideo;
  MediaTrackConstraintsInternal mVideom;

  MediaStreamConstraintsInternal();

  explicit inline MediaStreamConstraintsInternal(const MediaStreamConstraintsInternal& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline MediaStreamConstraintsInternal(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, MediaStreamConstraintsInternalAtoms* atomsCache);

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
  operator=(const MediaStreamConstraintsInternal& aOther);
};

namespace binding_detail {
struct FastMediaStreamConstraintsInternal : public MediaStreamConstraintsInternal
{
  inline FastMediaStreamConstraintsInternal()
    : MediaStreamConstraintsInternal(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace MediaStreamTrackBinding {

  typedef mozilla::dom::MediaStreamTrack NativeType;

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
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace MediaStreamTrackBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_MediaStreamTrackBinding_h__
