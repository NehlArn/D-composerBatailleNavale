#pragma once
#include "tbateau.h"

typedef struct Flotte {

    Bateau nBateau[NBBATEAU];


}Flotte;


enum etatFlotte {


    aFlot, aSombrer

}etatFlotte;

enum Bool controlFlotte(Flotte f, Case mCase);
enum etatJoueur etatJ(Flotte f);
void initFlotteJoueur(Flotte* flotteJoueur1, Flotte* flotteJoueur2, Case mCase);
enum etatFlotte etatFlot(Flotte f);
void attaqueBateau(Flotte* f, Case mCase, int* numBateau);
enum etatBateau etatBat(Flotte f, int numBateau);
int tailleBateau(Flotte f, int numBateau);
void effaceEcran();
void afficheDebug(Flotte f);
void saisirAttaque(Case* mCase);
void minMax(Flotte f, int* minLigne, int* maxLigne, int* minCol, int* maxCol);