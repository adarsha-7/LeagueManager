/* Generated by wayland-scanner 1.23.0 */

#ifndef POINTER_GESTURES_UNSTABLE_V1_CLIENT_PROTOCOL_H
#define POINTER_GESTURES_UNSTABLE_V1_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client-core.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_pointer_gestures_unstable_v1 The pointer_gestures_unstable_v1 protocol
 * @section page_ifaces_pointer_gestures_unstable_v1 Interfaces
 * - @subpage page_iface_zwp_pointer_gestures_v1 - touchpad gestures
 * - @subpage page_iface_zwp_pointer_gesture_swipe_v1 - a swipe gesture object
 * - @subpage page_iface_zwp_pointer_gesture_pinch_v1 - a pinch gesture object
 */
struct wl_pointer;
struct wl_surface;
struct zwp_pointer_gesture_pinch_v1;
struct zwp_pointer_gesture_swipe_v1;
struct zwp_pointer_gestures_v1;

#ifndef ZWP_POINTER_GESTURES_V1_INTERFACE
#define ZWP_POINTER_GESTURES_V1_INTERFACE
/**
 * @page page_iface_zwp_pointer_gestures_v1 zwp_pointer_gestures_v1
 * @section page_iface_zwp_pointer_gestures_v1_desc Description
 *
 * A global interface to provide semantic touchpad gestures for a given
 * pointer.
 *
 * Two gestures are currently supported: swipe and zoom/rotate.
 * All gestures follow a three-stage cycle: begin, update, end and
 * are identified by a unique id.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding interface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and interface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 * @section page_iface_zwp_pointer_gestures_v1_api API
 * See @ref iface_zwp_pointer_gestures_v1.
 */
/**
 * @defgroup iface_zwp_pointer_gestures_v1 The zwp_pointer_gestures_v1 interface
 *
 * A global interface to provide semantic touchpad gestures for a given
 * pointer.
 *
 * Two gestures are currently supported: swipe and zoom/rotate.
 * All gestures follow a three-stage cycle: begin, update, end and
 * are identified by a unique id.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding interface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and interface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 */
extern const struct wl_interface zwp_pointer_gestures_v1_interface;
#endif
#ifndef ZWP_POINTER_GESTURE_SWIPE_V1_INTERFACE
#define ZWP_POINTER_GESTURE_SWIPE_V1_INTERFACE
/**
 * @page page_iface_zwp_pointer_gesture_swipe_v1 zwp_pointer_gesture_swipe_v1
 * @section page_iface_zwp_pointer_gesture_swipe_v1_desc Description
 *
 * A swipe gesture object notifies a client about a multi-finger swipe
 * gesture detected on an indirect input device such as a touchpad.
 * The gesture is usually initiated by multiple fingers moving in the
 * same direction but once initiated the direction may change.
 * The precise conditions of when such a gesture is detected are
 * implementation-dependent.
 *
 * A gesture consists of three stages: begin, update (optional) and end.
 * There cannot be multiple simultaneous pinch or swipe gestures on a
 * same pointer/seat, how compositors prevent these situations is
 * implementation-dependent.
 *
 * A gesture may be cancelled by the compositor or the hardware.
 * Clients should not consider performing permanent or irreversible
 * actions until the end of a gesture has been received.
 * @section page_iface_zwp_pointer_gesture_swipe_v1_api API
 * See @ref iface_zwp_pointer_gesture_swipe_v1.
 */
/**
 * @defgroup iface_zwp_pointer_gesture_swipe_v1 The zwp_pointer_gesture_swipe_v1 interface
 *
 * A swipe gesture object notifies a client about a multi-finger swipe
 * gesture detected on an indirect input device such as a touchpad.
 * The gesture is usually initiated by multiple fingers moving in the
 * same direction but once initiated the direction may change.
 * The precise conditions of when such a gesture is detected are
 * implementation-dependent.
 *
 * A gesture consists of three stages: begin, update (optional) and end.
 * There cannot be multiple simultaneous pinch or swipe gestures on a
 * same pointer/seat, how compositors prevent these situations is
 * implementation-dependent.
 *
 * A gesture may be cancelled by the compositor or the hardware.
 * Clients should not consider performing permanent or irreversible
 * actions until the end of a gesture has been received.
 */
