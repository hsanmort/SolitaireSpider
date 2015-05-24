#include<stdlib.h>
#include<stdio.h>
#include <iostream>
#include "Solitaire.h"



#include "main.h"

using namespace std;

int main( int argc, char *argv[] )
{
    init("Hsan");
    //intialization Du jeux
    Pioche p;
    Tpioche t;
    int    n=4;
    while(n>0)
    {
       Creation_pioche(&p);
        n--;
    }
    t=FirstDist( &p,  t);
    AfficherTableau(t);
    //change
    cout<<"changement de la pile le reste"<<endl;
    p= ChangementDetat( p);

    Afficher( p);


}
