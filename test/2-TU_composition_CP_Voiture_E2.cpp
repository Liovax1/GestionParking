
//#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file

#include <catch2/catch.hpp>

#include "client_parking.h"
#include "voiture.h"


TEST_CASE("Association Voiture et CLient parking test", "[voiture]")
{
    Client_parking monClient1;
    REQUIRE(monClient1.getNom() == "nom_defaut");
    REQUIRE(monClient1.getPrenom() == "prenom_defaut");
    REQUIRE(monClient1.getVoiture().getMarque() == "Marque_defaut");
    REQUIRE(monClient1.getVoiture().getModele() == "Modele_defaut");
    REQUIRE(monClient1.getVoiture().getImmatriculation() == "XX-XXX-XX");
    
    Client_parking Torvald("Torvald", "Linus", "Porsche", "Cayenne", "AA-007-XD");
    REQUIRE(Torvald.getNom() == "Torvald");
    REQUIRE(Torvald.getPrenom() == "Linus");
    REQUIRE(Torvald.getVoiture().getMarque() == "Porsche");
    REQUIRE(Torvald.getVoiture().getModele() == "Cayenne");
    REQUIRE(Torvald.getVoiture().getImmatriculation() == "AA-007-XD");
    
    Voiture voiture1("Renault", "kangoo", "BB-999-KJ");
    Torvald.setVoiture(voiture1);
    REQUIRE(Torvald.getVoiture().getMarque() == "Renault");
    REQUIRE(Torvald.getVoiture().getModele() == "kangoo");
    REQUIRE(Torvald.getVoiture().getImmatriculation() == "BB-999-KJ");
}

