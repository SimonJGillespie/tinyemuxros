#include "SDL.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int SDLKeyToScanCode(SDLKey key)
{
    switch (key)
    {
        /* QWERTY row */
        case SDLK_q: return 24;
        case SDLK_w: return 25;
        case SDLK_e: return 26;
        case SDLK_r: return 27;
        case SDLK_t: return 28;
        case SDLK_y: return 29;
        case SDLK_u: return 30;
        case SDLK_i: return 31;
        case SDLK_o: return 32;
        case SDLK_p: return 33;

        /* Home row */
        case SDLK_a: return 38;
        case SDLK_s: return 39;
        case SDLK_d: return 40;
        case SDLK_f: return 41;
        case SDLK_g: return 42;
        case SDLK_h: return 43;
        case SDLK_j: return 44;
        case SDLK_k: return 45;
        case SDLK_l: return 46;

        /* Bottom row */
        case SDLK_z: return 52;
        case SDLK_x: return 53;
        case SDLK_c: return 54;
        case SDLK_v: return 55;
        case SDLK_b: return 56;
        case SDLK_n: return 57;
        case SDLK_m: return 58;

        /* Number row */
        case SDLK_1: return 10;
        case SDLK_2: return 11;
        case SDLK_3: return 12;
        case SDLK_4: return 13;
        case SDLK_5: return 14;
        case SDLK_6: return 15;
        case SDLK_7: return 16;
        case SDLK_8: return 17;
        case SDLK_9: return 18;
        case SDLK_0: return 19;

        /* Controls */
        case SDLK_ESCAPE:    return 9;
        case SDLK_RETURN:    return 36;
        case SDLK_BACKSPACE: return 22;
        case SDLK_TAB:       return 23;
        case SDLK_SPACE:     return 65;

	/* Punctuation */
        case SDLK_MINUS:        return 20;
        case SDLK_EQUALS:       return 21;

        case SDLK_LEFTBRACKET:  return 34;
        case SDLK_RIGHTBRACKET: return 35;

        case SDLK_BACKSLASH:    return 51;

        case SDLK_SEMICOLON:    return 47;
        case SDLK_QUOTE:        return 48;

        case SDLK_BACKQUOTE:    return 49;

        case SDLK_COMMA:        return 59;
        case SDLK_PERIOD:       return 60;
        case SDLK_SLASH:        return 61;

        /* Modifiers */
        case SDLK_LSHIFT: return 50;
        case SDLK_RSHIFT: return 62;
        case SDLK_LCTRL:  return 37;
        case SDLK_RCTRL:  return 105;
        case SDLK_LALT:   return 64;
        case SDLK_RALT:   return 108;

        /* Locks */
        case SDLK_CAPSLOCK: return 66;
        case SDLK_NUMLOCK:  return 77;

        /* Function keys */
        case SDLK_F1:  return 67;
        case SDLK_F2:  return 68;
        case SDLK_F3:  return 69;
        case SDLK_F4:  return 70;
        case SDLK_F5:  return 71;
        case SDLK_F6:  return 72;
        case SDLK_F7:  return 73;
        case SDLK_F8:  return 74;
        case SDLK_F9:  return 75;
        case SDLK_F10: return 76;
        case SDLK_F11: return 95;
        case SDLK_F12: return 96;

        case SDLK_PRINT: return 107;
        case SDLK_SCRLOCK: return 78;
        case SDLK_PAUSE: return 127;

        case SDLK_INSERT: return 118;
        case SDLK_HOME: return 110;
        case SDLK_PAGEUP: return 112;
	case SDLK_DEL: return 119;
        case SDLK_END: return 115;
        case SDLK_PAGEDOWN: return 117;




        /* Cursor keys */
        case SDLK_LEFT:  return 113;
        case SDLK_RIGHT: return 114;
        case SDLK_UP:    return 111;
        case SDLK_DOWN:  return 116;

        default:
            return 0;
    }
}