extern const struct wl_interface zwp_pointer_gesture_swipe_v1_interface;
#endif
#ifndef ZWP_POINTER_GESTURE_PINCH_V1_INTERFACE
#define ZWP_POINTER_GESTURE_PINCH_V1_INTERFACE
/**
 * @page page_iface_zwp_pointer_gesture_pinch_v1 zwp_pointer_gesture_pinch_v1
 * @section page_iface_zwp_pointer_gesture_pinch_v1_desc Description
 *
 * A pinch gesture object notifies a client about a multi-finger pinch
 * gesture detected on an indirect input device such as a touchpad.
 * The gesture is usually initiated by multiple fingers moving towards
 * each other or away from each other, or by two or more fingers rotating
 * around a logical center of gravity. The precise conditions of when
 * such a gesture is detected are implementation-dependent.
 *
 * A gesture consists of three stages: begin, update (optional) and end.
 * There cannot be multiple simultaneous pinch or swipe gestures on a
 * same pointer/seat, how compositors prevent these situations is
 * implementation-dependent.
 *
 * A gesture may be cancelled by the compositor or the hardware.
 * Clients should not consider performing permanent or irreversible
 * actions until the end of a gesture has been received.
 * @section page_iface_zwp_pointer_gesture_pinch_v1_api API
 * See @ref iface_zwp_pointer_gesture_pinch_v1.
 */
/**
 * @defgroup iface_zwp_pointer_gesture_pinch_v1 The zwp_pointer_gesture_pinch_v1 interface
 *
 * A pinch gesture object notifies a client about a multi-finger pinch
 * gesture detected on an indirect input device such as a touchpad.
 * The gesture is usually initiated by multiple fingers moving towards
 * each other or away from each other, or by two or more fingers rotating
 * around a logical center of gravity. The precise conditions of when
 * such a gesture is detected are implementation-dependent.
 *
 * A gesture consists of three stages: begin, update (optional) and end.
 * There cannot be multiple simultaneous pinch or swipe gestures on a
 * same pointer/seat, how compositors prevent these situations is
 * implementation-dependent.
 *
 * A gesture may be cancelled by the compositor or the hardware.
 * Clients should not consider performing permanent or irreversible
 * actions until the end of a gesture has been received.
 */
extern const struct wl_interface zwp_pointer_gesture_pinch_v1_interface;
#endif

#define ZWP_POINTER_GESTURES_V1_GET_SWIPE_GESTURE 0
#define ZWP_POINTER_GESTURES_V1_GET_PINCH_GESTURE 1
#define ZWP_POINTER_GESTURES_V1_RELEASE 2


/**
 * @ingroup iface_zwp_pointer_gestures_v1
 */
#define ZWP_POINTER_GESTURES_V1_GET_SWIPE_GESTURE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_pointer_gestures_v1
 */
#define ZWP_POINTER_GESTURES_V1_GET_PINCH_GESTURE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_pointer_gestures_v1
 */
#define ZWP_POINTER_GESTURES_V1_RELEASE_SINCE_VERSION 2

/** @ingroup iface_zwp_pointer_gestures_v1 */
static inline void
zwp_pointer_gestures_v1_set_user_data(struct zwp_pointer_gestures_v1 *zwp_pointer_gestures_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_pointer_gestures_v1, user_data);
}

/** @ingroup iface_zwp_pointer_gestures_v1 */
static inline void *
zwp_pointer_gestures_v1_get_user_data(struct zwp_pointer_gestures_v1 *zwp_pointer_gestures_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_pointer_gestures_v1);
}

static inline uint32_t
zwp_pointer_gestures_v1_get_version(struct zwp_pointer_gestures_v1 *zwp_pointer_gestures_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_pointer_gestures_v1);
}

