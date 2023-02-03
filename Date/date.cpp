#include "date.h"
/**
* @file date.cpp
* @brief Classe responsable de la gestion de la date
* @brief Déclaration des méthodes de la classe
* @author sepro
* @version V2.0
* @date 15/01/2021
*/


using namespace std;

Date::Date()
    : _jour(1)
    , _mois(1)
    , _annee(2020)
{
}

Date::~Date(){}

Date::Date(unsigned int j, unsigned int m, unsigned int a)
    : _jour(j)
    , _mois(m)
    , _annee(a)
{
}

Date::Date(const Date &D)
    : _jour(D._jour)
    , _mois(D._mois)
    , _annee(D._annee)
{
}



ostream &operator<<(ostream &ostr, const Date &d)
{
    return ostr << d._jour << "/" << d._mois << "/" << d._annee;
}





