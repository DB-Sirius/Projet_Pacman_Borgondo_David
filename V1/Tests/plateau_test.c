#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "basics.h"
#include "constant.h"
#include "plateau.h"
#include <time.h>
int main()
{
    int** Plateau=creePlateau();
    srand(time(NULL));
    coords_t Case;
    printf("-x : %d\n",valide(-1,1,Plateau));//Test x négatif
    printf(">x : %d\n",valide(x_Plateau,1,Plateau));//Test x plus grand que plateau
    printf("-y : %d\n",valide(1,-1,Plateau));//Test y négatif
    printf(">y : %d\n",valide(x_Plateau,1,Plateau));//Test y plus grand que plateau
    *(*(Plateau))=1;
    printf("Mur : %d\n",valide(0,0,Plateau));//Test case avec un un mur
    *(getCase(5,5,Plateau))=0;
    printf("Vide : %d\n",valide(5,5,Plateau));//Test case vide
    Case=caseVidesAlea(Plateau);
    printf("Case Alea Vide :%d\n",*(getCase(Case.x,Case.y,Plateau)));//Test case séléctionne
    return 1;
}
