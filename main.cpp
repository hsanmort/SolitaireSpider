#include<stdlib.h>
#include<stdio.h>
#include <iostream>
#include "Solitaire.h"
#include "main.h"
#include "input.c"
using namespace std;

int main( int argc, char *argv[])
{
    unsigned int frameLimit = SDL_GetTicks() + 16;
    int go=1;
    Pioche p;
    Tpioche t;
    int    n=4;
    while(n>0)
    {
        Creation_pioche(&p);
        n--;
    }
    init("Hsan");
    loadGame();
    t=FirstDist( &p,  t);
    AfficherTableau(t);
    cout<<"changement de la pile le reste"<<endl;
    p= ChangementDetat( p);

    Afficher( p);
    atexit(cleanup);
    while (go==1)
    {
        getInput();
        draw();
        delay(frameLimit);
        frameLimit = SDL_GetTicks() + 16;
    }
    exit(0);
}