/** @ingroup iface_zwp_pointer_gestures_v1 */
static inline void
zwp_pointer_gestures_v1_destroy(struct zwp_pointer_gestures_v1 *zwp_pointer_gestures_v1)
{
	wl_proxy_destroy((struct wl_proxy *) zwp_pointer_gestures_v1);
}

/**
 * @ingroup iface_zwp_pointer_gestures_v1
 *
 * Create a swipe gesture object. See the
 * wl_pointer_gesture_swipe interface for details.
 */
static inline struct zwp_pointer_gesture_swipe_v1 *
zwp_pointer_gestures_v1_get_swipe_gesture(struct zwp_pointer_gestures_v1 *zwp_pointer_gestures_v1, struct wl_pointer *pointer)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_flags((struct wl_proxy *) zwp_pointer_gestures_v1,
			 ZWP_POINTER_GESTURES_V1_GET_SWIPE_GESTURE, &zwp_pointer_gesture_swipe_v1_interface, wl_proxy_get_version((struct wl_proxy *) zwp_pointer_gestures_v1), 0, NULL, pointer);

	return (struct zwp_pointer_gesture_swipe_v1 *) id;
}

/**
 * @ingroup iface_zwp_pointer_gestures_v1
 *
 * Create a pinch gesture object. See the
 * wl_pointer_gesture_pinch interface for details.
 */
static inline struct zwp_pointer_gesture_pinch_v1 *
zwp_pointer_gestures_v1_get_pinch_gesture(struct zwp_pointer_gestures_v1 *zwp_pointer_gestures_v1, struct wl_pointer *pointer)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_flags((struct wl_proxy *) zwp_pointer_gestures_v1,
			 ZWP_POINTER_GESTURES_V1_GET_PINCH_GESTURE, &zwp_pointer_gesture_pinch_v1_interface, wl_proxy_get_version((struct wl_proxy *) zwp_pointer_gestures_v1), 0, NULL, pointer);

	return (struct zwp_pointer_gesture_pinch_v1 *) id;
}

/**
 * @ingroup iface_zwp_pointer_gestures_v1
 *
 * Destroy the pointer gesture object. Swipe and pinch objects created via this
 * gesture object remain valid.
 */
static inline void
zwp_pointer_gestures_v1_release(struct zwp_pointer_gestures_v1 *zwp_pointer_gestures_v1)
{
	wl_proxy_marshal_flags((struct wl_proxy *) zwp_pointer_gestures_v1,
			 ZWP_POINTER_GESTURES_V1_RELEASE, NULL, wl_proxy_get_version((struct wl_proxy *) zwp_pointer_gestures_v1), WL_MARSHAL_FLAG_DESTROY);
}

/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 * @struct zwp_pointer_gesture_swipe_v1_listener
 */
struct zwp_pointer_gesture_swipe_v1_listener {
	/**
	 * multi-finger swipe begin
	 *
	 * This event is sent when a multi-finger swipe gesture is
	 * detected on the device.
	 * @param time timestamp with millisecond granularity
	 * @param fingers number of fingers
	 */
	void (*begin)(void *data,
		      struct zwp_pointer_gesture_swipe_v1 *zwp_pointer_gesture_swipe_v1,
		      uint32_t serial,
		      uint32_t time,
		      struct wl_surface *surface,
		      uint32_t fingers);
	/**
	 * multi-finger swipe motion
	 *
	 * This event is sent when a multi-finger swipe gesture changes
	 * the position of the logical center.
	 *
	 * The dx and dy coordinates are relative coordinates of the
	 * logical center of the gesture compared to the previous event.
	 * @param time timestamp with millisecond granularity
	 * @param dx delta x coordinate in surface coordinate space
	 * @param dy delta y coordinate in surface coordinate space
	 */
	void (*update)(void *data,
		       struct zwp_pointer_gesture_swipe_v1 *zwp_pointer_gesture_swipe_v1,
		       uint32_t time,
		       wl_fixed_t dx,
		       wl_fixed_t dy);
	/**
	 * multi-finger swipe end
	 *
	 * This event is sent when a multi-finger swipe gesture ceases to
	 * be valid. This may happen when one or more fingers are lifted or
	 * the gesture is cancelled.
	 *
	 * When a gesture is cancelled, the client should undo state
	 * changes caused by this gesture. What causes a gesture to be
	 * cancelled is implementation-dependent.
	 * @param time timestamp with millisecond granularity
	 * @param cancelled 1 if the gesture was cancelled, 0 otherwise
	 */
	void (*end)(void *data,
		    struct zwp_pointer_gesture_swipe_v1 *zwp_pointer_gesture_swipe_v1,
		    uint32_t serial,
		    uint32_t time,
		    int32_t cancelled);
};

