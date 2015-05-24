#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include "Solitaire.h"

using namespace std;

int main()
{
    //intialization Du jeux
    Pioche p;
    Tpioche t;
    int    n=4;
    while(n>0)
    {
        p= Creation_pioche(p);
        n--;
    }
     t=FirstDist( p,  t);
     AfficherTableau(t);

   // Afficher( p);

}
