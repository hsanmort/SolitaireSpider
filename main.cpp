#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include "main.h"
#include "Solitaire.h"

using namespace std;

int main( int argc, char *argv[])
{

    Pioche p;
    Tpioche t;
    int    n=4;
    while(n>0)
    {
        Creation_pioche(&p);
        n--;
    }
    init("Hsan");
    t=FirstDist( &p,  t);
    AfficherTableau(t);
    cout<<"changement de la pile le reste"<<endl;
    p= ChangementDetat( p);

    Afficher( p);
    atexit(cleanup);
    while (1)
    {
        /*getInput();
        draw();
        delay(frameLimit);
        frameLimit = SDL_GetTicks() + 16;*/
    }
    exit(0);
}
