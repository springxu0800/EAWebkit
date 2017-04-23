/*
 *  This file is part of the WebKit open source project.
 *  This file has been generated by generate-bindings.pl. DO NOT MODIFY!
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 */

#if !defined(__WEBKITDOM_H_INSIDE__) && !defined(BUILDING_WEBKIT)
#error "Only <webkitdom/webkitdom.h> can be included directly."
#endif

#ifndef WebKitDOMreadonly_h
#define WebKitDOMreadonly_h

#include <glib-object.h>
#include <webkitdom/WebKitDOMObject.h>
#include <webkitdom/webkitdomdefines.h>

G_BEGIN_DECLS

G_BEGIN_DECLS

#define WEBKIT_TYPE_DOM_READONLY            (webkit_dom_readonly_get_type())
#define WEBKIT_DOM_READONLY(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), WEBKIT_TYPE_DOM_READONLY, WebKitDOMreadonly))
#define WEBKIT_DOM_READONLY_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass),  WEBKIT_TYPE_DOM_READONLY, WebKitDOMreadonlyClass)
#define WEBKIT_DOM_IS_READONLY(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), WEBKIT_TYPE_DOM_READONLY))
#define WEBKIT_DOM_IS_READONLY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass),  WEBKIT_TYPE_DOM_READONLY))
#define WEBKIT_DOM_READONLY_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj),  WEBKIT_TYPE_DOM_READONLY, WebKitDOMreadonlyClass))

struct _WebKitDOMreadonly {
    WebKitDOMObject parent_instance;
};

struct _WebKitDOMreadonlyClass {
    WebKitDOMObjectClass parent_class;
};

WEBKIT_API GType
webkit_dom_readonly_get_type (void);

G_END_DECLS

#endif /* WebKitDOMreadonly_h */

