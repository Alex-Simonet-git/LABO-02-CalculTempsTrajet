#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/**
 * -----------------------------------------------------
 * title : CalculTempsTrajet
 * Created on : 2026-09-25
 * Last modified on : 2026-09-27
 * Creator : Alexandra Simonet
 * -----------------------------------------------------
 * @return
 */


int main() {
    cout << "As per the instructions of the LABO-2 exercise, this programs shows how long a robot takes to go "
            "retrieve a cube, based on the LABO 2 picture's data." << endl << endl;

    //déclaration des variables
    //distance route (dx) et hors-route (dy) en km
    double dx = 10;
    double dy = 3;

    //distance route avant l2 (valeure par défaut)
    double l1 = 6;


    //BONUS : distance à choix avant l2, donné par l'utilisateur
    cout << "enter a custom road distance the robot needs to drive on the road : " << endl;
    cin >> l1;


    //calcul de l2 avec pythagore et les variable dx, dy et l1
    double l2 = sqrt (pow(dy,2)+pow((dx - l1),2));


    //vitesse route et hors-route en km/h
    const double speed_road = 5;
    const double speed_offroad = 2;


    //calcul du temps des distance sur route et hors route (l1 et l2)
    double temps_total = l1 / speed_road + l2 / speed_offroad;


    //affichage du temps estimé par le programme avec texte
    cout << "\nThe robot takes " << temps_total << " hours to go to the cube" << endl << endl;


    //fin du programme
    return EXIT_SUCCESS;
}