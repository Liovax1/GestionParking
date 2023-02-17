#include <catch2/catch.hpp>

#include <iostream>
#include <sstream>

#include "date.h"
#include "badge.h"

using Catch::Matchers::EndsWith;
using Catch::Matchers::Contains;

using namespace std;


TEST_CASE("TU Classe Badge", "[Badge]")
{
        Badge badge1;
        Date date_debut;
        Date date_fin(31,10,2030);
        REQUIRE(badge1.getNumero() == "******");

        std::stringstream ss;
        ss << badge1.getDebutValidite();
        std::string dateDebut = ss.str();
        REQUIRE_THAT(dateDebut, EndsWith("1/1/1900") );

        ss << badge1.getFinValidite();
        std::string dateFin = ss.str();
        REQUIRE_THAT(dateFin, EndsWith("31/12/2022") );

        //TU setters
        badge1.setNumero("1 7 221 87 160");
        REQUIRE(badge1.getNumero() == "1 7 221 87 160");

        badge1.setDebutValidite(date_debut);
        ss << badge1.getDebutValidite();
        dateDebut = ss.str();
        REQUIRE_THAT(dateDebut, EndsWith("1/1/2020") );

        badge1.setFinValidite(date_fin);
        ss << badge1.getFinValidite();
        dateFin = ss.str();
        REQUIRE_THAT(dateFin, EndsWith("31/10/2030") );
}

TEST_CASE("TU Classe Badge constructeur surchargé", "[Badge2]")
{
        Badge badgeSebastien("1 7 221 87 161", 13,2,1999, 31,12,2023);
// A completer
 
}

TEST_CASE("TU Classe Badge operateur <<", "[Badge3]")
{
    Badge badgeSebastien("1 7 221 87 161", 13,2,1999, 31,12,2023);

    std::stringstream ss;
    ss << badgeSebastien;
    std::string badge = ss.str();
    REQUIRE_THAT(badge, Contains("1 7 221 87 161") );
    REQUIRE_THAT(badge, Contains("13/2/1999") );
    REQUIRE_THAT(badge, EndsWith("31/12/2023") );
}
