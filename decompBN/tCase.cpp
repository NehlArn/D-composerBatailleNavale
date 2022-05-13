#include "tCase.h"
#include "tFlotte.h"



//Procédure Creation Cases bateaux
void createCase(int l, int c, Case* mCase) {


    mCase->ligne = l; //création ligne
    mCase->col = c; //création colonne


}

//Fct de comparaison de cases
//Return True si 2 case ligne et col sont =
enum Bool cmpCase(Case mCase, Case tCase) {


    if (mCase.col == tCase.col && mCase.ligne == tCase.ligne)
        return True;
    else
        return False;

}


//Return True si la case passé en paramètre appartient bien à un bateau
enum Bool controlCase(Bateau mBat, Case mCase) {


    int i;
    enum Bool valTest = False;
    for (i = 0; i < MAXCASE; i++) {

        if (cmpCase(mBat.nCase[i], mCase) == True)
            valTest = True;


    }

    return valTest;


}

