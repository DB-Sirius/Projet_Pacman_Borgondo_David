#include <SDL2/SDL.h>
#include <stdio.h>
#include "constant.h"
#define TWindow 500
void creatWindow(SDL_Window** window){
    SDL_Init(SDL_INIT_VIDEO);
    *(window) = SDL_CreateWindow("Pacman",
                        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                        TWindow, TWindow,
                         SDL_WINDOW_RESIZABLE);
}

int afficher_SDL(SDL_Window** window, int** Plateau)
{
    while (1) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {//Mit en place pour eviter que la fenetre soit considerer comme "ne repond pas" par absence d event
}
        SDL_Renderer* renderer;
        int nX=0;
        int nY=0;
        renderer = SDL_CreateRenderer(*(window), -1, 0);//Creation du pinceau
        SDL_Rect r;
        for(nY=0;nY<y_Plateau;nY++){
            for(nX=0;nX<x_Plateau;nX++){
                switch((*(*(Plateau+nY)+nX))){//On change la couleur en fonction de la valeur indiqué pour cette coordonnée dans le plateau
                    case 0 :
                        SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
                        break;
                    case 1 :
                        SDL_SetRenderDrawColor(renderer, 0, 0, 255, SDL_ALPHA_OPAQUE);
                        break;
                    case 2 :
                        SDL_SetRenderDrawColor(renderer, 0, 255, 0, SDL_ALPHA_OPAQUE);
                        break;
                    case 3 :
                        SDL_SetRenderDrawColor(renderer, 255, 0, 0, SDL_ALPHA_OPAQUE);
                        break;
                    case 4 :
                        SDL_SetRenderDrawColor(renderer, 255, 255, 0, SDL_ALPHA_OPAQUE);
                    break;
                }
                r.x = (((TWindow/x_Plateau)*nX)+1);
                r.y = (((TWindow/y_Plateau)*nY)+1);
                r.w = ((TWindow/x_Plateau)-1);
                r.h = ((TWindow/y_Plateau)-1);
                SDL_RenderFillRect( renderer, &r );
            }
        }
        SDL_RenderPresent(renderer);//On applique les modifications
        SDL_DestroyRenderer(renderer);//On supprime le pinceau
        return 1;
    }
}


