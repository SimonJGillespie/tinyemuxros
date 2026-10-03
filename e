sdl.c:258:19: error: use of undeclared identifier 'SDL_INIT_VIDEO'
  258 |     if (SDL_Init (SDL_INIT_VIDEO | SDL_INIT_NOPARACHUTE)) {
      |                   ^~~~~~~~~~~~~~
sdl.c:258:36: error: use of undeclared identifier 'SDL_INIT_NOPARACHUTE'
  258 |     if (SDL_Init (SDL_INIT_VIDEO | SDL_INIT_NOPARACHUTE)) {
      |                                    ^~~~~~~~~~~~~~~~~~~~
sdl.c:263:13: error: use of undeclared identifier 'SDL_HWSURFACE'
  263 |     flags = SDL_HWSURFACE | SDL_ASYNCBLIT | SDL_HWACCEL;
      |             ^~~~~~~~~~~~~
sdl.c:263:29: error: use of undeclared identifier 'SDL_ASYNCBLIT'
  263 |     flags = SDL_HWSURFACE | SDL_ASYNCBLIT | SDL_HWACCEL;
      |                             ^~~~~~~~~~~~~
sdl.c:263:45: error: use of undeclared identifier 'SDL_HWACCEL'
  263 |     flags = SDL_HWSURFACE | SDL_ASYNCBLIT | SDL_HWACCEL;
      |                                             ^~~~~~~~~~~
5 errors generated.
make: *** [sdl.o] Error 1
