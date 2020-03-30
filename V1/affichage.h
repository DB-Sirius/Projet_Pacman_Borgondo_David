/**
 * \file affichage.h
 * \brief Module g�rant l'affichage
 *
 * Module g�rant l'affichage
 *
 */
#ifndef AFFICHAGE_H_INCLUDED
#define AFFICHAGE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
/**
* \fn void afficher_brut(int** board)
* \brief Fonction affichant les valeurs bruts du plateau
*
* \param board Le Plateau � afficher
* \param
*/
void afficher_brut(int** board);
/**
* \fn void afficher(int** board,char lettreJoueur)
* \brief Fonction affichant le plateau
*
* \param board Le Plateau � afficher
* \param lettreJoueur Le symbol � utiliser pour repr�senter le joueur
*/
void afficher(int** board,char lettreJoueur);



#endif // AFFICHAGE_H_INCLUDED
