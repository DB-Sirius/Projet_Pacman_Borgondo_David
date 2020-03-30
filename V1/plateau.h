/**
 * \file plateau.h
 * \brief Module g�rant le plateau
 *
 * Module g�rant la cr�ation du plateau (mur,bonus) et les tests et recherches sur le plateau
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
* \param x Coordonn� en x de la case � test�
* \param y Coordonn� en y de la case � test�
* \param board Plateau sur lequel la case doit �tre cherch�
* \return 1 si la case ne contient pas un mur et est dans les limites du plateau, 0 sinon
*/
int valide(int x, int y, int** board);
/**
* \fn coords_t caseVidesAlea(int** Plateau)
* \brief Fonction renvoyant une case vide al�atoire du plateau, utilis� pour la cr�ation de nouvel objets
*
* \param board Plateau sur lequel la case doit �tre cherch�
* \return Un objet coords coorespondant aux coordonn�es de la case vide
*/
coords_t caseVidesAlea(int** Plateau);
/**
* \fn void creeMurExt(int** Plateau)
* \brief Fonction cr�ant les murs ext�rieur du plateau
*
* \param Un int** avec des murs ext�rieur
*/
void creeMurExt(int** Plateau);
/**
* \fn void creeMur(int** Plateau)
* \brief Fonction cr�ant al�atoirement des murs au sein d'un plateau
*
* \param Un int** avec des murs al�atoires
*/
void creeMur(int** Plateau);
/**
* \fn void creeGome(int** Plateau)
* \brief Fonction cr�ant al�atoirement des pacgommes au sein d'un plateau
*
* \param Un int** avec des pacgommes al�atoire
*/
void creeGome(int** Plateau);
/**
* \fn int** creePlateau()
* \brief Fonction allouant de la memoire pour le pointeur joueur et initialisant les case a 00
*
* \return Instance nouvellement allou�e d'un objet de type int**
*/
int** creePlateau();



#endif // PLATEAU_H_INCLUDED
