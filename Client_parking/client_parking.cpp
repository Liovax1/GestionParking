/**
 * @file main.c
 * @brief Projet GestionParking
 * @author Liova Hovakimyan
 * @version 1.0
 * @date 26/01/2023
 */

#include "client_parking.h"
#include "voiture.h"
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

/**
 * @fn Client_Parking::Client_Parking()
 * @brief Informations initial du nouveau client.
 * @param Client_Parking().
 * @return aucune.
 */

Client_Parking::Client_Parking()
    : _nom("Nom_defaut")
    , _prenom("Prenom_defaut")
    , _marqueV ("Marque_defaut")
    , _modeleV ("Marque_defaut")
    , _immatriculationV ("Marque_defaut"){
    cout << "Informations initial du nouveau client : " <<endl;
}
//Client_Parking::Client_Parking()
//    : _voiture("Nom_defaut")
//    {
//    cout << "Informations initial du nouveau client : " <<endl;
//}

/**
 * @fn Client_Parking::~Client_Parking()
 * @brief Destruction informations du client.
 * @param ~Client_Parking().
 * @return aucune.
 */

Client_Parking::~Client_Parking()
{cout << "Destruction Informations du client" << endl;
}

/**
 * @fn Client_Parking::Client_Parking(string nom, string prenom, string marque, string modele, string immatriculation)
 * @brief Informations du client.
 * @param Client_Parking(string nom, string prenom, string marque, string modele, string immatriculation).
 * @return aucune.
 */

Client_Parking::Client_Parking(string nom, string prenom, string marque, string modele, string immatriculation)
    : _nom(nom)
    , _prenom(prenom)
    , _marqueV(marque)
    , _modeleV(modele)
    , _immatriculationV(immatriculation){
    cout << "Informations du client : " << endl;
}

/**
 * @fn Client_Parking::getVoiture()
 * @brief Acces a la valeur de l'attribut Voiture.
 * @param aucun.
 * @return aucune.
 */


//string Client_Parking::getVoiture()
//{
//    return this-> _voiture;
//}
