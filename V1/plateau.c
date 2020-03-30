#include "basics.h"
#include "constant.h"
int valide(int x, int y, int** board){
    if((((x>=0)&&(x<x_Plateau))&&((y>=0)&&(y<y_Plateau)))&&(*(getCase(x,y,board)))!=v_mur){
        return 1;
    }
    else{
        return 0;
    }
}

coords_t caseVidesAlea(int** Plateau){
    int x=0;
    int y=0;
    coords_t* cases=malloc(sizeof(coords_t));
    int cpt=0;
    for(y=0;y<y_Plateau;y++){
        for(x=0;x<x_Plateau;x++){
            if((*(getCase(x,y,Plateau)))==v_rien){
                cases=realloc(cases,sizeof(coords_t)*(cpt+1));//Je créé un tableau contenant toutes les cases vides
                (cases+cpt)->x=x;
                (cases+cpt)->y=y;
                cpt++;
            }
        }
    }
    return (*(cases+randint(0,cpt)));//Je renvoie une case aléatoire du tableau entre 0 et la taille du tableau
}

void creeMurExt(int** Plateau){
    int x=0;
    int y=0;
    for(y=0;y<y_Plateau;y++){
        for(x=0;x<x_Plateau;x++){
            if((((x==0)||x==x_Plateau-1)||(y==0))||(y==y_Plateau-1)){
                (*getCase(x,y,Plateau))=v_mur;
            }
        }
    }
}

void creeMur(int** Plateau){
    int cM=0;
    coords_t cHolder;
    for(cM=0;cM<((x_Plateau*y_Plateau)/(100/wall_pourcent));cM++){
        cHolder=caseVidesAlea(Plateau);
        *(getCase(cHolder.x,cHolder.y,Plateau))=v_mur;
    }
}

void creeGome(int** Plateau){
    int cM=0;
    coords_t cHolder;
    for(cM=0;cM<((x_Plateau*y_Plateau)/(100/gomme_pourcent));cM++){
        cHolder=caseVidesAlea(Plateau);
        *(getCase(cHolder.x,cHolder.y,Plateau))=v_gomme;
    }
}

int** creePlateau(){
    int i=0;
    int j=0;
    int** Plateau=malloc(sizeof(int*)*y_Plateau);
    for(i=0;i<y_Plateau;i++){
        *(Plateau+i)=malloc(sizeof(int)*x_Plateau);
        for(j=0;j<x_Plateau;j++){
            *(getCase(j,i,Plateau))=0;
        }
    }
    creeMurExt(Plateau);
    creeMur(Plateau);
    creeGome(Plateau);
    return Plateau;
}
