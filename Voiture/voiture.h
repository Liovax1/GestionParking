/**
 * @file voiture.h
 * @brief Librairie Classe Voiture
 * @author Yann CATTARIN
 * @version 1.00
 * @date 27/01/2023
 */

#ifndef VOITURE_H
#define VOITURE_H

#include <iostream>
using namespace std;
class Voiture
{
public:
    Voiture();
    ~Voiture();
    Voiture(string marque, string modele, string immatriculation);
    string getMarque();
    void setMarque(string marque);
    string getModele();
    void setModele(string modele);
    string getImmatriculation();
    void setImmatriculation(string immatriculation);

private:
    string _marque;
    string _modele;
    string _immatriculation;
};


#endif // VOITURE_H
