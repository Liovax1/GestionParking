/**
 * @file badge.cpp
 * @brief Projet GestionParking
 * @author Liova Hovakimyan
 * @version 1.0
 * @date 03/02/2023
 */

#include "badge.h"
#include "date.h"
#include <iostream>
using namespace std;

<<<<<<< HEAD
Badge::Badge()
    : _numero("******")
    , _debut_validite("01/01/1900")
    , _fin_validite("31/12/2022")
=======
<<<<<<< HEAD
Badge::Badge()
    : _numero("******")
//    , _debut_validite("01/01/1900")
//    , _fin_validite("31/12/2022")
>>>>>>> 88860ef47c5c285a60ce706aa7d083b4ab55a686
{
    cout << "Initialisation : " << endl;
}

<<<<<<< HEAD
Badge::~Badge(){

}


=======
>>>>>>> 88860ef47c5c285a60ce706aa7d083b4ab55a686
string Badge::getNumero()
{
    return this-> _numero;
}

void Badge::setNumero(string numero) {
    this-> _numero = numero;
}

<<<<<<< HEAD
Date Badge::getDebutValidite()
=======
string Badge::getDebutValidite()
>>>>>>> 88860ef47c5c285a60ce706aa7d083b4ab55a686
{
    return this -> _debut_validite;
}

<<<<<<< HEAD
void Badge::setDebutValidite(Date debut_validite) {
    this-> _debut_validite = debut_validite;
}

Date Badge::getFinValidite()
=======
void Badge::setDebutValidite(string debut_validite) {
    this-> _debut_validite = debut_validite;
}

string Badge::getFinValidite()
>>>>>>> 88860ef47c5c285a60ce706aa7d083b4ab55a686
{
    return this-> _fin_validite;
}

<<<<<<< HEAD
void Badge::setFinValidite(Date fin_validite) {
    this-> _fin_validite = fin_validite;
}



Badge::Badge(string numero, unsigned int debutJ, unsigned int debutM, unsigned int debutA, unsigned int finJ, unsigned int finM, unsigned int finA)
    : _numero(numero)
    , _debut_validite(debutJ, debutM, debutA)
    , _fin_validite(finJ, finM, finA){
    cout << "Creation badge du client : " << endl;
}

string Badge::getNumero()
{
    return this-> _numero;
}

void Badge::setNumero(string numero) {
    this-> _numero = numero;
}

Date Badge::getDebutValidite()
{
    return this -> _debut_validite;
}

void Badge::setDebutValidite (Date debut_validite)
{
    this-> _debut_validite = debut_validite;


    Date Badge::getFinValidite()
    {
        return this -> _fin_validite;
    }

    void Badge::setFinValidite (Date fin_validite)
    {
        this-> _fin_validite = fin_validite;
=======
void Badge::setNumero(string fin_validite) {
    this-> _fin_validite = fin_validite;
}

Badge::Badge (string numero, unsigned int debutJ, unsigned int debutM, unsigned int debutA, unsigned int finJ, unsigned int finM, unsigned int finA)
{

}
=======
//Badge::Badge()
//    : _numero("******")
//    , _debut_validite("01/01/1900")
//    , _fin_validite("31/12/2022")
//{
//    cout << "Initialisation : " << endl;
//}

//string Badge::getNumero()
//{
//    return this-> _numero;
//}

//void Badge::setNumero(string numero) {
//    this-> _numero = numero;
//}

//string Badge::getDebutValidite()
//{
//    return this -> _debut_validite;
//}

//void Badge::setDebutValidite(Date debut_validite) {
//    this-> _debut_validite = debut_validite;
//}

//string Badge::getFinValidite()
//{
//    return this-> _fin_validite;
//}

//void Badge::setFinValidite(Date fin_validite) {
//    this-> _fin_validite = fin_validite;
//}



//Badge::Badge(string numero, unsigned int debutJ, unsigned int debutM, unsigned int debutA, unsigned int finJ, unsigned int finM, unsigned int finA)
//    : _numero(numero)
//    , _debut_validite(debutJ, debutM, debutA)
//    , _fin_validite(finJ, finM, finA){
//    cout << "Creation badge du client : " << endl;
//}

//string Badge::getNumero()
//{
//    return this-> _numero;
//}

//void Badge::setNumero(string numero) {
//    this-> _numero = numero;
//}

//Date Badge::getDebutValidite()
//{
//    return this -> _debut_validite;
//}

//void Badge::setDebutValidite (Date debut_validite)
//{
//    this-> _debut_validite = debut_validite;


//    Date Badge::getFinValidite()
//    {
//        return this -> _fin_validite;
//    }

//    void Badge::setFinValidite (Date fin_validite)
//    {
//        this-> _fin_validite = fin_validite;
>>>>>>> 3346b2913c981882b36aa4c677963d18c70eeb7b
>>>>>>> 88860ef47c5c285a60ce706aa7d083b4ab55a686