int SDLKeyToScanCodei1(unsigned int key)
{
    switch (key)
    {
        /* Number row */
        case SDLK_ESCAPE: return 0x01;
        case SDLK_1: return 0x02;
        case SDLK_2: return 0x03;
        case SDLK_3: return 0x04;
        case SDLK_4: return 0x05;
        case SDLK_5: return 0x06;
        case SDLK_6: return 0x07;
        case SDLK_7: return 0x08;
        case SDLK_8: return 0x09;
        case SDLK_9: return 0x0A;
        case SDLK_0: return 0x0B;

        /* QWERTY row */
        case SDLK_q: return 0x10;
        case SDLK_w: return 0x11;
        case SDLK_e: return 0x12;
        case SDLK_r: return 0x13;
        case SDLK_t: return 0x14;
        case SDLK_y: return 0x15;
        case SDLK_u: return 0x16;
        case SDLK_i: return 0x17;
        case SDLK_o: return 0x18;
        case SDLK_p: return 0x19;

        /* Home row */
        case SDLK_a: return 0x1E;
        case SDLK_s: return 0x1F;
        case SDLK_d: return 0x20;
        case SDLK_f: return 0x21;
        case SDLK_g: return 0x22;
        case SDLK_h: return 0x23;
        case SDLK_j: return 0x24;
        case SDLK_k: return 0x25;
        case SDLK_l: return 0x26;

        /* Bottom row */
        case SDLK_z: return 0x2C;
        case SDLK_x: return 0x2D;
        case SDLK_c: return 0x2E;
        case SDLK_v: return 0x2F;
        case SDLK_b: return 0x30;
        case SDLK_n: return 0x31;
        case SDLK_m: return 0x32;

        /* Controls */
        case SDLK_SPACE: return 0x39;
        case SDLK_RETURN: return 0x1C;
        case SDLK_BACKSPACE: return 0x0E;
        case SDLK_TAB: return 0x0F;

        /* Modifiers */
        case SDLK_LSHIFT: return 0x2A;
        case SDLK_RSHIFT: return 0x36;
        case SDLK_LCTRL: return 0x1D;
        case SDLK_LALT: return 0x38;

        /* Locks */
        case SDLK_CAPSLOCK: return 0x3A;
        case SDLK_NUMLOCK: return 0x45;

        /* Function keys */
        case SDLK_F1: return 0x3B;
        case SDLK_F2: return 0x3C;
        case SDLK_F3: return 0x3D;
        case SDLK_F4: return 0x3E;
        case SDLK_F5: return 0x3F;
        case SDLK_F6: return 0x40;
        case SDLK_F7: return 0x41;
        case SDLK_F8: return 0x42;
        case SDLK_F9: return 0x43;
        case SDLK_F10: return 0x44;

        /* Cursor keys (PC Set 1 extended codes) */
        case SDLK_UP: return 0x48;
        case SDLK_DOWN: return 0x50;
        case SDLK_LEFT: return 0x4B;
        case SDLK_RIGHT: return 0x4D;

        default:
            return 0;
    }
}
SDL_Surface *SDLScreenBuffer;

void *ScreenBufferTemu(){
	if(SDLScreenBuffer !=NULL && SDLScreenBuffer->pixels !=NULL) return SDLScreenBuffer->pixels;
	return(NULL);
}

int SDL_Init(Uint32 flags)
{
    (void)flags;
    return 0;
}

SDL_Surface *SDL_SetVideoMode(
    int width,
    int height,
    int bpp,
    Uint32 flags)
{
    (void)bpp;
    (void)flags;

    SDL_Surface *surface = calloc(1, sizeof(SDL_Surface));
    if (!surface)
        return NULL;

    surface->w = width;
    surface->h = height;
    surface->pitch = width * 4;
    surface->pixels = calloc(height, surface->pitch);

    return surface;
}

void SDL_FreeSurface(SDL_Surface *surface)
{
    if (!surface)
        return;

    free(surface->pixels);
    free(surface);
}

SDL_Surface *SDL_CreateRGBSurfaceFrom(
    void *pixels,
    int width,
    int height,
    int depth,
    int pitch,
    Uint32 Rmask,
    Uint32 Gmask,
    Uint32 Bmask,
    Uint32 Amask)
{
    (void)depth;
    (void)Rmask;
    (void)Gmask;
    (void)Bmask;
    (void)Amask;

    SDL_Surface *surface = calloc(1, sizeof(SDL_Surface));
    if (!surface)
        return NULL;

    surface->w = width;
    surface->h = height;
    surface->pitch = pitch;
    surface->pixels = pixels;

    SDLScreenBuffer=surface;
    return surface;
}

