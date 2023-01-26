/**
 * @file main.c
 * @brief Projet GestionParking
 * @author Liova Hovakimyan
 * @version 1.0
 * @date 26/01/2023
 */

#include <iostream>
#include "Client_parking.h"

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

    return 0;
}

