#ifndef SOLITAIRE_H_INCLUDED
#define SOLITAIRE_H_INCLUDED

#include <stack>
#include<vector>
using namespace std;
enum Couleur {TREFLE, CARREAU};

enum Valeur {DEUX=2, TROIS=3, QUATRE=4, CINQ=5, SIX=6, SEPT=7,HUIT=8, NEUF=9, DIX=10, VALET=11, DAME=12, ROI=13, AS=1};

typedef struct carte
{
    Valeur valeur;
    Couleur couleur;
    char vis;
}
Carte;
typedef stack<Carte> Pioche;

typedef vector<Pioche> Tpioche ;
void afficher(Carte c);
void Creation_pioche(Pioche *p );
Tpioche FirstDist(Pioche *p, Tpioche t);
void Afficher(Pioche p);
void AfficherTableau(Tpioche t);
Pioche ChangementDetat(Pioche p);
Tpioche DistributionStandard(Pioche *p, Tpioche t);



#endif // SOLITAIRE_H_INCLUDED
