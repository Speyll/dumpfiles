#define WORKSPACES      3
#define BUTTONMASK      XCB_EVENT_MASK_BUTTON_PRESS|XCB_EVENT_MASK_BUTTON_RELEASE
#define NET_WM_FIXED    0xffffffff  // Value in WM hint which means this window is fixed on all workspaces.
#define TWOBWM_NOWS     0xfffffffe  // This means we didn't get any window hint at all.
#define LENGTH(x)       (sizeof(x)/sizeof(*x))
#define MIN(X, Y)       ((X) < (Y) ? (X) : (Y))
#define CLEANMASK(mask) (mask & ~(numlockmask|XCB_MOD_MASK_LOCK))
#define CONTROL         XCB_MOD_MASK_CONTROL /* Control key */
#define ALT             XCB_MOD_MASK_1       /* ALT key */
#define SHIFT           XCB_MOD_MASK_SHIFT   /* Shift key */

enum {TWOBWM_MOVE,TWOBWM_RESIZE};
enum {TWOBWM_FOCUS_NEXT, TWOBWM_FOCUS_PREVIOUS};
enum {TWOBWM_RESIZE_LEFT, TWOBWM_RESIZE_DOWN, TWOBWM_RESIZE_UP, TWOBWM_RESIZE_RIGHT,TWOBWM_RESIZE_LEFT_SLOW, TWOBWM_RESIZE_DOWN_SLOW, TWOBWM_RESIZE_UP_SLOW, TWOBWM_RESIZE_RIGHT_SLOW};
enum {TWOBWM_MOVE_LEFT, TWOBWM_MOVE_DOWN, TWOBWM_MOVE_UP, TWOBWM_MOVE_RIGHT,TWOBWM_MOVE_LEFT_SLOW, TWOBWM_MOVE_DOWN_SLOW, TWOBWM_MOVE_UP_SLOW, TWOBWM_MOVE_RIGHT_SLOW};
enum {TWOBWM_TELEPORT_CENTER_X, TWOBWM_TELEPORT_TOP_RIGHT, TWOBWM_TELEPORT_BOTTOM_RIGHT,TWOBWM_TELEPORT_CENTER, TWOBWM_TELEPORT_BOTTOM_LEFT, TWOBWM_TELEPORT_TOP_LEFT, TWOBWM_TELEPORT_CENTER_Y};
enum {BOTTOM_RIGHT, BOTTOM_LEFT, TOP_RIGHT, TOP_LEFT, MIDDLE};
enum {wm_delete_window, wm_change_state, NB_ATOMS};
enum {TWOBWM_RESIZE_KEEP_ASPECT_GROW, TWOBWM_RESIZE_KEEP_ASPECT_SHRINK};
enum {TWOBWM_MAXIMIZE_HORIZONTALLY, TWOBWM_MAXIMIZE_VERTICALLY};
enum {TWOBWM_MAXHALF_FOLD_HORIZONTAL, TWOBWM_MAXHALF_UNFOLD_HORIZONTAL, TWOBWM_MAXHALF_HORIZONTAL_TOP, TWOBWM_MAXHALF_HORIZONTAL_BOTTOM, MAXHALF_UNUSED,TWOBWM_MAXHALF_VERTICAL_RIGHT, TWOBWM_MAXHALF_VERTICAL_LEFT, TWOBWM_MAXHALF_UNFOLD_VERTICAL, TWOBWM_MAXHALF_FOLD_VERTICAL};
enum {TWOBWM_PREVIOUS_SCREEN, TWOBWM_NEXT_SCREEN};
enum {TWOBWM_CURSOR_UP, TWOBWM_CURSOR_DOWN, TWOBWM_CURSOR_RIGHT, TWOBWM_CURSOR_LEFT,TWOBWM_CURSOR_UP_SLOW, TWOBWM_CURSOR_DOWN_SLOW, TWOBWM_CURSOR_RIGHT_SLOW, TWOBWM_CURSOR_LEFT_SLOW};
