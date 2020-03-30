#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "basics.h"
#include "constant.h"
#include "plateau.h"
#include <time.h>
#include "fantome.h"
#include "affichage.h"

int main(){
    int** Plateau=creePlateau();
    int destroyedGome=0;
    afficher_brut(Plateau);
    fantome_t** Fantome=placer_n_f(Plateau,nb_fantomes);
    afficher(Plateau,'J');
    *(getCase(0,0,Plateau))=4;
    *(getCase(1,0,Plateau))=0;
    *(getCase(2,0,Plateau))=2;
    (*(Fantome))->x=0;
    (*(Fantome))->y=0;
    printf("Test joueur rencontre : %d \n",update_f(Plateau,Fantome,&destroyedGome));
    (*(Fantome))->x=1;
    (*(Fantome))->y=0;
    printf("Test case vide : %d \n",update_f(Plateau,Fantome,&destroyedGome));
    (*(Fantome))->x=2;
    (*(Fantome))->y=0;
    printf("Test pacgomme rencontre : %d \n",update_f(Plateau,Fantome,&destroyedGome));
    printf("DestroyedGome :%d\n",destroyedGome);
    return 1;
}
