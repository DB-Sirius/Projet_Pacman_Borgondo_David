/**
 * \file VueSDL.c
 * \brief Gestion de l'affichage graphique en utilisant la SDL
 *
 * Module affichant le jeux sous la forme de rectangle colorées
 *
 */
#ifndef VUESDL_H_INCLUDED
#define VUESDL_H_INCLUDED
/**
* \fn creatWindow(SDL_Window** window)
* \brief Fonction creant une fenetre SDL
* Nomme automatiquement la fenetre "Pacman"
* \param window Le pointeur poitant vers le pointer de la fenetre SDL
*/
void creatWindow(SDL_Window** window);
/**
* \fn int afficher_SDL(SDL_Window** window, int** Area)
* \brief Fonction affichant le plateau sous la forme de rectangles colorée
*
* \param window Le pointeur poitant vers le pointer de la fenetre SDL
* \param Plateau Le plateau à afficher
* \return 1 en cas de succés
*/
int afficher_SDL(SDL_Window** window, int** Plateau);


#endif // VUESDL_H_INCLUDED

