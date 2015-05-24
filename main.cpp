#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include "Solitaire.h"

using namespace std;

int main()
{
    Pioche p;
int    n=4;
    while(n>0)
    {
           p= Creation_pioche(p);
n--;
    }
    Afficher( p);

}
