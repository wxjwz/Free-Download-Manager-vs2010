/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_MozInterAppMessageEvent_h__
#define mozilla_dom_MozInterAppMessageEvent_h__

#include "mozilla/Attributes.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/Event.h"
#include "mozilla/dom/MozInterAppMessageEventBinding.h"

struct JSContext;

namespace mozilla {
namespace dom {

class MozInterAppMessageEvent : public Event
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS_INHERITED(MozInterAppMessageEvent, Event)
  virtual ~MozInterAppMessageEvent();
protected:
  MozInterAppMessageEvent(mozilla::dom::EventTarget* aOwner);

  JS::Heap<JS::Value> mData;

public:
  virtual MozInterAppMessageEvent* AsMozInterAppMessageEvent();

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aScope) MOZ_OVERRIDE;

  static already_AddRefed<MozInterAppMessageEvent> Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const MozInterAppMessageEventInit& aEventInitDict);

  static already_AddRefed<MozInterAppMessageEvent> Constructor(const GlobalObject& aGlobal, JSContext* aCx, const nsAString& aType, const MozInterAppMessageEventInit& aEventInitDict, ErrorResult& aRv);

  JS::Value Data(JSContext* cx) const;

};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_MozInterAppMessageEvent_h__
