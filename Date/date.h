#ifndef DATE_H
#define DATE_H
#include <iostream>

using namespace std;

/**
 * @file date.h
 * @brief Header-File de la classe Date
 * @author Yann CATTARIN
 * @version v1.0
 * @class Date
 * @date 08/02/2022
 */


class Date
{
public:

    Date();
    Date(unsigned int j, unsigned int m, unsigned int a);
    Date(const Date &);
    ~Date();
    friend std::ostream &operator<<(std::ostream &, const Date &);

private:
    unsigned int _jour;
    unsigned int _mois;
    unsigned int _annee;
};

#endif // DATE_H

