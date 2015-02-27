/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_MozOtaStatusEvent_h__
#define mozilla_dom_MozOtaStatusEvent_h__

#include "mozilla/Attributes.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/Event.h"
#include "mozilla/dom/MozOtaStatusEventBinding.h"

struct JSContext;

namespace mozilla {
namespace dom {

class MozOtaStatusEvent : public Event
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS_INHERITED(MozOtaStatusEvent, Event)
  virtual ~MozOtaStatusEvent();
protected:
  MozOtaStatusEvent(mozilla::dom::EventTarget* aOwner);

  nsString mStatus;

public:
  virtual MozOtaStatusEvent* AsMozOtaStatusEvent();

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aScope) MOZ_OVERRIDE;

  static already_AddRefed<MozOtaStatusEvent> Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const MozOtaStatusEventInit& aEventInitDict);

  static already_AddRefed<MozOtaStatusEvent> Constructor(const GlobalObject& aGlobal, const nsAString& aType, const MozOtaStatusEventInit& aEventInitDict, ErrorResult& aRv);

  void GetStatus(nsString& aRetVal) const;

};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_MozOtaStatusEvent_h__
