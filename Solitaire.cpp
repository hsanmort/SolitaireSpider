#include<stdlib.h>
#include<stdio.h>
#include <iostream>
#include <stack>
#include<vector>
#include <ctime>
#include <typeinfo>

#include "Solitaire.h"
using namespace std;
void afficher(Carte c)
{
    char * t2[]= { "TREFLE","CARREAU" };
    char * t1[]= {"AS","1","2","3","4","5","6","7","8","9","10","V","D","R"};
    char* val1;
    char* c1;
    char* v1;

    val1 = t1[c.valeur];
    c1= t2[c.couleur];

    if(c.vis == 'c')
        cout <<"valeur est "<<val1<<" \tcouleur est "<<c1<< " face cache"<<endl;
    else if(c.vis == 'v')
        cout <<"valeur est "<<val1<<" \tcouleur est "<<c1<< " face visible"<<endl;
}
void Afficher(Pioche p)
{
    Pioche t = p;
    int i=0;
    while(!t.empty())
    {
        cout << i <<" -> ";

        afficher(t.top());
        i++;
        t.pop();
    }
}
void Creation_pioche(Pioche *p)
{
    Tpioche table;
    vector<Carte> total;
    Carte C;
    int X=0;
    int N = 26;

    for(int i=0; i<2 ; i++)
    {
        //cout << endl;
        Couleur coul = static_cast<Couleur>(i);
        for(int j=1; j <= 13; j++)
        {
            Valeur val = static_cast<Valeur>(j);

            C.valeur = val;
            C.couleur = coul;
            C.vis = 'c';
            total.push_back(C);

        }
    }
    srand ( time(NULL) );

    while(N > 0)
    {
        X=rand()% N;

        p->push(total[X]);

        total.erase(total.begin()+X);
        N--;

    }



}
Tpioche FirstDist(Pioche *p, Tpioche t)
{

    Pioche x;

    int j=0;
    for(int k=0; k<10; k++)
    {
        t.push_back(x);
    }
    while(j<54)
    {
        Carte x;
        x = p->top();
        if(j>43)
        {
            x.vis='v';
        }
        t[j%10].push(x);
        p->pop();

        j++;
    }

    return t;
}
void AfficherTableau(Tpioche p)
{
    Tpioche t = p;
    int i=0;
    for(int j=0; j<10; j++)
    {


        Afficher(t[j]);

    }
}
Pioche ChangementDetat(Pioche p)
{
    Pioche t ;

    while(!p.empty())
    {
    Carte c;
    c=p.top();
    c.vis='v';
    t.push(c);
    p.pop();
    }
    p=t;
    return p;
}
Tpioche DistributionStandard(Pioche *p, Tpioche t)
{




    for(int z=0;z<10;z++)
    {
        Carte x;
        x = p->top();
        t[z].push(x);
        p->pop();


    }

    return t;
}
