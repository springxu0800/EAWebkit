/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * This file was generated by the dom/make_names.pl script.
 *
 * Copyright (C) 2005, 2006, 2007, 2008, 2009, 2013 Apple Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef HTMLElementTypeHelpers_h
#define HTMLElementTypeHelpers_h

#include "HTMLNames.h"

namespace WebCore {

class HTMLAnchorElement;
void isHTMLAnchorElement(const HTMLAnchorElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLAnchorElement(const HTMLAnchorElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLAnchorElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::aTag); }
inline bool isHTMLAnchorElement(const HTMLElement* element) { ASSERT(element); return isHTMLAnchorElement(*element); }
inline bool isHTMLAnchorElement(const Node& node) { return node.isHTMLElement() && isHTMLAnchorElement(toHTMLElement(node)); }
inline bool isHTMLAnchorElement(const Node* node) { ASSERT(node); return isHTMLAnchorElement(*node); }
template <> inline bool isElementOfType<const HTMLAnchorElement>(const HTMLElement& element) { return isHTMLAnchorElement(element); }
template <> inline bool isElementOfType<const HTMLAnchorElement>(const Element& element) { return isHTMLAnchorElement(element); }

class HTMLAppletElement;
void isHTMLAppletElement(const HTMLAppletElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLAppletElement(const HTMLAppletElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLAppletElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::appletTag); }
inline bool isHTMLAppletElement(const HTMLElement* element) { ASSERT(element); return isHTMLAppletElement(*element); }
inline bool isHTMLAppletElement(const Node& node) { return node.isHTMLElement() && isHTMLAppletElement(toHTMLElement(node)); }
inline bool isHTMLAppletElement(const Node* node) { ASSERT(node); return isHTMLAppletElement(*node); }
template <> inline bool isElementOfType<const HTMLAppletElement>(const HTMLElement& element) { return isHTMLAppletElement(element); }
template <> inline bool isElementOfType<const HTMLAppletElement>(const Element& element) { return isHTMLAppletElement(element); }

class HTMLAreaElement;
void isHTMLAreaElement(const HTMLAreaElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLAreaElement(const HTMLAreaElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLAreaElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::areaTag); }
inline bool isHTMLAreaElement(const HTMLElement* element) { ASSERT(element); return isHTMLAreaElement(*element); }
inline bool isHTMLAreaElement(const Node& node) { return node.isHTMLElement() && isHTMLAreaElement(toHTMLElement(node)); }
inline bool isHTMLAreaElement(const Node* node) { ASSERT(node); return isHTMLAreaElement(*node); }
template <> inline bool isElementOfType<const HTMLAreaElement>(const HTMLElement& element) { return isHTMLAreaElement(element); }
template <> inline bool isElementOfType<const HTMLAreaElement>(const Element& element) { return isHTMLAreaElement(element); }

class HTMLAudioElement;
void isHTMLAudioElement(const HTMLAudioElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLAudioElement(const HTMLAudioElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLAudioElement(const HTMLElement& element) { return !element.isHTMLUnknownElement() && element.hasLocalName(HTMLNames::audioTag); }
inline bool isHTMLAudioElement(const HTMLElement* element) { ASSERT(element); return isHTMLAudioElement(*element); }
inline bool isHTMLAudioElement(const Node& node) { return node.isHTMLElement() && isHTMLAudioElement(toHTMLElement(node)); }
inline bool isHTMLAudioElement(const Node* node) { ASSERT(node); return isHTMLAudioElement(*node); }
template <> inline bool isElementOfType<const HTMLAudioElement>(const HTMLElement& element) { return isHTMLAudioElement(element); }
template <> inline bool isElementOfType<const HTMLAudioElement>(const Element& element) { return isHTMLAudioElement(element); }

class HTMLBaseElement;
void isHTMLBaseElement(const HTMLBaseElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLBaseElement(const HTMLBaseElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLBaseElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::baseTag); }
inline bool isHTMLBaseElement(const HTMLElement* element) { ASSERT(element); return isHTMLBaseElement(*element); }
inline bool isHTMLBaseElement(const Node& node) { return node.isHTMLElement() && isHTMLBaseElement(toHTMLElement(node)); }
inline bool isHTMLBaseElement(const Node* node) { ASSERT(node); return isHTMLBaseElement(*node); }
template <> inline bool isElementOfType<const HTMLBaseElement>(const HTMLElement& element) { return isHTMLBaseElement(element); }
template <> inline bool isElementOfType<const HTMLBaseElement>(const Element& element) { return isHTMLBaseElement(element); }

class HTMLBodyElement;
void isHTMLBodyElement(const HTMLBodyElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLBodyElement(const HTMLBodyElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLBodyElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::bodyTag); }
inline bool isHTMLBodyElement(const HTMLElement* element) { ASSERT(element); return isHTMLBodyElement(*element); }
inline bool isHTMLBodyElement(const Node& node) { return node.isHTMLElement() && isHTMLBodyElement(toHTMLElement(node)); }
inline bool isHTMLBodyElement(const Node* node) { ASSERT(node); return isHTMLBodyElement(*node); }
template <> inline bool isElementOfType<const HTMLBodyElement>(const HTMLElement& element) { return isHTMLBodyElement(element); }
template <> inline bool isElementOfType<const HTMLBodyElement>(const Element& element) { return isHTMLBodyElement(element); }

class HTMLCanvasElement;
void isHTMLCanvasElement(const HTMLCanvasElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLCanvasElement(const HTMLCanvasElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLCanvasElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::canvasTag); }
inline bool isHTMLCanvasElement(const HTMLElement* element) { ASSERT(element); return isHTMLCanvasElement(*element); }
inline bool isHTMLCanvasElement(const Node& node) { return node.isHTMLElement() && isHTMLCanvasElement(toHTMLElement(node)); }
inline bool isHTMLCanvasElement(const Node* node) { ASSERT(node); return isHTMLCanvasElement(*node); }
template <> inline bool isElementOfType<const HTMLCanvasElement>(const HTMLElement& element) { return isHTMLCanvasElement(element); }
template <> inline bool isElementOfType<const HTMLCanvasElement>(const Element& element) { return isHTMLCanvasElement(element); }

class HTMLEmbedElement;
void isHTMLEmbedElement(const HTMLEmbedElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLEmbedElement(const HTMLEmbedElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLEmbedElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::embedTag); }
inline bool isHTMLEmbedElement(const HTMLElement* element) { ASSERT(element); return isHTMLEmbedElement(*element); }
inline bool isHTMLEmbedElement(const Node& node) { return node.isHTMLElement() && isHTMLEmbedElement(toHTMLElement(node)); }
inline bool isHTMLEmbedElement(const Node* node) { ASSERT(node); return isHTMLEmbedElement(*node); }
template <> inline bool isElementOfType<const HTMLEmbedElement>(const HTMLElement& element) { return isHTMLEmbedElement(element); }
template <> inline bool isElementOfType<const HTMLEmbedElement>(const Element& element) { return isHTMLEmbedElement(element); }

class HTMLFieldSetElement;
void isHTMLFieldSetElement(const HTMLFieldSetElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLFieldSetElement(const HTMLFieldSetElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLFieldSetElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::fieldsetTag); }
inline bool isHTMLFieldSetElement(const HTMLElement* element) { ASSERT(element); return isHTMLFieldSetElement(*element); }
inline bool isHTMLFieldSetElement(const Node& node) { return node.isHTMLElement() && isHTMLFieldSetElement(toHTMLElement(node)); }
inline bool isHTMLFieldSetElement(const Node* node) { ASSERT(node); return isHTMLFieldSetElement(*node); }
template <> inline bool isElementOfType<const HTMLFieldSetElement>(const HTMLElement& element) { return isHTMLFieldSetElement(element); }
template <> inline bool isElementOfType<const HTMLFieldSetElement>(const Element& element) { return isHTMLFieldSetElement(element); }

class HTMLFormElement;
void isHTMLFormElement(const HTMLFormElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLFormElement(const HTMLFormElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLFormElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::formTag); }
inline bool isHTMLFormElement(const HTMLElement* element) { ASSERT(element); return isHTMLFormElement(*element); }
inline bool isHTMLFormElement(const Node& node) { return node.isHTMLElement() && isHTMLFormElement(toHTMLElement(node)); }
inline bool isHTMLFormElement(const Node* node) { ASSERT(node); return isHTMLFormElement(*node); }
template <> inline bool isElementOfType<const HTMLFormElement>(const HTMLElement& element) { return isHTMLFormElement(element); }
template <> inline bool isElementOfType<const HTMLFormElement>(const Element& element) { return isHTMLFormElement(element); }

class HTMLFrameElement;
void isHTMLFrameElement(const HTMLFrameElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLFrameElement(const HTMLFrameElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLFrameElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::frameTag); }
inline bool isHTMLFrameElement(const HTMLElement* element) { ASSERT(element); return isHTMLFrameElement(*element); }
inline bool isHTMLFrameElement(const Node& node) { return node.isHTMLElement() && isHTMLFrameElement(toHTMLElement(node)); }
inline bool isHTMLFrameElement(const Node* node) { ASSERT(node); return isHTMLFrameElement(*node); }
template <> inline bool isElementOfType<const HTMLFrameElement>(const HTMLElement& element) { return isHTMLFrameElement(element); }
template <> inline bool isElementOfType<const HTMLFrameElement>(const Element& element) { return isHTMLFrameElement(element); }

class HTMLFrameSetElement;
void isHTMLFrameSetElement(const HTMLFrameSetElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLFrameSetElement(const HTMLFrameSetElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLFrameSetElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::framesetTag); }
inline bool isHTMLFrameSetElement(const HTMLElement* element) { ASSERT(element); return isHTMLFrameSetElement(*element); }
inline bool isHTMLFrameSetElement(const Node& node) { return node.isHTMLElement() && isHTMLFrameSetElement(toHTMLElement(node)); }
inline bool isHTMLFrameSetElement(const Node* node) { ASSERT(node); return isHTMLFrameSetElement(*node); }
template <> inline bool isElementOfType<const HTMLFrameSetElement>(const HTMLElement& element) { return isHTMLFrameSetElement(element); }
template <> inline bool isElementOfType<const HTMLFrameSetElement>(const Element& element) { return isHTMLFrameSetElement(element); }

class HTMLHeadElement;
void isHTMLHeadElement(const HTMLHeadElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLHeadElement(const HTMLHeadElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLHeadElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::headTag); }
inline bool isHTMLHeadElement(const HTMLElement* element) { ASSERT(element); return isHTMLHeadElement(*element); }
inline bool isHTMLHeadElement(const Node& node) { return node.isHTMLElement() && isHTMLHeadElement(toHTMLElement(node)); }
inline bool isHTMLHeadElement(const Node* node) { ASSERT(node); return isHTMLHeadElement(*node); }
template <> inline bool isElementOfType<const HTMLHeadElement>(const HTMLElement& element) { return isHTMLHeadElement(element); }
template <> inline bool isElementOfType<const HTMLHeadElement>(const Element& element) { return isHTMLHeadElement(element); }

class HTMLIFrameElement;
void isHTMLIFrameElement(const HTMLIFrameElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLIFrameElement(const HTMLIFrameElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLIFrameElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::iframeTag); }
inline bool isHTMLIFrameElement(const HTMLElement* element) { ASSERT(element); return isHTMLIFrameElement(*element); }
inline bool isHTMLIFrameElement(const Node& node) { return node.isHTMLElement() && isHTMLIFrameElement(toHTMLElement(node)); }
inline bool isHTMLIFrameElement(const Node* node) { ASSERT(node); return isHTMLIFrameElement(*node); }
template <> inline bool isElementOfType<const HTMLIFrameElement>(const HTMLElement& element) { return isHTMLIFrameElement(element); }
template <> inline bool isElementOfType<const HTMLIFrameElement>(const Element& element) { return isHTMLIFrameElement(element); }

class HTMLImageElement;
void isHTMLImageElement(const HTMLImageElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLImageElement(const HTMLImageElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLImageElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::imgTag); }
inline bool isHTMLImageElement(const HTMLElement* element) { ASSERT(element); return isHTMLImageElement(*element); }
inline bool isHTMLImageElement(const Node& node) { return node.isHTMLElement() && isHTMLImageElement(toHTMLElement(node)); }
inline bool isHTMLImageElement(const Node* node) { ASSERT(node); return isHTMLImageElement(*node); }
template <> inline bool isElementOfType<const HTMLImageElement>(const HTMLElement& element) { return isHTMLImageElement(element); }
template <> inline bool isElementOfType<const HTMLImageElement>(const Element& element) { return isHTMLImageElement(element); }

class HTMLInputElement;
void isHTMLInputElement(const HTMLInputElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLInputElement(const HTMLInputElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLInputElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::inputTag); }
inline bool isHTMLInputElement(const HTMLElement* element) { ASSERT(element); return isHTMLInputElement(*element); }
inline bool isHTMLInputElement(const Node& node) { return node.isHTMLElement() && isHTMLInputElement(toHTMLElement(node)); }
inline bool isHTMLInputElement(const Node* node) { ASSERT(node); return isHTMLInputElement(*node); }
template <> inline bool isElementOfType<const HTMLInputElement>(const HTMLElement& element) { return isHTMLInputElement(element); }
template <> inline bool isElementOfType<const HTMLInputElement>(const Element& element) { return isHTMLInputElement(element); }

class HTMLLabelElement;
void isHTMLLabelElement(const HTMLLabelElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLLabelElement(const HTMLLabelElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLLabelElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::labelTag); }
inline bool isHTMLLabelElement(const HTMLElement* element) { ASSERT(element); return isHTMLLabelElement(*element); }
inline bool isHTMLLabelElement(const Node& node) { return node.isHTMLElement() && isHTMLLabelElement(toHTMLElement(node)); }
inline bool isHTMLLabelElement(const Node* node) { ASSERT(node); return isHTMLLabelElement(*node); }
template <> inline bool isElementOfType<const HTMLLabelElement>(const HTMLElement& element) { return isHTMLLabelElement(element); }
template <> inline bool isElementOfType<const HTMLLabelElement>(const Element& element) { return isHTMLLabelElement(element); }

class HTMLLegendElement;
void isHTMLLegendElement(const HTMLLegendElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLLegendElement(const HTMLLegendElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLLegendElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::legendTag); }
inline bool isHTMLLegendElement(const HTMLElement* element) { ASSERT(element); return isHTMLLegendElement(*element); }
inline bool isHTMLLegendElement(const Node& node) { return node.isHTMLElement() && isHTMLLegendElement(toHTMLElement(node)); }
inline bool isHTMLLegendElement(const Node* node) { ASSERT(node); return isHTMLLegendElement(*node); }
template <> inline bool isElementOfType<const HTMLLegendElement>(const HTMLElement& element) { return isHTMLLegendElement(element); }
template <> inline bool isElementOfType<const HTMLLegendElement>(const Element& element) { return isHTMLLegendElement(element); }

class HTMLLinkElement;
void isHTMLLinkElement(const HTMLLinkElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLLinkElement(const HTMLLinkElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLLinkElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::linkTag); }
inline bool isHTMLLinkElement(const HTMLElement* element) { ASSERT(element); return isHTMLLinkElement(*element); }
inline bool isHTMLLinkElement(const Node& node) { return node.isHTMLElement() && isHTMLLinkElement(toHTMLElement(node)); }
inline bool isHTMLLinkElement(const Node* node) { ASSERT(node); return isHTMLLinkElement(*node); }
template <> inline bool isElementOfType<const HTMLLinkElement>(const HTMLElement& element) { return isHTMLLinkElement(element); }
template <> inline bool isElementOfType<const HTMLLinkElement>(const Element& element) { return isHTMLLinkElement(element); }

class HTMLMapElement;
void isHTMLMapElement(const HTMLMapElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLMapElement(const HTMLMapElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLMapElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::mapTag); }
inline bool isHTMLMapElement(const HTMLElement* element) { ASSERT(element); return isHTMLMapElement(*element); }
inline bool isHTMLMapElement(const Node& node) { return node.isHTMLElement() && isHTMLMapElement(toHTMLElement(node)); }
inline bool isHTMLMapElement(const Node* node) { ASSERT(node); return isHTMLMapElement(*node); }
template <> inline bool isElementOfType<const HTMLMapElement>(const HTMLElement& element) { return isHTMLMapElement(element); }
template <> inline bool isElementOfType<const HTMLMapElement>(const Element& element) { return isHTMLMapElement(element); }

class HTMLMeterElement;
void isHTMLMeterElement(const HTMLMeterElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLMeterElement(const HTMLMeterElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLMeterElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::meterTag); }
inline bool isHTMLMeterElement(const HTMLElement* element) { ASSERT(element); return isHTMLMeterElement(*element); }
inline bool isHTMLMeterElement(const Node& node) { return node.isHTMLElement() && isHTMLMeterElement(toHTMLElement(node)); }
inline bool isHTMLMeterElement(const Node* node) { ASSERT(node); return isHTMLMeterElement(*node); }
template <> inline bool isElementOfType<const HTMLMeterElement>(const HTMLElement& element) { return isHTMLMeterElement(element); }
template <> inline bool isElementOfType<const HTMLMeterElement>(const Element& element) { return isHTMLMeterElement(element); }

class HTMLObjectElement;
void isHTMLObjectElement(const HTMLObjectElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLObjectElement(const HTMLObjectElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLObjectElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::objectTag); }
inline bool isHTMLObjectElement(const HTMLElement* element) { ASSERT(element); return isHTMLObjectElement(*element); }
inline bool isHTMLObjectElement(const Node& node) { return node.isHTMLElement() && isHTMLObjectElement(toHTMLElement(node)); }
inline bool isHTMLObjectElement(const Node* node) { ASSERT(node); return isHTMLObjectElement(*node); }
template <> inline bool isElementOfType<const HTMLObjectElement>(const HTMLElement& element) { return isHTMLObjectElement(element); }
template <> inline bool isElementOfType<const HTMLObjectElement>(const Element& element) { return isHTMLObjectElement(element); }

class HTMLOptGroupElement;
void isHTMLOptGroupElement(const HTMLOptGroupElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLOptGroupElement(const HTMLOptGroupElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLOptGroupElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::optgroupTag); }
inline bool isHTMLOptGroupElement(const HTMLElement* element) { ASSERT(element); return isHTMLOptGroupElement(*element); }
inline bool isHTMLOptGroupElement(const Node& node) { return node.isHTMLElement() && isHTMLOptGroupElement(toHTMLElement(node)); }
inline bool isHTMLOptGroupElement(const Node* node) { ASSERT(node); return isHTMLOptGroupElement(*node); }
template <> inline bool isElementOfType<const HTMLOptGroupElement>(const HTMLElement& element) { return isHTMLOptGroupElement(element); }
template <> inline bool isElementOfType<const HTMLOptGroupElement>(const Element& element) { return isHTMLOptGroupElement(element); }

class HTMLOptionElement;
void isHTMLOptionElement(const HTMLOptionElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLOptionElement(const HTMLOptionElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLOptionElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::optionTag); }
inline bool isHTMLOptionElement(const HTMLElement* element) { ASSERT(element); return isHTMLOptionElement(*element); }
inline bool isHTMLOptionElement(const Node& node) { return node.isHTMLElement() && isHTMLOptionElement(toHTMLElement(node)); }
inline bool isHTMLOptionElement(const Node* node) { ASSERT(node); return isHTMLOptionElement(*node); }
template <> inline bool isElementOfType<const HTMLOptionElement>(const HTMLElement& element) { return isHTMLOptionElement(element); }
template <> inline bool isElementOfType<const HTMLOptionElement>(const Element& element) { return isHTMLOptionElement(element); }

class HTMLParamElement;
void isHTMLParamElement(const HTMLParamElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLParamElement(const HTMLParamElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLParamElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::paramTag); }
inline bool isHTMLParamElement(const HTMLElement* element) { ASSERT(element); return isHTMLParamElement(*element); }
inline bool isHTMLParamElement(const Node& node) { return node.isHTMLElement() && isHTMLParamElement(toHTMLElement(node)); }
inline bool isHTMLParamElement(const Node* node) { ASSERT(node); return isHTMLParamElement(*node); }
template <> inline bool isElementOfType<const HTMLParamElement>(const HTMLElement& element) { return isHTMLParamElement(element); }
template <> inline bool isElementOfType<const HTMLParamElement>(const Element& element) { return isHTMLParamElement(element); }

class HTMLProgressElement;
void isHTMLProgressElement(const HTMLProgressElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLProgressElement(const HTMLProgressElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLProgressElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::progressTag); }
inline bool isHTMLProgressElement(const HTMLElement* element) { ASSERT(element); return isHTMLProgressElement(*element); }
inline bool isHTMLProgressElement(const Node& node) { return node.isHTMLElement() && isHTMLProgressElement(toHTMLElement(node)); }
inline bool isHTMLProgressElement(const Node* node) { ASSERT(node); return isHTMLProgressElement(*node); }
template <> inline bool isElementOfType<const HTMLProgressElement>(const HTMLElement& element) { return isHTMLProgressElement(element); }
template <> inline bool isElementOfType<const HTMLProgressElement>(const Element& element) { return isHTMLProgressElement(element); }

class HTMLScriptElement;
void isHTMLScriptElement(const HTMLScriptElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLScriptElement(const HTMLScriptElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLScriptElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::scriptTag); }
inline bool isHTMLScriptElement(const HTMLElement* element) { ASSERT(element); return isHTMLScriptElement(*element); }
inline bool isHTMLScriptElement(const Node& node) { return node.isHTMLElement() && isHTMLScriptElement(toHTMLElement(node)); }
inline bool isHTMLScriptElement(const Node* node) { ASSERT(node); return isHTMLScriptElement(*node); }
template <> inline bool isElementOfType<const HTMLScriptElement>(const HTMLElement& element) { return isHTMLScriptElement(element); }
template <> inline bool isElementOfType<const HTMLScriptElement>(const Element& element) { return isHTMLScriptElement(element); }

class HTMLSelectElement;
void isHTMLSelectElement(const HTMLSelectElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLSelectElement(const HTMLSelectElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLSelectElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::selectTag); }
inline bool isHTMLSelectElement(const HTMLElement* element) { ASSERT(element); return isHTMLSelectElement(*element); }
inline bool isHTMLSelectElement(const Node& node) { return node.isHTMLElement() && isHTMLSelectElement(toHTMLElement(node)); }
inline bool isHTMLSelectElement(const Node* node) { ASSERT(node); return isHTMLSelectElement(*node); }
template <> inline bool isElementOfType<const HTMLSelectElement>(const HTMLElement& element) { return isHTMLSelectElement(element); }
template <> inline bool isElementOfType<const HTMLSelectElement>(const Element& element) { return isHTMLSelectElement(element); }

class HTMLSourceElement;
void isHTMLSourceElement(const HTMLSourceElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLSourceElement(const HTMLSourceElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLSourceElement(const HTMLElement& element) { return !element.isHTMLUnknownElement() && element.hasLocalName(HTMLNames::sourceTag); }
inline bool isHTMLSourceElement(const HTMLElement* element) { ASSERT(element); return isHTMLSourceElement(*element); }
inline bool isHTMLSourceElement(const Node& node) { return node.isHTMLElement() && isHTMLSourceElement(toHTMLElement(node)); }
inline bool isHTMLSourceElement(const Node* node) { ASSERT(node); return isHTMLSourceElement(*node); }
template <> inline bool isElementOfType<const HTMLSourceElement>(const HTMLElement& element) { return isHTMLSourceElement(element); }
template <> inline bool isElementOfType<const HTMLSourceElement>(const Element& element) { return isHTMLSourceElement(element); }

class HTMLStyleElement;
void isHTMLStyleElement(const HTMLStyleElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLStyleElement(const HTMLStyleElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLStyleElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::styleTag); }
inline bool isHTMLStyleElement(const HTMLElement* element) { ASSERT(element); return isHTMLStyleElement(*element); }
inline bool isHTMLStyleElement(const Node& node) { return node.isHTMLElement() && isHTMLStyleElement(toHTMLElement(node)); }
inline bool isHTMLStyleElement(const Node* node) { ASSERT(node); return isHTMLStyleElement(*node); }
template <> inline bool isElementOfType<const HTMLStyleElement>(const HTMLElement& element) { return isHTMLStyleElement(element); }
template <> inline bool isElementOfType<const HTMLStyleElement>(const Element& element) { return isHTMLStyleElement(element); }

class HTMLTableElement;
void isHTMLTableElement(const HTMLTableElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTableElement(const HTMLTableElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLTableElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::tableTag); }
inline bool isHTMLTableElement(const HTMLElement* element) { ASSERT(element); return isHTMLTableElement(*element); }
inline bool isHTMLTableElement(const Node& node) { return node.isHTMLElement() && isHTMLTableElement(toHTMLElement(node)); }
inline bool isHTMLTableElement(const Node* node) { ASSERT(node); return isHTMLTableElement(*node); }
template <> inline bool isElementOfType<const HTMLTableElement>(const HTMLElement& element) { return isHTMLTableElement(element); }
template <> inline bool isElementOfType<const HTMLTableElement>(const Element& element) { return isHTMLTableElement(element); }

class HTMLTemplateElement;
void isHTMLTemplateElement(const HTMLTemplateElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTemplateElement(const HTMLTemplateElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLTemplateElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::templateTag); }
inline bool isHTMLTemplateElement(const HTMLElement* element) { ASSERT(element); return isHTMLTemplateElement(*element); }
inline bool isHTMLTemplateElement(const Node& node) { return node.isHTMLElement() && isHTMLTemplateElement(toHTMLElement(node)); }
inline bool isHTMLTemplateElement(const Node* node) { ASSERT(node); return isHTMLTemplateElement(*node); }
template <> inline bool isElementOfType<const HTMLTemplateElement>(const HTMLElement& element) { return isHTMLTemplateElement(element); }
template <> inline bool isElementOfType<const HTMLTemplateElement>(const Element& element) { return isHTMLTemplateElement(element); }

class HTMLTextAreaElement;
void isHTMLTextAreaElement(const HTMLTextAreaElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTextAreaElement(const HTMLTextAreaElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLTextAreaElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::textareaTag); }
inline bool isHTMLTextAreaElement(const HTMLElement* element) { ASSERT(element); return isHTMLTextAreaElement(*element); }
inline bool isHTMLTextAreaElement(const Node& node) { return node.isHTMLElement() && isHTMLTextAreaElement(toHTMLElement(node)); }
inline bool isHTMLTextAreaElement(const Node* node) { ASSERT(node); return isHTMLTextAreaElement(*node); }
template <> inline bool isElementOfType<const HTMLTextAreaElement>(const HTMLElement& element) { return isHTMLTextAreaElement(element); }
template <> inline bool isElementOfType<const HTMLTextAreaElement>(const Element& element) { return isHTMLTextAreaElement(element); }

class HTMLTitleElement;
void isHTMLTitleElement(const HTMLTitleElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTitleElement(const HTMLTitleElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLTitleElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::titleTag); }
inline bool isHTMLTitleElement(const HTMLElement* element) { ASSERT(element); return isHTMLTitleElement(*element); }
inline bool isHTMLTitleElement(const Node& node) { return node.isHTMLElement() && isHTMLTitleElement(toHTMLElement(node)); }
inline bool isHTMLTitleElement(const Node* node) { ASSERT(node); return isHTMLTitleElement(*node); }
template <> inline bool isElementOfType<const HTMLTitleElement>(const HTMLElement& element) { return isHTMLTitleElement(element); }
template <> inline bool isElementOfType<const HTMLTitleElement>(const Element& element) { return isHTMLTitleElement(element); }

class HTMLTableRowElement;
void isHTMLTableRowElement(const HTMLTableRowElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTableRowElement(const HTMLTableRowElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLTableRowElement(const HTMLElement& element) { return element.hasLocalName(HTMLNames::trTag); }
inline bool isHTMLTableRowElement(const HTMLElement* element) { ASSERT(element); return isHTMLTableRowElement(*element); }
inline bool isHTMLTableRowElement(const Node& node) { return node.isHTMLElement() && isHTMLTableRowElement(toHTMLElement(node)); }
inline bool isHTMLTableRowElement(const Node* node) { ASSERT(node); return isHTMLTableRowElement(*node); }
template <> inline bool isElementOfType<const HTMLTableRowElement>(const HTMLElement& element) { return isHTMLTableRowElement(element); }
template <> inline bool isElementOfType<const HTMLTableRowElement>(const Element& element) { return isHTMLTableRowElement(element); }

class HTMLTrackElement;
void isHTMLTrackElement(const HTMLTrackElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLTrackElement(const HTMLTrackElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLTrackElement(const HTMLElement& element) { return !element.isHTMLUnknownElement() && element.hasLocalName(HTMLNames::trackTag); }
inline bool isHTMLTrackElement(const HTMLElement* element) { ASSERT(element); return isHTMLTrackElement(*element); }
inline bool isHTMLTrackElement(const Node& node) { return node.isHTMLElement() && isHTMLTrackElement(toHTMLElement(node)); }
inline bool isHTMLTrackElement(const Node* node) { ASSERT(node); return isHTMLTrackElement(*node); }
template <> inline bool isElementOfType<const HTMLTrackElement>(const HTMLElement& element) { return isHTMLTrackElement(element); }
template <> inline bool isElementOfType<const HTMLTrackElement>(const Element& element) { return isHTMLTrackElement(element); }

class HTMLVideoElement;
void isHTMLVideoElement(const HTMLVideoElement&); // Catch unnecessary runtime check of type known at compile time.
void isHTMLVideoElement(const HTMLVideoElement*); // Catch unnecessary runtime check of type known at compile time.
inline bool isHTMLVideoElement(const HTMLElement& element) { return !element.isHTMLUnknownElement() && element.hasLocalName(HTMLNames::videoTag); }
inline bool isHTMLVideoElement(const HTMLElement* element) { ASSERT(element); return isHTMLVideoElement(*element); }
inline bool isHTMLVideoElement(const Node& node) { return node.isHTMLElement() && isHTMLVideoElement(toHTMLElement(node)); }
inline bool isHTMLVideoElement(const Node* node) { ASSERT(node); return isHTMLVideoElement(*node); }
template <> inline bool isElementOfType<const HTMLVideoElement>(const HTMLElement& element) { return isHTMLVideoElement(element); }
template <> inline bool isElementOfType<const HTMLVideoElement>(const Element& element) { return isHTMLVideoElement(element); }

}

#endif
