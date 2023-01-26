#include "voiture.h"
#include <iostream>

using namespace std;


/**
 * @fn  Voiture::Voiture()
 * @brief initialisation d'une voiture
 */

Voiture::Voiture()
    : _marque("Marque_defaut")
    , _modele("Modele_defaut")
    , _immatriculation("XX-XXX-XX")
{
    cout << "une nouvelle voiture " << endl;
}

/**
* @fn Voiture::~Voiture()
* @brief Detruire la voiture
*/


Voiture::~Voiture()
{
    cout << "Aurevoir  ma voiture " << endl;

}

/**
 * @fn  Voiture::Voiture(string marque , string modele , string immatriculation)
 * @brief initialisation d'une voiture
 * @param string marque : marque de la voiture
 * @param string modele : modele de la voiture
 * @param string immatriculation : immatriculation de la voiture
 */


Voiture::Voiture(string marque , string modele , string immatriculation)
    : _marque(marque)
    , _modele(modele)
    , _immatriculation(immatriculation)
{
    cout << "une nouvelle voiture " << endl;
}


string Voiture::getMarque()
{
    return this->_marque;
}
/**
     * @fn  void Voiture::setMarque(string marque)
     * @brief mutateur de la Marque de la voiture
     * @param string marque : marque de la voiture
     */

void Voiture::setMarque(string marque)
{
    this->_marque = marque;

}
/**
 * @fn  string Voiture::getModele()
 * @brief Accesseur du Modele de la voiture
 * @return string : Modele de la voiture
 */


string Voiture::getModele()
{
    return this -> _modele;


}

/**
 * @fn  void Voiture::setModele(string modele)
 * @param string modele : modele de la voiture
 * @brief mutateur du modele de la voiture
 */

void Voiture::setModele(string modele)
{
    this->_modele = modele;
    /**
     * @fn  string Voiture::getImmatriculation()
     * @brief Accesseur de l'Immatriculation de la voiture
     * @return string : Immatriculation de la voiture
     */


}
string Voiture::getImmatriculation()
{
    return this-> _immatriculation;

}
/**
 * @fn  void Voiture::setImmatriculation(string immatriculation)
 * @param string immatriculation : immatriculation de la voiture
 * @brief mutateur de l'immatriculation de la voiture
 */


void Voiture::setImmatriculation(string immatriculation)
{
    this->_immatriculation = immatriculation;
}
