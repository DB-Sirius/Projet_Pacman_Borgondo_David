#include "constant.h"
#include "basics.h"
#include "plateau.h"
#include "fantome.h"
fantome_t** placer_n_f(int** pl, int n){
    int cpt=0;
    coords_t sCase;
    fantome_t** Fantomes=malloc(sizeof(fantome_t*)*n);
    for(cpt=0;cpt<n;cpt++){
        sCase=caseVidesAlea(pl);//On sauvegarde les coordonnées d'une case dvive
        *(Fantomes+cpt)=malloc(sizeof(fantome_t));
        (*(Fantomes+cpt))->x=sCase.x;
        (*(Fantomes+cpt))->y=sCase.y;
        *(getCase((sCase.x),(sCase.y),pl))=v_ennemy;//On met la valeur correspondant dans le tableau à la valeur correspondant à un ennemie
    }
    return Fantomes;
}

void deplacer_un_f(int** pl, fantome_t *Fantome){
    char moves[4]={' ',' ',' ',' '};//Tableau qui contient tout les déplacement possible pour un afantome
    int cpt=0;
    *(getCase(Fantome->x,Fantome->y,pl))=v_rien;//On met la case ou se tenait le fantome precedement a la valeur correspondant a rien
    //different teste permettant de remplir moves avec les mouvement possible pour le fantomes
    if((valide(Fantome->x,Fantome->y-1,pl))&&((*(getCase(Fantome->x,Fantome->y-1,pl))!=v_ennemy))){
        moves[cpt]='z';
        cpt++;
    }
    if((valide(Fantome->x,Fantome->y+1,pl)&&(*((getCase(Fantome->x,Fantome->y+1,pl)))!=v_ennemy))){
        moves[cpt]='s';
        cpt++;
    }
    if((valide(Fantome->x-1,Fantome->y,pl)&&(*((getCase(Fantome->x-1,Fantome->y,pl)))!=v_ennemy))){
        moves[cpt]='q';
        cpt++;
    }
    if((valide(Fantome->x+1,Fantome->y,pl)&&(*((getCase(Fantome->x+1,Fantome->y,pl)))!=v_ennemy))){
        moves[cpt]='d';
        cpt++;
    }
    switch(moves[randint(0,cpt)]){
        case 'z':
                Fantome->y-=1;
            break;
        case 's':
                Fantome->y+=1;
            break;
        case 'q':
                Fantome->x-=1;
            break;
        case 'd':
                Fantome->x+=1;
            break;
}
}

int update_f(int** pl, fantome_t** fants,int* destroyedGome){
    int id_fant=0;
    for(id_fant=0;id_fant<nb_fantomes;id_fant++){
        if(*(getCase((*(fants+id_fant))->x,(*(fants+id_fant))->y,pl))==v_joueur){
            return 0;//Si le fantome a rencontré un joueur on renvoie 0
        }
        else{
            if((*(getCase((*(fants+id_fant))->x,(*(fants+id_fant))->y,pl)))==2){
                (*(destroyedGome))+=1;//Si le fantome a rencontrer une pacgomme on incremente destroyedGome
            }
            (*(getCase((*(fants+id_fant))->x,(*(fants+id_fant))->y,pl)))=v_ennemy;//On set la valeur du plateau correspondante à la valeur correspondant a un ennemie
        }
    }
    return 1;
}

int deplacer_f(int** pl, fantome_t **fants,int* destroyedGome){
    int id_fant=0;
    for(id_fant=0;id_fant<nb_fantomes;id_fant++){
        deplacer_un_f(pl,*(fants+id_fant));
        if(!(update_f(pl,fants,destroyedGome))){//Update de la position au sein de la fonction de deplacement car on update toujours la position après le déplacement
            return 0;//Si le fantome a rencontré le joueur on renvoie 0
        }
    }
    return 1;
}
