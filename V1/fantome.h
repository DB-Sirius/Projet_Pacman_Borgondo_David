/**
 * \file fantome.h
 * \brief Module g�rant les fantomes
 *
 * Module g�rant les fantomes
 *
 */
#ifndef FANTOME_H_INCLUDED
#define FANTOME_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
/**
*\struct fantome fantome.h
*\brief Structure des fantomes
*
*Structure contenant les coordones d'un fantomes
*/
typedef struct fantome{
    int x;
    int y;
}fantome_t;
/**
* \fn fantome_t** placer_n_f(int** pl, int n)
* \brief Fonction allouant de la memoire pour un tableau de fantomes du nombre donn� en param�tres et le placant sur un espace vide du plateau
*
* \param pl Tableau dans lequel cree les fantomes
* \param n Nombre d'ennemies a cree
* \return Instance nouvellement allou�e d'un objet de type fantome_t** conteant un nombre n de fantome_t*
*/
fantome_t** placer_n_f(int** pl, int n);
/**
* \fn void deplacer_un_f(int** pl, fantome_t *Fantome)
* \brief Fonction deplacant un fantome au sein du plateau donnes en parametres
* \param pl Tableau dans lequel se situe le fantome
* \param Fantome Fantome � d�placer
*/
void deplacer_un_f(int** pl, fantome_t* Fantome);
/**
* \fn int update_f(int** pl, fantome_t** fants,int* destroyedGome)
* \brief Fonction mettant � jour la position des fantomes dans le plateau apres leurs deplacement
*
* \param pl Tableau dans lequel se situe les fantomes
* \param fants Tableau contenant vers les pointeurs de fantomes
* \param destroyedGome Nombre de pacgomme mang� par les fantomes increment� si un fantome rencontre un pacgomme
* \return 1 si les fantome n'ont pas rencontre de joueur, 0 si un fantome a rencontr� un joueur
*/
int update_f(int** pl, fantome_t** fants,int* destroyedGome);
/**
* \fn int deplacer_f(int** pl, fantome_t **fants,int* destroyedGome)
* \brief Fonction deplacant les fantomes
*
* \param pl Tableau dans lequel se situe les fantomes
* \param fants Tableau contenant les pointeurs vers les fantomes
* \param destroyedGome Nombre de pacgomme mang� par les fantomes increment� si un fantome rencontre un pacgomme
* \return 1 si les fantome n'ont pas rencontre de joueur, 0 si un fantome a rencontr� un joueur
*/
int deplacer_f(int** pl, fantome_t **fants,int* destroyedGome);

#endif // FANTOME_H_INCLUDED
