

//#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file

#include <catch2/catch.hpp>


#include "client_parking.h"
//#include "client_parking.cpp"


TEST_CASE("Client_parking test", "[Client_parking]")
{
    Client_parking monClient1;
    REQUIRE(monClient1.getNom() == "nom_defaut");
    REQUIRE(monClient1.getPrenom() == "prenom_defaut");
    
    Client_parking Torvald ("Torvald", "Linus", "Porsche", "Cayenne", "AA-007-XD");
    REQUIRE(Torvald.getNom() == "Torvald");
    REQUIRE(Torvald.getPrenom() == "Linus");
    
    monClient1.setNom("PROUFF");
    monClient1.setPrenom("Sébastien");
    REQUIRE(monClient1.getNom() == "PROUFF");
    REQUIRE(monClient1.getPrenom() == "Sébastien");
}

