/**
 * \file main.c
 * \brief Programme Principale
 *
 * Jeu de pacman où le joueur doit manger toute le plus de pacsgommes possible sans se faire attraper par les ennemies.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "basics.h"
#include "constant.h"
#include "joueur.h"
#include "plateau.h"
#include "fantome.h"
#include "affichage.h"
int main()
{
    int score=0;
    int destroyedGome=0;//Permet de traquer le nombre pacgommes restant et ainsi d'arreter le jeu si il n'y en a plus
    srand(time(NULL));//Initilalisation du random avec l'heure au lancement du programme
    int** Plateau=creePlateau();
    joueur_t* Joueur1=placer_j(Plateau);
    fantome_t** Fantomes=placer_n_f(Plateau,nb_fantomes);
    printf("Score : %d \n",score);
    afficher(Plateau,Joueur1->symbol);
    while(((deplacer_j(Plateau,Joueur1,&score))&&(deplacer_f(Plateau,Fantomes,&destroyedGome)))&&((score+destroyedGome)<(x_Plateau*y_Plateau)/(100/gomme_pourcent))){
        //Boucle principale de jeu, elle s'arrete si deplacer_j ou deplacer_f renvoie 0 ce qui signifie que le joueur à rencontré un fantome ou alors si il n'y a plus de pacgomes
        system("cls");
        printf("Score : %d \n",score);
        afficher(Plateau,Joueur1->symbol);
    }
    system("cls");
    afficher(Plateau,Joueur1->symbol);
    printf("Fin de partie, votre score est de : %d",score);
    return 1;

}
