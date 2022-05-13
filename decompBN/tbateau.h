#pragma once
#include "tCase.h"

#define MAXCASE 3


typedef struct Bateau {


    Case nCase[MAXCASE];



}Bateau;

enum positionBateau {

    enLigne, enColonne, enDiag

}positionBateau;


enum etatBateau {

    toucher, couler

}etatBateau;

Bateau createBateau(Case nCase, int taille);
int tailleBateau(Flotte f, int numBateau);
