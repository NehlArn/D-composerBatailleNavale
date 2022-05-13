#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<ctype.h>
#include<string.h>

#include "tjoueur.h"
#include "tFlotte.h"

//construit la flotte d'un joueur
/*void fPlayer(Case mCase, Flotte* f) {

    int i;
    int valRandPosLigne=0;
    int valRandPosCol=0;
    int valRandTailleBateau=0;



        for(i=0;i<NBBATEAU;i++){

            valRandPosLigne = rand() % (MAXL-MAXCASE) + 1;
            valRandPosCol = rand() % (MAXC-MAXCASE) + 1;
            valRandTailleBateau = rand() % MAXCASE + 1;
            createCase(valRandPosLigne,valRandPosCol,&mCase);
            f->nBateau[i]=createBateau(mCase,valRandTailleBateau);


        }



}*/

//fct valide saisie joueur
int validSaisiJoueur(char val[]) {

    int i;


    for (i = 0; i < strlen(val); i++) {

        if (!isdigit(val[i]))
            return 0;
    }

    return 1;


}

//procédure saisie val joueur

void saisieJoueur(char valLigne[], char valCol[]) {


    printf("Entrez votre tir\n");

    printf("Entrez ligne :\n");
    scanf_s("%3s", valLigne);
    fflush(stdin);

    printf("Entrez Colonne :\n");
    scanf_s("%3s", valCol);
    fflush(stdin);


}

//procedure Attaque bateau de flotteJoueur
void saisirAttaque(Case* mCase) {

    char valLigne[4], valCol[4];

    saisieJoueur(valLigne, valCol);



    while (!validSaisiJoueur(valLigne) || !validSaisiJoueur(valCol) || (atoi(valLigne) < MINL || atoi(valLigne) > MAXL)
        || (atoi(valCol) < MINC || atoi(valCol) > MAXC)) {

        effaceEcran();
        printf("Mauvaise saisie, recommencer vous devez saisir une val numerique comprise entre %d et %d\n", VALMIN, VALMAX);

        saisieJoueur(valLigne, valCol);


    }
    mCase->ligne = atoi(valLigne);
    mCase->col = atoi(valCol);

}