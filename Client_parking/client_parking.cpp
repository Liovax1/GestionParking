/**
 * @file client_parking.cpp
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
 * @brief initialisation.
 * @param Client_parking().
 * @return aucune.
 */

Client_parking::Client_parking()
    : _nom("Nom_defaut")
    , _prenom("Prenom_defaut")
    , _voiture() {
    cout << "Initialisation : " <<endl;
}

/**
 * @fn  void Client_parking::afficherInfoClientParking()
 * @brief Afficher les informations du client.
 * @param aucun.
 * @return aucune.
 */

void Client_parking::afficherInfoClientParking()
{
    cout << "Nom = " << getNom();
    cout << "Prenom = " << getPrenom();
    //cout << "Voiture = " << getVoiture();
}

/**
 * @fn Client_parking::Client_parking(string nom, string prenom, string marqueV, string modeleV, string immatriculationV)
 * @brief Initialisation du client.
 * @param string nom = nom du client
 * @param string prenom = prenom du client
 * @param string marqueV = marque de la voiture
 * @param string modeleV = modele de la voiture
 * @param string immatriculationV = immatriculation de la voiture
 * @return aucune.
 */

Client_parking::Client_parking(string nom, string prenom, string marqueV, string modeleV, string immatriculationV)
    : _nom(nom)
    , _prenom(prenom)
    , _voiture(marqueV, modeleV, immatriculationV){
    cout << "Creation infos du client : " << endl;
}

/**
 * @fn Client_parking::~Client_parking()
 * @brief Destruction du client.
 * @param aucun.
 * @return aucune.
 */

Client_parking::~Client_parking()
{cout << "Le client a ete detruit" << endl;
}


/**
 * @fn string Client_parking::getNom()
 * @brief Acces a la valeur de l'attribut Nom.
 * @param aucun.
 * @return Nom du client.
 */

string Client_parking::getNom()
{
    return this-> _nom;
}

/**
 * @fn void Client_parking::setNom(string nom)
 * @brief Modification de la valeur de l'attribut Nom.
 * @param setNom(string nom).
 * @return aucune.
 */

void Client_parking::setNom(string nom) {
    this-> _nom = nom;
}

/**
 * @fn string Client_parking::getPrenom()
 * @brief Acces a la valeur de l'attribut Prenom.
 * @param aucun.
 * @return Prenom du client.
 */

string Client_parking::getPrenom()
{
    return this -> _prenom;
}

/**
 * @fn void Client_parking::setPrenom(string prenom)
 * @brief Modification de la valeur de l'attribut Prenom.
 * @param setPrenom(string prenom).
 * @return aucune.
 */

void Client_parking::setPrenom(string prenom) {
    this-> _prenom = prenom;
}

/**
 * @fn Voiture Client_parking::getVoiture()
 * @brief Acces aux informations de la voiture.
 * @param getVoiture().
 * @return Voiture du client
 */

Voiture Client_parking::getVoiture()
{
    return this-> _voiture;
}

/**
 * @fn void Client_parking::setVoiture(Voiture voiture)
 * @brief Modifications des informations de la voiture
 * @param setVoiture(Voiture voiture).
 * @return aucune.
 */

void Client_parking::setVoiture(Voiture voiture)
{
    this-> _voiture = voiture;
}

