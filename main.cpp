/*
    Nom du projet   :   Afficher nombres premiers
    Auteur          :   Martin Derleth
    Date            :   October 4, 2024
    Nom du fichier  :   main.cpp
    Version         :   0.1.1
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    //Variables
    bool redemarrage   = true   ;
    bool entree_fausse = false  ;

    unsigned char   entree_restart  ;
    unsigned int    entree_limite   ;
    unsigned int    premier_calcule ;

    do {

        //Saisie d'utilisateur
        do {
            cout << "Entrer une valeur       [2-1000] : ";
            cin  >> entree_limite;

            if   (entree_limite > 1 && entree_limite < 1001) entree_fausse = false  ;
            else                                             entree_fausse = true   ;

        } while (entree_fausse);


        //Affichage
        /*
        //https://en.wikipedia.org/wiki/Prime_number#/media/File:Sieve_of_Eratosthenes_animation.gif
        //for dans for
        //Si n'est pas divisible par 2, 3, 5, 7 ou n'est pas 2, 3, 5, 7
        */


        //Démarrage du programme à nouveau si utilisateur le désire
        do {
            entree_fausse = false;

            cout << "Voulez-vous recommencer [O/N]    : "   ;
            cin  >> entree_restart                          ;

            if      (entree_restart == 'N') redemarrage     = false;
            else if (entree_restart == 'O') redemarrage     = true ;
            else                            entree_fausse   = true;

        } while (entree_fausse);

    } while (redemarrage);

    return EXIT_SUCCESS;
}
