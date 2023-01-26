/**
 * @file main.c
 * @brief Projet GestionParking
 * @author Liova Hovakimyan
 * @version 1.0
 * @date 26/01/2023
 */

#include "client_parking.h"
#include <iostream>

using namespace std;

/**
 * @fn Client_parking::Client_parking()
 * @brief Nom et Prenom initial du nouveau client.
 * @param Client_parking().
 * @return aucune.
 */

Client_parking::Client_parking()
    : _nom("Nom_defaut")
    , _prenom("Prenom_defaut"){
    cout << "Nom et Prenom initial du nouveau client : " <<endl;
}

/**
 * @fn Client_parking::~Client_parking()
 * @brief Destruction du client.
 * @param ~Client_parking().
 * @return aucune.
 */

Client_parking::~Client_parking()
{cout << "Destruction nom et prenom" << endl;
}

/**
 * @fn Client_parking::Client_parking(string nom, string prenom)
 * @brief Initialisation du client.
 * @param Client_parking(string nom, string prenom).
 * @return aucune.
 */

Client_parking::Client_parking(string nom, string prenom)
    : _nom(nom)
    , _prenom(prenom){
    cout << "Nom et Prenom du client : " << endl;
}

/**
 * @fn Client_parking::getNom()
 * @brief Acces a la valeur de l'attribut Nom.
 * @param aucun.
 * @return aucune.
 */

string Client_parking::getNom()
{
    return this-> _nom;
}

/**
 * @fn Client_parking::setNom(string nom)
 * @brief Modification de la valeur de l'attribut Nom.
 * @param setNom(string nom).
 * @return aucune.
 */

void Client_parking::setNom(string nom) {
    this-> _nom = nom;
}

/**
 * @fn Client_parking::getPrenom()
 * @brief Acces a la valeur de l'attribut Prenom.
 * @param aucun.
 * @return aucune.
 */

string Client_parking::getPrenom()
{
    return this -> _prenom;
}

/**
 * @fn Client_parking::setPrenom(string prenom)
 * @brief Modification de la valeur de l'attribut Prenom.
 * @param setPrenom(string prenom).
 * @return aucune.
 */

void Client_parking::setPrenom(string prenom) {
    this-> _prenom = prenom;
}


//afficherInfoClientParking()



