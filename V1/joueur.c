#include "plateau.h"
#include "joueur.h"
#include "constant.h"
#include "basics.h"
joueur_t* placer_j(int** pl){
    joueur_t* Player=malloc(sizeof(joueur_t));
    coords_t sCase=caseVidesAlea(pl);//Je sauvegarde les coordonnées vers une cases vides
    Player->x=sCase.x;
    Player->y=sCase.y;
    printf("Quel lettre souhaitez-vous utilisez?\n");
    scanf("%c",&(Player->symbol));
    fflush(stdin);//Vidage du buffeur pour empecher le retour chariot d'être pris pour la prochaine demande
    *(getCase(sCase.x,sCase.y,pl))=v_joueur;//player
    return Player;
}

int update_j(int** pl, joueur_t* jou,int* score){
    if((*(getCase(jou->x,jou->y,pl))==v_ennemy)){//Si le joueur est sur une case ou se trouve un ennemy renvoie 0
        return 0;
    }
    else if(*(getCase(jou->x,jou->y,pl))==v_gomme){//Si le joueur est sur une case ou se trouve un pacgomme on incremente le score de 1
        (*(score))+=1;
    }
    (*(getCase(jou->x,jou->y,pl)))=v_joueur;//Je met la cellule correspondante aux coordonnée donnée à la valeur correspondant au joueur dans le tableau
    return 1;
}

int deplacer_j(int** pl,joueur_t *jou,int* score){
    char direction;
    printf("Veuillez entrez z(haut), s(bas), q(gauche) ou d(droite) pour vous deplacez dans la direction indique :\n");
    *(getCase(jou->x,jou->y,pl))=v_rien;//On met la case ou se tenait le joueur precedement a la valeur correspondant a rien
    scanf("%c",&direction);
    direction=tolower(direction);
    fflush(stdin);//Vidage du buffeur pour empecher le retour chariot d'être pris pour la prochaine demande
    while((((direction!='z')&&(direction!='s'))&&(direction!='q'))&&(direction!='d')){//On redemande tant que la valeur n'est pas correcte
        printf("Valeur entre incorrecte.\nVeuillez entrez z(haut), s(bas), q(gauche) ou d(droite) pour vous deplacez dans la direction indique :\n");
        scanf("%c",&direction);
        direction=tolower(direction);//On passe le caractere en minuscule pour plus de flexibilité
        fflush(stdin);
    }
    switch(direction){
        case 'z':
            if(valide((jou->x),(jou->y)-1,pl)){
                jou->y-=1;
                printf("a");
               }
            break;
        case 's':
            if(valide((jou->x),(jou->y)+1,pl)){
                jou->y+=1;
               }
            break;
        case 'q':
            if(valide((jou->x)-1,(jou->y),pl)){
                jou->x-=1;
               }
            break;
        case 'd':
            if(valide((jou->x)+1,(jou->y),pl)){
                jou->x+=1;
               }
            break;
    }
    return update_j(pl,jou,score);//Update de la position au sein de la fonction de deplacement car on update toujours la position après le déplacement
}
