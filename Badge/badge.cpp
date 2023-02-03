/**
 * @file badge.cpp
 * @brief Projet GestionParking
 * @author Liova Hovakimyan
 * @version 1.0
 * @date 03/02/2023
 */

#include "badge.h"
//#include "date.h"
#include <iostream>
using namespace std;

Badge::Badge()
    : _numero("******")
    , _debut_validite("01/01/1900")
    , _fin_validite(31/12/2022)
{
    cout << "Initialisation : " << endl;
}

string Badge::getNumero()
{
    return this-> _numero;
}

void Badge::setNumero(string numero) {
    this-> _numero = numero;
}

string Badge::getDebutValidite()
{
    return this -> _debut_validite;
}

void Badge::setDebutValidite(string debut_validite) {
    this-> _debut_validite = debut_validite;
}

string Badge::getFinValidite()
{
    return this-> _fin_validite;
}

void Badge::setNumero(string fin_validite) {
    this-> _fin_validite = fin_validite;
}

//Badge::Badge (string numero, unsigned int debutJ, unsigned int debutM, unsigned int debutA, unsigned int finJ, unsigned int finM, unsigned int finA)
//{

//}
