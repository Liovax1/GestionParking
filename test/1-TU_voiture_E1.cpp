
//#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file

#include <catch2/catch.hpp>


#include "voiture.h"

TEST_CASE("Voiture test", "[voiture]")
{
    Voiture voiture1;
    REQUIRE(voiture1.getMarque() == "Marque_defaut");
    REQUIRE(voiture1.getModele() == "Modele_defaut");
    REQUIRE(voiture1.getImmatriculation() == "XX-XXX-XX");

    Voiture voiture2("Porsche", "Cayenne", "AA-007-XD");
    REQUIRE(voiture2.getMarque() == "Porsche");
    REQUIRE(voiture2.getModele() == "Cayenne");
    REQUIRE(voiture2.getImmatriculation() == "AA-007-XD");

    voiture2.setMarque("Peugeot");
    voiture2.setModele("404");
    voiture2.setImmatriculation("CC-000-BB");
    REQUIRE(voiture2.getMarque() == "Peugeot");
    REQUIRE(voiture2.getModele() == "404");
    REQUIRE(voiture2.getImmatriculation() == "CC-000-BB");
}

