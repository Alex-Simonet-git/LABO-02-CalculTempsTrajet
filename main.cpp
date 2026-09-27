#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {

    cout << "As per the instructions of the LABO 2 exercise, this programs shows how long a robot takes to go to a cube, based on the LABO 2 picture" << endl << endl;

    //déclaration des variables
    //distance route (dx) et hors-route (dy) en km
    double dx = 10;
    double dy = 3;

    //distance route avant hypoténuse et calcul hors-route hypotenuse
    double l1 = 6;

    //BONUS : custom distance before hypotenuse
    cout << "enter the custom road distance the robot needs to drive" << endl;
    cin >> l1;

    double l2 = sqrt (pow(dy,2)+pow((dx - l1),2));

    //vitesse route et hors-route
    const double speed_road = 5;
    const double speed_offroad = 2;


    //calcul du temps des deux distances

    double Temps_road_L = l1 / speed_road + l2 / speed_offroad;
    cout << "\n The robot takes " << Temps_road_L << " hours to go to the cube with the shortcut. (trl)" << endl;


    return EXIT_SUCCESS;
}

/**
*int main() {

    cout << "As per the instructions of the LABO 2 exercise, this programs shows how long a robot takes to go to a cube, based on the LABO 2 picture" << endl << endl;

    //déclaration des variables
    //distance route et hors-route en km
    double Road_distance = 10;
    double Offroad_distance = 3;

    //distance route avant hypoténuse et calcul hors-route hypotenuse
    double Road_distance_shortcut = 6;

    //BONUS : custom distance before hypotenuse
    double Road_distance_bonus ;
    cout << "enter the custom road distance the robot needs to drive" << endl;
    cin >> Road_distance_bonus;

    double Offroad_hypotenuse = sqrt (pow(Offroad_distance,2)+pow((Road_distance - Road_distance_shortcut),2));
    double Offroad_hypotenuse_bonus = sqrt (pow(Offroad_distance,2)+pow((Road_distance - Road_distance_bonus),2));

    //vitesse route et hors-route
    double Speed_road_1 = 5;
    double Speed_OffRoad2 = 2;



    //calcul du temps des deux distances

    double Temps_road_L = Road_distance_shortcut / Speed_road_1 + Offroad_hypotenuse / Speed_OffRoad2;
    double Temps_road_L_bonus = (Road_distance_shortcut / Speed_road_1) + (Offroad_hypotenuse_bonus / Speed_OffRoad2);
    double Temps_road_D = (Road_distance / Speed_road_1) + (Offroad_distance / Speed_OffRoad2);


    cout << "\n The robot takes " << Temps_road_L << " hours to go to the cube with the shortcut. (trl)" << endl;
    cout << "The robot takes " << Temps_road_D << " hours to go to the cube. (trd)" << endl;

    cout << "The robot takes " << Temps_road_L_bonus << " hours to go to the cube with the custom value." << endl;


    return EXIT_SUCCESS;
}
 *
 *
 *
 *
 */
