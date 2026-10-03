#ifndef _SDL_H
#define _SDL_H
#endif
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
/* Printable keys */
#define SDLK_a 'a'
#define SDLK_b 'b'
#define SDLK_c 'c'
#define SDLK_d 'd'
#define SDLK_e 'e'
#define SDLK_f 'f'
#define SDLK_g 'g'
#define SDLK_h 'h'
#define SDLK_i 'i'
#define SDLK_j 'j'
#define SDLK_k 'k'
#define SDLK_l 'l'
#define SDLK_m 'm'
#define SDLK_n 'n'
#define SDLK_o 'o'
#define SDLK_p 'p'
#define SDLK_q 'q'
#define SDLK_r 'r'
#define SDLK_s 's'
#define SDLK_t 't'
#define SDLK_u 'u'
#define SDLK_v 'v'
#define SDLK_w 'w'
#define SDLK_x 'x'
#define SDLK_y 'y'
#define SDLK_z 'z'

#define SDLK_0 '0'
#define SDLK_1 '1'
#define SDLK_2 '2'
#define SDLK_3 '3'
#define SDLK_4 '4'
#define SDLK_5 '5'
#define SDLK_6 '6'
#define SDLK_7 '7'
#define SDLK_8 '8'
#define SDLK_9 '9'

#define SDLK_RETURN     65293
#define SDLK_BACKSPACE  65288
#define SDLK_TAB        65289
#define SDLK_ESCAPE     65307
#define SDLK_SPACE      32

/* Punctuation keys (X11 KeySyms) */
#define SDLK_MINUS        45   /* - */
#define SDLK_EQUALS       61   /* = */

#define SDLK_LEFTBRACKET  91   /* [ */
#define SDLK_RIGHTBRACKET 93   /* ] */

#define SDLK_BACKSLASH    92   /* \ */

#define SDLK_SEMICOLON    59   /* ; */
#define SDLK_QUOTE        39   /* ' */

#define SDLK_COMMA        44   /* , */
#define SDLK_PERIOD       46   /* . */
#define SDLK_SLASH        47   /* / */

#define SDLK_BACKQUOTE    96   /* ` */

#define SDLK_CAPSLOCK   301
#define SDLK_NUMLOCK    300

#define SDLK_LSHIFT     65505
#define SDLK_RSHIFT     65506
#define SDLK_LCTRL      65507
#define SDLK_RCTRL      65508
#define SDLK_LALT       65513
#define SDLK_RALT       65027

/* Function keys */
#define SDLK_F1         65470
#define SDLK_F2         65471
#define SDLK_F3         65472
#define SDLK_F4         65473
#define SDLK_F5         65474
#define SDLK_F6         65475
#define SDLK_F7         65476
#define SDLK_F8         65477
#define SDLK_F9         65478
#define SDLK_F10        65479
#define SDLK_F11        65480
#define SDLK_F12        65481

#define SDLK_PRINT        65377
#define SDLK_SCRLOCK        65300
#define SDLK_PAUSE        65299

#define SDLK_INSERT        65379
#define SDLK_HOME        65360
#define SDLK_PAGEUP        65365
#define SDLK_DEL        65535
#define SDLK_END        65367
#define SDLK_PAGEDOWN        65366


/* Cursor keys */
#define SDLK_UP         65362
#define SDLK_DOWN       65364
#define SDLK_RIGHT      65363
#define SDLK_LEFT       65361
/* SDL_Init flags */
#define SDL_INIT_VIDEO       0x00000020
#define SDL_INIT_NOPARACHUTE 0x00100000

/* SDL_SetVideoMode flags */
#define SDL_HWSURFACE        0x00000001
#define SDL_ASYNCBLIT        0x00000004
#define SDL_HWACCEL          0x00000100


#define SDL_BUTTON(X) (1 << ((X) - 1))


// Mouse button IDs
#define SDL_BUTTON_LEFT       1
#define SDL_BUTTON_MIDDLE     2
#define SDL_BUTTON_RIGHT      3
#define SDL_BUTTON_X1        4
#define SDL_BUTTON_X2        5

// Custom mouse wheel "buttons"
// (Application-defined, not part of SDL)
#define SDL_BUTTON_WHEELUP    6
#define SDL_BUTTON_WHEELDOWN  7
#define SDL_RELEASED	0
#define SDL_PRESSED	1



