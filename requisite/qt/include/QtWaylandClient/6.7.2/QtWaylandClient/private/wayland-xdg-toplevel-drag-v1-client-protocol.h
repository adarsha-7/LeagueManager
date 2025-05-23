/* Generated by wayland-scanner 1.23.0 */

#ifndef XDG_TOPLEVEL_DRAG_V1_CLIENT_PROTOCOL_H
#define XDG_TOPLEVEL_DRAG_V1_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client-core.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_xdg_toplevel_drag_v1 The xdg_toplevel_drag_v1 protocol
 * @section page_ifaces_xdg_toplevel_drag_v1 Interfaces
 * - @subpage page_iface_xdg_toplevel_drag_manager_v1 - Move a window during a drag
 * - @subpage page_iface_xdg_toplevel_drag_v1 - Object representing a toplevel move during a drag
 * @section page_copyright_xdg_toplevel_drag_v1 Copyright
 * <pre>
 *
 * Copyright 2023 David Redondo
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 * </pre>
 */
struct wl_data_source;
struct xdg_toplevel;
struct xdg_toplevel_drag_manager_v1;
struct xdg_toplevel_drag_v1;

#ifndef XDG_TOPLEVEL_DRAG_MANAGER_V1_INTERFACE
#define XDG_TOPLEVEL_DRAG_MANAGER_V1_INTERFACE
/**
 * @page page_iface_xdg_toplevel_drag_manager_v1 xdg_toplevel_drag_manager_v1
 * @section page_iface_xdg_toplevel_drag_manager_v1_desc Description
 *
 * This protocol enhances normal drag and drop with the ability to move a
 * window at the same time. This allows having detachable parts of a window
 * that when dragged out of it become a new window and can be dragged over
 * an existing window to be reattached.
 *
 * A typical workflow would be when the user starts dragging on top of a
 * detachable part of a window, the client would create a wl_data_source and
 * a xdg_toplevel_drag_v1 object and start the drag as normal via
 * wl_data_device.start_drag. Once the client determines that the detachable
 * window contents should be detached from the originating window, it creates
 * a new xdg_toplevel with these contents and issues a
 * xdg_toplevel_drag_v1.attach request before mapping it. From now on the new
 * window is moved by the compositor during the drag as if the client called
 * xdg_toplevel.move.
 *
 * Dragging an existing window is similar. The client creates a
 * xdg_toplevel_drag_v1 object and attaches the existing toplevel before
 * starting the drag.
 *
 * Clients use the existing drag and drop mechanism to detect when a window
 * can be docked or undocked. If the client wants to snap a window into a
 * parent window it should delete or unmap the dragged top-level. If the
 * contents should be detached again it attaches a new toplevel as described
 * above. If a drag operation is cancelled without being dropped, clients
 * should revert to the previous state, deleting any newly created windows
 * as appropriate. When a drag operation ends as indicated by
 * wl_data_source.dnd_drop_performed the dragged toplevel window's final
 * position is determined as if a xdg_toplevel_move operation ended.
 *
 * Warning! The protocol described in this file is currently in the testing
 * phase. Backward compatible changes may be added together with the
 * corresponding interface version bump. Backward incompatible changes can
 * only be done by creating a new major version of the extension.
 * @section page_iface_xdg_toplevel_drag_manager_v1_api API
 * See @ref iface_xdg_toplevel_drag_manager_v1.
 */
/**
 * @defgroup iface_xdg_toplevel_drag_manager_v1 The xdg_toplevel_drag_manager_v1 interface
 *
 * This protocol enhances normal drag and drop with the ability to move a
 * window at the same time. This allows having detachable parts of a window
 * that when dragged out of it become a new window and can be dragged over
 * an existing window to be reattached.
 *
 * A typical workflow would be when the user starts dragging on top of a
 * detachable part of a window, the client would create a wl_data_source and
 * a xdg_toplevel_drag_v1 object and start the drag as normal via
 * wl_data_device.start_drag. Once the client determines that the detachable
 * window contents should be detached from the originating window, it creates
 * a new xdg_toplevel with these contents and issues a
 * xdg_toplevel_drag_v1.attach request before mapping it. From now on the new
 * window is moved by the compositor during the drag as if the client called
 * xdg_toplevel.move.
 *
 * Dragging an existing window is similar. The client creates a
 * xdg_toplevel_drag_v1 object and attaches the existing toplevel before
 * starting the drag.
 *
 * Clients use the existing drag and drop mechanism to detect when a window
 * can be docked or undocked. If the client wants to snap a window into a
 * parent window it should delete or unmap the dragged top-level. If the
 * contents should be detached again it attaches a new toplevel as described
 * above. If a drag operation is cancelled without being dropped, clients
 * should revert to the previous state, deleting any newly created windows
 * as appropriate. When a drag operation ends as indicated by
 * wl_data_source.dnd_drop_performed the dragged toplevel window's final
 * position is determined as if a xdg_toplevel_move operation ended.
 *
 * Warning! The protocol described in this file is currently in the testing
 * phase. Backward compatible changes may be added together with the
 * corresponding interface version bump. Backward incompatible changes can
 * only be done by creating a new major version of the extension.
 */
