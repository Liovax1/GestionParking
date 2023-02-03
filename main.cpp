/**
 * @file main.c
 * @brief Projet GestionParking
 * @author Liova Hovakimyan & Yann CATTARIN
 * @version 1.0
 * @date 02/02/2023
 */

#include <iostream>
#include "client_parking.h"
#include "voiture.h"
#include "badge.h"

using namespace std;

int main()
{

    Client_parking Torvald ("Torvald", "Linus", "Porsche", "Cayenne", "AA-007-XD");
    cout << "Nom = " << Torvald.getNom() << endl;
    cout << "Prenom = " << Torvald.getPrenom() << endl;

    Voiture voiture_1("Porsche", "Cayenne", "AA-007-XD");
    Voiture voiture_2;
    cout << "Marque Voiture 1: " << voiture_1.getMarque() << endl;
    cout << "Modèle Voiture 1: " << voiture_1.getModele() << endl;
    cout << "Immatriculation Voiture 1: " << voiture_1.getImmatriculation() << endl;

    Client_parking nouveauClient;
    cout << "Nom = " << nouveauClient.getNom() << endl;
    cout << "Prenom = " << nouveauClient.getPrenom() << endl;

    cout << "Infos du nouveau client : " << endl;
    nouveauClient.setNom("Hovakimyan");
    nouveauClient.setPrenom("Liova");

    cout << "Nom = " << nouveauClient.getNom() << endl;
    cout << "Prenom = " << nouveauClient.getPrenom() << endl;

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


    Badge Badge1 ("******", "01/01/1900", "31/12/2022");
    cout << "Numero = " << Badge1.getNumero() << endl;
    cout << "Debut_validite = " << Badge1.getDebutValidite << endl;
    cout << "Fin_validite = " << badge1.getFinValidite << endl;

    return 0;
}