// Mouse button events
#define SDL_MOUSEBUTTONDOWN   0x05
#define SDL_MOUSEBUTTONUP     0x06

// Mouse wheel event
#define SDL_MOUSEWHEEL        0x207

// Mouse motion event
#define SDL_MOUSEMOTION       4

// Quit event
#define SDL_QUIT 256

typedef int16_t		Sint16;
typedef int32_t  Sint32;
typedef uint32_t Uint32;

typedef struct SDL_Rect
{
    int16_t x;
    int16_t y;
    uint16_t w;
    uint16_t h;
} SDL_Rect;

typedef struct SDL_Surface
{
    int w;
    int h;
    int pitch;
    void *pixels;
} SDL_Surface;

int SDL_Init(Uint32 flags);

void *ScreenBufferTemu();
void KeyEventTemu(int eventtype, unsigned int keycode);

SDL_Surface *SDL_SetVideoMode(
    int width,
    int height,
    int bpp,
    Uint32 flags);

void SDL_FreeSurface(SDL_Surface *surface);

SDL_Surface *SDL_CreateRGBSurfaceFrom(
    void *pixels,
    int width,
    int height,
    int depth,
    int pitch,
    Uint32 Rmask,
    Uint32 Gmask,
    Uint32 Bmask,
    Uint32 Amask);

int SDL_BlitSurface(
    SDL_Surface *src,
    const void *srcrect,
    SDL_Surface *dst,
    void *dstrect);

void SDL_UpdateRect(
    SDL_Surface *screen,
    int x,
    int y,
    Uint32 w,
    Uint32 h);

//Keybaord events
typedef uint8_t  Uint8;
typedef uint16_t Uint16;

/* Event types */
#define SDL_KEYDOWN 2
#define SDL_KEYUP   3

/* Minimal key definitions */
typedef int SDLKey;

typedef struct SDL_keysym
{
    Uint8 scancode;
    SDLKey sym;
    int mod;
    Uint16 unicode;
} SDL_keysym;

typedef struct SDL_KeyboardEvent
{
    Uint8 type;
    Uint8 which;
    Uint8 state;
    SDL_keysym keysym;
} SDL_KeyboardEvent;
/*
 * Mouse motion event
 * Used with SDL_MOUSEMOTION
 */
typedef struct SDL_MouseMotionEvent
{
    Uint8 type;        /* SDL_MOUSEMOTION */
    Uint8 state;       /* Current button state */
    Uint16 x, y;       /* Current mouse position */
    Sint16 xrel, yrel; /* Relative motion */
} SDL_MouseMotionEvent;


/*
 * Mouse button event
 * Used with SDL_MOUSEBUTTONDOWN / SDL_MOUSEBUTTONUP
 */
typedef struct SDL_MouseButtonEvent
{
    Uint8 type;        /* SDL_MOUSEBUTTONDOWN or SDL_MOUSEBUTTONUP */
    Uint8 button;      /* The mouse button index */
    Uint8 state;       /* The button state: SDL_PRESSED or SDL_RELEASED */
    Uint16 x, y;       /* Mouse coordinates at the time of the event */
} SDL_MouseButtonEvent;


/*
 * Mouse wheel event
 * Used with SDL_MOUSEWHEEL
 */
typedef struct SDL_MouseWheelEvent
{
    Uint32 type;        // SDL_MOUSEWHEEL
    Uint32 timestamp;   // Event timestamp

    Uint32 windowID;    // Window where event occurred

    Uint32 which;       // Mouse device ID

    Sint32 x;           // Horizontal wheel movement
    Sint32 y;           // Vertical wheel movement

    Uint32 direction;   // SDL_MOUSEWHEEL_NORMAL / FLIPPED

} SDL_MouseWheelEvent;

typedef union SDL_Event
{
    Uint8 type;
    SDL_KeyboardEvent key;
    SDL_MouseMotionEvent motion;
    SDL_MouseButtonEvent button;
    SDL_MouseWheelEvent wheel;
} SDL_Event;

int SDL_PollEvent(SDL_Event *event);
Uint8 SDL_GetMouseState(int *x, int *y);

#ifdef __cplusplus
} 

#endif
