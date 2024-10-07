/*
    Nom du projet   :   Afficher nombres premiers
    Auteur          :   Martin Derleth
    Date            :   October 7, 2024
    Nom du fichier  :   main.cpp
    Version         :   1.1.0
*/

#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    //Quelques variables
    bool redemarrage   = true   ;
    bool entree_fausse = false  ;

    unsigned char   entree_restart  ;
    unsigned int    choix_limite    ;

    do {
        //Saisie d'utilisateur
        do {
            cout << "Entrer une valeur       [2-1000] : ";
            cin  >> choix_limite;

            if   (choix_limite > 1 && choix_limite < 1001)  entree_fausse = false  ;
            else                                            entree_fausse = true   ;

        } while (entree_fausse);


        //Affichage
        unsigned int increment_premier = 2;
        do {
            for (int colonne = 0; colonne < 5;) {

                //Si nombre 2, alors cas spécial
                if (increment_premier == 2) {
                    cout << '\t' << "2" << " ";
                    ++colonne;
                }
                //Sinon on continue comme normal
                else {
                    bool estPremier = true;

                    for (int calcul = 2; calcul <= sqrt(increment_premier); ++calcul) {
                        if (increment_premier % calcul == 0) {
                            estPremier = false;
                        }
                    }

                    if (estPremier) {
                        cout << '\t' << increment_premier << " ";
                        ++colonne;
                    }
                }

                ++increment_premier;

                //Sortir de la boucle, au cas où aurait fini avant les 5 éléments de la ligne
                if (increment_premier > choix_limite) break;

            }
                cout << endl;

        } while (increment_premier <= choix_limite);


        //Démarrage du programme à nouveau si utilisateur le désire
        do {
            entree_fausse = false;

            cout << "Voulez-vous recommencer [O/N]    : "   ;
            cin  >> entree_restart                          ;

            if      (entree_restart == 'N') redemarrage     = false;
            else if (entree_restart == 'O') redemarrage     = true ;
            else                            entree_fausse   = true ;

        } while (entree_fausse);

    } while (redemarrage);

    return EXIT_SUCCESS;
}