/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 */
static inline int
zwp_pointer_gesture_swipe_v1_add_listener(struct zwp_pointer_gesture_swipe_v1 *zwp_pointer_gesture_swipe_v1,
					  const struct zwp_pointer_gesture_swipe_v1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zwp_pointer_gesture_swipe_v1,
				     (void (**)(void)) listener, data);
}

#define ZWP_POINTER_GESTURE_SWIPE_V1_DESTROY 0

/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 */
#define ZWP_POINTER_GESTURE_SWIPE_V1_BEGIN_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 */
#define ZWP_POINTER_GESTURE_SWIPE_V1_UPDATE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 */
#define ZWP_POINTER_GESTURE_SWIPE_V1_END_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 */
#define ZWP_POINTER_GESTURE_SWIPE_V1_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwp_pointer_gesture_swipe_v1 */
static inline void
zwp_pointer_gesture_swipe_v1_set_user_data(struct zwp_pointer_gesture_swipe_v1 *zwp_pointer_gesture_swipe_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_pointer_gesture_swipe_v1, user_data);
}

/** @ingroup iface_zwp_pointer_gesture_swipe_v1 */
static inline void *
zwp_pointer_gesture_swipe_v1_get_user_data(struct zwp_pointer_gesture_swipe_v1 *zwp_pointer_gesture_swipe_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_pointer_gesture_swipe_v1);
}

static inline uint32_t
zwp_pointer_gesture_swipe_v1_get_version(struct zwp_pointer_gesture_swipe_v1 *zwp_pointer_gesture_swipe_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_pointer_gesture_swipe_v1);
}

/**
 * @ingroup iface_zwp_pointer_gesture_swipe_v1
 */
static inline void
zwp_pointer_gesture_swipe_v1_destroy(struct zwp_pointer_gesture_swipe_v1 *zwp_pointer_gesture_swipe_v1)
{
	wl_proxy_marshal_flags((struct wl_proxy *) zwp_pointer_gesture_swipe_v1,
			 ZWP_POINTER_GESTURE_SWIPE_V1_DESTROY, NULL, wl_proxy_get_version((struct wl_proxy *) zwp_pointer_gesture_swipe_v1), WL_MARSHAL_FLAG_DESTROY);
}

/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 * @struct zwp_pointer_gesture_pinch_v1_listener
 */
