#ifndef DEFS_H_INCLUDED
#define DEFS_H_INCLUDED
#define SDL_MAIN_HANDLED

#define CARD_HEIGHT 119
#define CARD_WIDTH 81
#define SCREEN_WIDTH 910
#define SCREEn_HEIGHT 500
#define TRANS_R 255
#define TRANS_G 0
#define TRANS_B 255

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#undef main


typedef struct Input
{

    int left, right, up, down, jump, attack, enter, eras, pause;

} Input;


/* Structure pour gérer le niveau (à compléter plus tard) */

typedef struct Gestion
{

    SDL_Surface *screen;

} Gestion;

  typedef struct Map
  {

      SDL_Surface *background;

  } Map;


#endif // DEFS_H_INCLUDED
