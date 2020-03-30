#include <stdio.h>
#include <stdlib.h>
int randint(int a,int b){//Je réutilise la fonction donné dans le tp précédent
    if(a >= b){
        return a;
    }
    else{
        return rand()%(b-a) + a;
    }
}
int* getCase(int x, int y,int** board){//Cette fonction n'est pas necessaire au programme mais je trouve que la forme de type (*(*tableau+a)+b) manque de clarté pour accéder à une case d'un tableau
    return((*(board+y)+x));
}