int SDL_BlitSurface(
    SDL_Surface *src,
    const void *srcrect,
    SDL_Surface *dst,
    void *dstrect)
{
    (void)srcrect;
    (void)dstrect;

    if (!src || !dst)
        return -1;

    if (src->pixels && dst->pixels)
    {
        memcpy(dst->pixels, src->pixels, src->pitch * src->h);
    }

    return 0;
}

void SDL_UpdateRect(
    SDL_Surface *screen,
    int x,
    int y,
    Uint32 w,
    Uint32 h)
{
    (void)screen;
    (void)x;
    (void)y;
    (void)w;
    (void)h;
}

int SDLEventTypeTemu = 0;
int SDLEventKeySymTemu = 0;
int SDLNewEventTemu = 0;
int SDLEventMouseYTemu = 0;
int SDLEventMouseXTemu = 0;
Uint8 SDLEventMouseStateTemu = 0;
int SDLEventMouseButtonTemu;

void KeyEventTemu(int eventtype, unsigned int keysym){
	while(SDLNewEventTemu==1) { printf("KeyEventTemu waiting\n"); }
	SDLEventTypeTemu=eventtype;
	SDLEventKeySymTemu=keysym;
	SDLNewEventTemu=1;
}


void MouseButtonEventTemu(int eventtype, unsigned int mousebutton){
	while(SDLNewEventTemu==1) { printf("MouseButtonEventTemu waiting\n"); }
	SDLEventTypeTemu=eventtype;
	SDLEventMouseButtonTemu=mousebutton;
	SDLNewEventTemu=1;
}

void MouseMotionEventTemu(int x, int y){
	if(SDLNewEventTemu==0){
	SDLEventTypeTemu=SDL_MOUSEMOTION;
	SDLEventMouseXTemu=x;
	SDLEventMouseYTemu=y;
	SDLNewEventTemu=1;
	}
}


Uint8 SDL_GetMouseState(int *x, int *y)
{
	if(x==NULL && y==NULL)
		return(SDLEventMouseStateTemu);
	else if (x==NULL)
		y=&SDLEventMouseYTemu;
	else {
		x=&SDLEventMouseXTemu;
		y=&SDLEventMouseYTemu;
	}
	return(SDLEventMouseStateTemu);

}
int SDL_PollEvent(SDL_Event *event)
{

//	if (event==NULL)
 //       return 0;
if(SDLNewEventTemu==1){
  event->type = SDLEventTypeTemu;
  if(event->type==SDL_KEYDOWN || event->type==SDL_KEYUP){ 
    event->key.type = SDLEventTypeTemu;
    event->key.keysym.sym = SDLEventKeySymTemu;
    event->key.keysym.scancode =SDLKeyToScanCode(SDLEventKeySymTemu);
  }
  else if(event->type==SDL_MOUSEBUTTONDOWN || event->type==SDL_MOUSEBUTTONUP){ 
    //SDL_MouseButtonEvent *mbevent = (SDL_MouseButtonEvent *)event;
    event->button.type = SDLEventTypeTemu;
    event->button.button = SDLEventMouseButtonTemu;
    event->button.x = SDLEventMouseXTemu;
    event->button.y = SDLEventMouseYTemu;
    SDLEventMouseStateTemu = event->button.type==SDL_MOUSEBUTTONDOWN ? SDLEventMouseStateTemu | SDL_BUTTON(SDLEventMouseButtonTemu) : SDLEventMouseStateTemu & ~SDL_BUTTON(SDLEventMouseButtonTemu);
  }
  else if(event->type==SDL_MOUSEMOTION){
    //SDL_MouseMotionEvent *mmevent = (SDL_MouseMotionEvent *)event;
    event->motion.type = SDLEventTypeTemu;
    event->motion.x = SDLEventMouseXTemu;
    event->motion.y = SDLEventMouseYTemu;
    event->motion.state = SDLEventMouseStateTemu;
  }


    SDLNewEventTemu=0;

    return 1;
}
else
    return 0;
}
