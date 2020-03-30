#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "basics.h"
#include "constant.h"
#include "plateau.h"
#include <time.h>
#include "joueur.h"
#include "affichage.h"

int main()
{
    int** Plateau=creePlateau();
    int score=0;
    afficher_brut(Plateau);
    joueur_t* Joueur1=placer_j(Plateau);
    afficher(Plateau,Joueur1->symbol);
    *(getCase(0,0,Plateau))=3;
    *(getCase(1,0,Plateau))=0;
    *(getCase(2,0,Plateau))=2;
    Joueur1->x=0;
    Joueur1->y=0;
    printf("Test ennemie rencontre : %d \n",update_j(Plateau,Joueur1,&score));
    Joueur1->x=1;
    Joueur1->y=0;
    printf("Test case vide: %d \n",update_j(Plateau,Joueur1,&score));
    Joueur1->x=2;
    Joueur1->y=0;
    printf("Test pacgome rencontre : %d\n",update_j(Plateau,Joueur1,&score));
    printf("Score :%d\n",score);
    return 1;
}