extern const struct wl_interface xdg_toplevel_drag_manager_v1_interface;
#endif
#ifndef XDG_TOPLEVEL_DRAG_V1_INTERFACE
#define XDG_TOPLEVEL_DRAG_V1_INTERFACE
/**
 * @page page_iface_xdg_toplevel_drag_v1 xdg_toplevel_drag_v1
 * @section page_iface_xdg_toplevel_drag_v1_desc Description
 *
 * @section page_iface_xdg_toplevel_drag_v1_api API
 * See @ref iface_xdg_toplevel_drag_v1.
 */
/**
 * @defgroup iface_xdg_toplevel_drag_v1 The xdg_toplevel_drag_v1 interface
 *
 */
extern const struct wl_interface xdg_toplevel_drag_v1_interface;
#endif

#ifndef XDG_TOPLEVEL_DRAG_MANAGER_V1_ERROR_ENUM
#define XDG_TOPLEVEL_DRAG_MANAGER_V1_ERROR_ENUM
enum xdg_toplevel_drag_manager_v1_error {
	/**
	 * data_source already used for toplevel drag
	 */
	XDG_TOPLEVEL_DRAG_MANAGER_V1_ERROR_INVALID_SOURCE = 0,
};
#endif /* XDG_TOPLEVEL_DRAG_MANAGER_V1_ERROR_ENUM */

#define XDG_TOPLEVEL_DRAG_MANAGER_V1_DESTROY 0
#define XDG_TOPLEVEL_DRAG_MANAGER_V1_GET_XDG_TOPLEVEL_DRAG 1


/**
 * @ingroup iface_xdg_toplevel_drag_manager_v1
 */
#define XDG_TOPLEVEL_DRAG_MANAGER_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_toplevel_drag_manager_v1
 */
#define XDG_TOPLEVEL_DRAG_MANAGER_V1_GET_XDG_TOPLEVEL_DRAG_SINCE_VERSION 1

/** @ingroup iface_xdg_toplevel_drag_manager_v1 */
static inline void
xdg_toplevel_drag_manager_v1_set_user_data(struct xdg_toplevel_drag_manager_v1 *xdg_toplevel_drag_manager_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) xdg_toplevel_drag_manager_v1, user_data);
}

/** @ingroup iface_xdg_toplevel_drag_manager_v1 */
static inline void *
xdg_toplevel_drag_manager_v1_get_user_data(struct xdg_toplevel_drag_manager_v1 *xdg_toplevel_drag_manager_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) xdg_toplevel_drag_manager_v1);
}

static inline uint32_t
xdg_toplevel_drag_manager_v1_get_version(struct xdg_toplevel_drag_manager_v1 *xdg_toplevel_drag_manager_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) xdg_toplevel_drag_manager_v1);
}

/**
 * @ingroup iface_xdg_toplevel_drag_manager_v1
 *
 * Destroy this xdg_toplevel_drag_manager_v1 object. Other objects,
 * including xdg_toplevel_drag_v1 objects created by this factory, are not
 * affected by this request.
 */
static inline void
xdg_toplevel_drag_manager_v1_destroy(struct xdg_toplevel_drag_manager_v1 *xdg_toplevel_drag_manager_v1)
{
	wl_proxy_marshal_flags((struct wl_proxy *) xdg_toplevel_drag_manager_v1,
			 XDG_TOPLEVEL_DRAG_MANAGER_V1_DESTROY, NULL, wl_proxy_get_version((struct wl_proxy *) xdg_toplevel_drag_manager_v1), WL_MARSHAL_FLAG_DESTROY);
}

/**
 * @ingroup iface_xdg_toplevel_drag_manager_v1
 *
 * Create an xdg_toplevel_drag for a drag and drop operation that is going
 * to be started with data_source.
 *
 * This request can only be made on sources used in drag-and-drop, so it
 * must be performed before wl_data_device.start_drag. Attempting to use
 * the source other than for drag-and-drop such as in
 * wl_data_device.set_selection will raise an invalid_source error.
 *
 * Destroying data_source while a toplevel is attached to the
 * xdg_toplevel_drag is undefined.
 */
