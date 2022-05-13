#include "tCase.h"
#include "tFlotte.h"



//Proc�dure Creation Cases bateaux
void createCase(int l, int c, Case* mCase) {


    mCase->ligne = l; //cr�ation ligne
    mCase->col = c; //cr�ation colonne


}

//Fct de comparaison de cases
//Return True si 2 case ligne et col sont =
enum Bool cmpCase(Case mCase, Case tCase) {


    if (mCase.col == tCase.col && mCase.ligne == tCase.ligne)
        return True;
    else
        return False;

}


//Return True si la case pass� en param�tre appartient bien � un bateau
enum Bool controlCase(Bateau mBat, Case mCase) {


    int i;
    enum Bool valTest = False;
    for (i = 0; i < MAXCASE; i++) {

        if (cmpCase(mBat.nCase[i], mCase) == True)
            valTest = True;


    }

    return valTest;


}

