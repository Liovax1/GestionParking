/**
 * @file main.cpp
 * @brief Voiture
 * @author Yann CATTARIN
 * @version 1.00
 * @date 27/01/2023
 */

#include <iostream>
#include "voiture.h"
using namespace std;

int main()
{
    Voiture voiture_1("Porsche", "Cayenne", "AA-007-XD");
    Voiture voiture_2;
    cout << "Marque Voiture 1: " << voiture_1.getMarque() << endl;
    cout << "Modèle Voiture 1: " << voiture_1.getModele() << endl;
    cout << "Immatriculation Voiture 1: " << voiture_1.getImmatriculation() << endl;

    cout << "Marque Voiture 2: " << voiture_2.getMarque() << endl;
    cout << "Modèle Voiture 2: " << voiture_2.getModele() << endl;
    cout << "Immatriculation Voiture 2: " << voiture_2.getImmatriculation() << endl;

    cout << "Initialisation des valeurs de la voiture 2: " << endl;
    voiture_2.setMarque("Buggati");
    voiture_2.setModele("Chiron");
    voiture_2.setImmatriculation("JP-700-BC");

    cout << "Affichage après initialisation des valeurs de la voiture 2: " << endl;
    cout << "Marque Voiture 2: " << voiture_2.getMarque() << endl;
    cout << "Modèle Voiture 2: " << voiture_2.getModele() << endl;
    cout << "Immatriculation Voiture 2: " << voiture_2.getImmatriculation() << endl;

    return 0;
}

