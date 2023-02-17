/**
 * @file badge.h
 * @brief Definition des attributs et methodes de la classe
 * @author Liova Hovakimyan
 * @version 1.0
 * @date 03/02/2023
 */

#ifndef BADGE_H
#define BADGE_H

#include <iostream>
#include "date.h"

using namespace std;

class Badge
{
public:
    Badge();
    Badge (string numero, unsigned int debutJ, unsigned int debutM, unsigned int debutA, unsigned int finJ, unsigned int finM, unsigned int finA);
    ~Badge();
    string getNumero();
    void setNumero(string numero);
    Date getDebutValidite();
    void setDebutValidite (Date debut_validite);
    Date getFinValidite();
    void setFinValidite(Date fin_Validite);
    friend std::ostream &operator<<(std::ostream& os, Badge const &B);

private :
    string _numero;
    Date _debut_validite;
    Date _fin_validite;
};

#endif // BADGE_H
