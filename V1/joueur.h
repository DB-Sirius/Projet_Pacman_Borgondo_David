/**
 * \file joueur.h
 * \brief Module gérant le joueur
 *
 * Module gérant le joueur.
 *
 */
#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
*\struct joueur joueur.h
*\brief Structure du Joueur
*
*Structure contenant les information relative aux joueurs : les coordonees x et y et le symbol le représentant
*/
typedef struct joueur{
    int x;/*!Coordonne horizontale du joueur */
    int y;/*!Coordonne vertical du joueur */
    char symbol;/*!Symbol representant le joueur*/
}joueur_t;

/**
* \fn joueur_t* placer_j(int** pl)
* \brief Fonction allouant de la memoire pour le pointeur joueur et le placant sur un espace vide du plateau
*
* \param pl Plateau sur lequel le joueur doit être positionne.
* \return Instance nouvellement allouée d'un objet de type joueur_t*.
*/
joueur_t* placer_j(int** pl);
/**
* \fn update_j(int** pl, joueur_t* jou,int* score)
* \brief Fonction mettant à jour la position du joueur dans le tableau plateau apres qu'il ait été déplacé.
*
* \param pl Plateau de jeu.
* \param jou Joueur dont la position doit être mise à jour.
* \param score Score du joueur qu'on incrémente si il mange un pacgome.
* \return 1 si le joueur n'as pas rencontré d'ennemie, 0 si il a rencontre un ennemie.
*/
int update_j(int** pl, joueur_t* jou,int* score);
/**
* \fn int deplacer_j(int** pl,joueur_t *jou,int* score)
* \brief Fonction demandant la direction vers laquelle le joueur veux se deplacer et le deplacant dans la direction indiqué si possible, dans le cas contraire : passe le tour
*
* \param pl Plateau de jeu.
* \param jou Joueur à déplacé
* \param score Score du joueur qu'on incrémente si il mange un pacgome.
* \return 1 si le joueur n'as pas rencontré d'ennemie, 0 si il a rencontre un ennemie.
*/
int deplacer_j(int** pl,joueur_t *jou,int* score);

#endif // JOUEUR_H_INCLUDED
