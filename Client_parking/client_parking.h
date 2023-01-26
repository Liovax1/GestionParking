#ifndef CLIENT_PARKING_H
#define CLIENT_PARKING_H

#include <iostream>
using namespace std;

class Client_parking
{
private:
    string _nom;
    string _prenom;

public:
    Client_parking();
    Client_parking(string nom, string prenom);
    ~Client_parking();
    string getNom();
    void setNom(string nom);
    string getPrenom();
    void setPrenom(string prenom);
    void afficherInfoClientParking();

};

#endif // CLIENT_PARKING_H
