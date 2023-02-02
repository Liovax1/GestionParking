/**
<<<<<<< HEAD
 * @file main.c
 * @brief Projet GestionParking
 * @author Liova Hovakimyan Yann CATTARIN
 * @version 1.0
 * @date 26/01/2023
 */

#include <iostream>
#include "client_parking.h"
//#include "voiture.h"

using namespace std;

int main()
{

    Client_parking client ("Thorvald", "Linus");
    cout << "Nom = " << client.getNom() << endl;
    cout << "Prenom = " << client.getPrenom() << endl;

    Client_parking nouveauClient;
    cout << "Nom = " << nouveauClient.getNom() << endl;
    cout << "Prenom = " << nouveauClient.getPrenom() << endl;

    cout << "Infos du nouveau client : " << endl;
    nouveauClient.setNom("Hovakimyan");
    nouveauClient.setPrenom("Liova");

    cout << "Nom = " << nouveauClient.getNom() << endl;
    cout << "Prenom = " << nouveauClient.getPrenom() << endl;

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

