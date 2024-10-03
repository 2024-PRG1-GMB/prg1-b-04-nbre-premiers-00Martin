/*
    Nom du projet   :   Afficher nombres premiers
    Auteur          :   Martin Derleth
    Date            :   October 3, 2024
    Nom du fichier  :   main.cpp
    Version         :   0.1.0
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    //Variables
    bool restart       = true   ;
    bool entree_fausse = false  ;
    unsigned char entree_restart;
    unsigned int  entree_limite ;

    do {
        //Saisie utilisateur
        do {
            cout << "Entrer une valeur       [2-1000] : ";
            cin >> entree_limite;

            if (entree_limite > 1 && entree_limite < 1001) entree_fausse = false;
            else entree_fausse = true;

        } while (entree_fausse);

        //Calculs


        //Affichage


        //Démarrage du programme à nouveau si utilisateur le désire
        do {
            entree_fausse = false;

            cout << "Voulez-vous recommencer [O/N]    : ";
            cin >> entree_restart;

            if      (entree_restart == 'N') restart = false;
            else if (entree_restart == 'O') restart = true ;
            else                            entree_fausse = true;

        } while (entree_fausse);

    } while (restart);

    return EXIT_SUCCESS;
}