static inline struct xdg_toplevel_drag_v1 *
xdg_toplevel_drag_manager_v1_get_xdg_toplevel_drag(struct xdg_toplevel_drag_manager_v1 *xdg_toplevel_drag_manager_v1, struct wl_data_source *data_source)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_flags((struct wl_proxy *) xdg_toplevel_drag_manager_v1,
			 XDG_TOPLEVEL_DRAG_MANAGER_V1_GET_XDG_TOPLEVEL_DRAG, &xdg_toplevel_drag_v1_interface, wl_proxy_get_version((struct wl_proxy *) xdg_toplevel_drag_manager_v1), 0, NULL, data_source);

	return (struct xdg_toplevel_drag_v1 *) id;
}

#ifndef XDG_TOPLEVEL_DRAG_V1_ERROR_ENUM
#define XDG_TOPLEVEL_DRAG_V1_ERROR_ENUM
enum xdg_toplevel_drag_v1_error {
	/**
	 * valid toplevel already attached
	 */
	XDG_TOPLEVEL_DRAG_V1_ERROR_TOPLEVEL_ATTACHED = 0,
	/**
	 * drag has not ended
	 */
	XDG_TOPLEVEL_DRAG_V1_ERROR_ONGOING_DRAG = 1,
};
#endif /* XDG_TOPLEVEL_DRAG_V1_ERROR_ENUM */

#define XDG_TOPLEVEL_DRAG_V1_DESTROY 0
#define XDG_TOPLEVEL_DRAG_V1_ATTACH 1


/**
 * @ingroup iface_xdg_toplevel_drag_v1
 */
#define XDG_TOPLEVEL_DRAG_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_toplevel_drag_v1
 */
#define XDG_TOPLEVEL_DRAG_V1_ATTACH_SINCE_VERSION 1

/** @ingroup iface_xdg_toplevel_drag_v1 */
static inline void
xdg_toplevel_drag_v1_set_user_data(struct xdg_toplevel_drag_v1 *xdg_toplevel_drag_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) xdg_toplevel_drag_v1, user_data);
}

/** @ingroup iface_xdg_toplevel_drag_v1 */
static inline void *
xdg_toplevel_drag_v1_get_user_data(struct xdg_toplevel_drag_v1 *xdg_toplevel_drag_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) xdg_toplevel_drag_v1);
}

static inline uint32_t
xdg_toplevel_drag_v1_get_version(struct xdg_toplevel_drag_v1 *xdg_toplevel_drag_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) xdg_toplevel_drag_v1);
}

/**
 * @ingroup iface_xdg_toplevel_drag_v1
 *
 * Destroy this xdg_toplevel_drag_v1 object. This request must only be
 * called after the underlying wl_data_source drag has ended, as indicated
 * by the dnd_drop_performed or cancelled events. In any other case an
 * ongoing_drag error is raised.
 */
static inline void
xdg_toplevel_drag_v1_destroy(struct xdg_toplevel_drag_v1 *xdg_toplevel_drag_v1)
{
	wl_proxy_marshal_flags((struct wl_proxy *) xdg_toplevel_drag_v1,
			 XDG_TOPLEVEL_DRAG_V1_DESTROY, NULL, wl_proxy_get_version((struct wl_proxy *) xdg_toplevel_drag_v1), WL_MARSHAL_FLAG_DESTROY);
}

/**
 * @ingroup iface_xdg_toplevel_drag_v1
 *
 * Request that the window will be moved with the cursor during the drag
 * operation. The offset is a hint to the compositor how the toplevel
 * should be positioned relative to the cursor hotspot in surface local
 * coordinates. For example it might only be used when an unmapped window
 * is attached. The attached window does not participate in the selection
 * of the drag target.
 *
 * If the toplevel is unmapped while it is attached, it is automatically
 * detached from the drag. In this case this request has to be called again
 * if the window should be attached after it is remapped.
 *
 * This request can be called multiple times but issuing it while a
 * toplevel with an active role is attached raises a toplevel_attached
 * error.
 */
static inline void
xdg_toplevel_drag_v1_attach(struct xdg_toplevel_drag_v1 *xdg_toplevel_drag_v1, struct xdg_toplevel *toplevel, int32_t x_offset, int32_t y_offset)
{
	wl_proxy_marshal_flags((struct wl_proxy *) xdg_toplevel_drag_v1,
			 XDG_TOPLEVEL_DRAG_V1_ATTACH, NULL, wl_proxy_get_version((struct wl_proxy *) xdg_toplevel_drag_v1), 0, toplevel, x_offset, y_offset);
}

#ifdef  __cplusplus
}
#endif

#endif
