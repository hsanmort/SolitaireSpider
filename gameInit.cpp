#include "gameInit.h"
#include "gameInit.h"

/* Fonction qui initialise le jeu */

void init(char *title)
{

    if (SDL_Init(SDL_INIT_VIDEO ) < 0)
    {
        printf("Could not initialize SDL: %s\n", SDL_GetError());
        exit(1);
    }

    jeu.screen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEn_HEIGHT, 0,SDL_HWPALETTE|SDL_DOUBLEBUF);

    if (jeu.screen == NULL)
    {
        printf("Couldn't set screen mode to %d x %d: %s\n", SCREEN_WIDTH,SCREEn_HEIGHT, SDL_GetError());
        exit(1);
    }

    SDL_WM_SetCaption(title, NULL);

}

void cleanup()
{

    /* Quitte la SDL */
    SDL_Quit();

}