struct zwp_pointer_gesture_pinch_v1_listener {
	/**
	 * multi-finger pinch begin
	 *
	 * This event is sent when a multi-finger pinch gesture is
	 * detected on the device.
	 * @param time timestamp with millisecond granularity
	 * @param fingers number of fingers
	 */
	void (*begin)(void *data,
		      struct zwp_pointer_gesture_pinch_v1 *zwp_pointer_gesture_pinch_v1,
		      uint32_t serial,
		      uint32_t time,
		      struct wl_surface *surface,
		      uint32_t fingers);
	/**
	 * multi-finger pinch motion
	 *
	 * This event is sent when a multi-finger pinch gesture changes
	 * the position of the logical center, the rotation or the relative
	 * scale.
	 *
	 * The dx and dy coordinates are relative coordinates in the
	 * surface coordinate space of the logical center of the gesture.
	 *
	 * The scale factor is an absolute scale compared to the
	 * pointer_gesture_pinch.begin event, e.g. a scale of 2 means the
	 * fingers are now twice as far apart as on
	 * pointer_gesture_pinch.begin.
	 *
	 * The rotation is the relative angle in degrees clockwise compared
	 * to the previous pointer_gesture_pinch.begin or
	 * pointer_gesture_pinch.update event.
	 * @param time timestamp with millisecond granularity
	 * @param dx delta x coordinate in surface coordinate space
	 * @param dy delta y coordinate in surface coordinate space
	 * @param scale scale relative to the initial finger position
	 * @param rotation angle in degrees cw relative to the previous event
	 */
	void (*update)(void *data,
		       struct zwp_pointer_gesture_pinch_v1 *zwp_pointer_gesture_pinch_v1,
		       uint32_t time,
		       wl_fixed_t dx,
		       wl_fixed_t dy,
		       wl_fixed_t scale,
		       wl_fixed_t rotation);
	/**
	 * multi-finger pinch end
	 *
	 * This event is sent when a multi-finger pinch gesture ceases to
	 * be valid. This may happen when one or more fingers are lifted or
	 * the gesture is cancelled.
	 *
	 * When a gesture is cancelled, the client should undo state
	 * changes caused by this gesture. What causes a gesture to be
	 * cancelled is implementation-dependent.
	 * @param time timestamp with millisecond granularity
	 * @param cancelled 1 if the gesture was cancelled, 0 otherwise
	 */
	void (*end)(void *data,
		    struct zwp_pointer_gesture_pinch_v1 *zwp_pointer_gesture_pinch_v1,
		    uint32_t serial,
		    uint32_t time,
		    int32_t cancelled);
};

/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 */
static inline int
zwp_pointer_gesture_pinch_v1_add_listener(struct zwp_pointer_gesture_pinch_v1 *zwp_pointer_gesture_pinch_v1,
					  const struct zwp_pointer_gesture_pinch_v1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zwp_pointer_gesture_pinch_v1,
				     (void (**)(void)) listener, data);
}

#define ZWP_POINTER_GESTURE_PINCH_V1_DESTROY 0

/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 */
#define ZWP_POINTER_GESTURE_PINCH_V1_BEGIN_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 */
#define ZWP_POINTER_GESTURE_PINCH_V1_UPDATE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 */
#define ZWP_POINTER_GESTURE_PINCH_V1_END_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 */
#define ZWP_POINTER_GESTURE_PINCH_V1_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwp_pointer_gesture_pinch_v1 */
static inline void
zwp_pointer_gesture_pinch_v1_set_user_data(struct zwp_pointer_gesture_pinch_v1 *zwp_pointer_gesture_pinch_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_pointer_gesture_pinch_v1, user_data);
}

/** @ingroup iface_zwp_pointer_gesture_pinch_v1 */
static inline void *
zwp_pointer_gesture_pinch_v1_get_user_data(struct zwp_pointer_gesture_pinch_v1 *zwp_pointer_gesture_pinch_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_pointer_gesture_pinch_v1);
}

static inline uint32_t
zwp_pointer_gesture_pinch_v1_get_version(struct zwp_pointer_gesture_pinch_v1 *zwp_pointer_gesture_pinch_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_pointer_gesture_pinch_v1);
}

/**
 * @ingroup iface_zwp_pointer_gesture_pinch_v1
 */
static inline void
zwp_pointer_gesture_pinch_v1_destroy(struct zwp_pointer_gesture_pinch_v1 *zwp_pointer_gesture_pinch_v1)
{
	wl_proxy_marshal_flags((struct wl_proxy *) zwp_pointer_gesture_pinch_v1,
			 ZWP_POINTER_GESTURE_PINCH_V1_DESTROY, NULL, wl_proxy_get_version((struct wl_proxy *) zwp_pointer_gesture_pinch_v1), WL_MARSHAL_FLAG_DESTROY);
}

#ifdef  __cplusplus
}
#endif

#endif
