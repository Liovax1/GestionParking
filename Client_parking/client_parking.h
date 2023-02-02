/**
 * @file client_parking.h
 * @brief Definition des attributs et methodes de la classe
 * @author Liova Hovakimyan
 * @version 1.0
 * @date 26/01/2023
 */

#ifndef CLIENT_PARKING_H
#define CLIENT_PARKING_H

#include <iostream>
#include "voiture.h"
using namespace std;


class Client_parking
{
private:
    string _nom;
    string _prenom;
    Voiture _voiture;

public:
    Client_parking();
    Client_parking(string nom, string prenom, string marqueV, string modeleV, string immatriculationV);
    ~Client_parking();
    string getNom();
    void setNom(string nom);
    string getPrenom();
    void setPrenom(string prenom);
    void afficherInfoClientParking();
    void setVoiture(Voiture voiture);
    Voiture getVoiture();

};

#endif // CLIENT_PARKING_H
