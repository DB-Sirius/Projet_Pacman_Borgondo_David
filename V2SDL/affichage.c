#include "plateau.h"
#include "constant.h"
void afficher_brut(int** board){
    int i=0;
    int j=0;
    for(i=0;i<y_Plateau;i++){
        for(j=0;j<x_Plateau;j++){
            printf("%d ",*(getCase(j,i,board)));
        }
        printf("\n");
    }
}

void afficher(int** board,char lettreJoueur){
    int i=0;
    int j=0;
    for(i=0;i<y_Plateau;i++){
        for(j=0;j<x_Plateau;j++){
            switch(*(getCase(j,i,board))){
                case v_rien :
                    printf(" ");
                break;
                case v_mur :
                    printf("M");
                break;
                case v_gomme :
                    printf(".");
                break;
                case v_ennemy :
                    printf("F");
                break;
                case v_joueur:
                    printf("%c",lettreJoueur);
                break;
            }
        }
        printf("\n");
    }
}
