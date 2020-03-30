/**
 * \file basics.h
 * \brief Module contenant les fonctions et structures basiques
 *
 * Module contenant des fonctions basiques
 *
 */
#ifndef BASICS_H_INCLUDED
#define BASICS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
/**
*\struct coords basics.h
*\brief Structure contenant une coordonn� x et y
*
*Structure contenant une coordonn� x et y permettant de renvoyer une coordonn� compl�te avec une fonction
*/
typedef struct coords{
    int x;
    int y;
}coords_t;
/**
* \fn randint(int a,int b)
* \brief Fonction renvoyant un entier al�atoire entre a et b-1
*
* \param a borne de gauche de l'ensemble dans lequel est tir� l'entier al�atoire.
* \param b borne droite(non-inclus) de l'ensemble dans lequel est tir� l'entier al�toire.
* \return int al�atoire entre a et b-1
*/
int randint(int a,int b);
/**
* \fn getCase(int x, int y,int** board
* \brief Fonction renvoyant un pointeur vers la case de coordonn�e donn�e dans un int**
* \param x coordonn�e en x de la case
* \param y coordonn�e en y de la case
* \param board Plateau dans lequel chercher la case
* Cette fonction n'est pas necessaire au programme mais je trouve que la forme de type (*(*tableau+a)+b) manque de clart� pour acc�der � une case d'un tableau
* \return int* la case du tableau correspondant aux coordon�es fournient
*/
int* getCase(int x, int y,int** board);


#endif // BASICS_H_INCLUDED
