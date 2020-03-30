/**
 * \file plateau.h
 * \brief Module gérant le plateau
 *
 * Module gérant la création du plateau (mur,bonus) et les tests et recherches sur le plateau
 *
 */
#ifndef PLATEAU_H_INCLUDED
#define PLATEAU_H_INCLUDED
#include "basics.h"
#include <stdio.h>
#include <stdlib.h>
/**
* \fn int valide(int x, int y, int** board)
* \brief Fonction testant si une case contient un mur et est dans les limites du plateau
*
* \param x Coordonné en x de la case à testé
* \param y Coordonné en y de la case à testé
* \param board Plateau sur lequel la case doit être cherché
* \return 1 si la case ne contient pas un mur et est dans les limites du plateau, 0 sinon
*/
int valide(int x, int y, int** board);
/**
* \fn coords_t caseVidesAlea(int** Plateau)
* \brief Fonction renvoyant une case vide aléatoire du plateau, utilisé pour la création de nouvel objets
*
* \param board Plateau sur lequel la case doit être cherché
* \return Un objet coords coorespondant aux coordonnées de la case vide
*/
coords_t caseVidesAlea(int** Plateau);
/**
* \fn void creeMurExt(int** Plateau)
* \brief Fonction créant les murs extérieur du plateau
*
* \param Un int** avec des murs extérieur
*/
void creeMurExt(int** Plateau);
/**
* \fn void creeMur(int** Plateau)
* \brief Fonction créant aléatoirement des murs au sein d'un plateau
*
* \param Un int** avec des murs aléatoires
*/
void creeMur(int** Plateau);
/**
* \fn void creeGome(int** Plateau)
* \brief Fonction créant aléatoirement des pacgommes au sein d'un plateau
*
* \param Un int** avec des pacgommes aléatoire
*/
void creeGome(int** Plateau);
/**
* \fn int** creePlateau()
* \brief Fonction allouant de la memoire pour le pointeur joueur et initialisant les case a 00
*
* \return Instance nouvellement allouée d'un objet de type int**
*/
int** creePlateau();



#endif // PLATEAU_H_INCLUDED
