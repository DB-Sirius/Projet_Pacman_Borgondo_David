/**
 * \file affichage.h
 * \brief Module gérant l'affichage
 *
 * Module gérant l'affichage
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
* \param board Le Plateau à afficher
* \param
*/
void afficher_brut(int** board);
/**
* \fn void afficher(int** board,char lettreJoueur)
* \brief Fonction affichant le plateau
*
* \param board Le Plateau à afficher
* \param lettreJoueur Le symbol à utiliser pour représenter le joueur
*/
void afficher(int** board,char lettreJoueur);



#endif // AFFICHAGE_H_INCLUDED
