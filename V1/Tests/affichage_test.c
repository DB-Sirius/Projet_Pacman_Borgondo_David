#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "basics.h"
#include "constant.h"
#include "joueur.h"
#include "plateau.h"
#include "fantome.h"
#include "affichage.h"

int main(){
    srand(time(NULL));//Initilalisation du random avec l'heure au lancement du programme
    int** Plateau=creePlateau();
    joueur_t* Joueur1=placer_j(Plateau);
    fantome_t** Fantomes=placer_n_f(Plateau,nb_fantomes);
    afficher_brut(Plateau);
    afficher(Plateau,Joueur1->symbol);
    return 1;
}
