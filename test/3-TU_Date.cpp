
//#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file

#include <catch2/catch.hpp>

#include <iostream>
#include <sstream>

#include "date.h"
using Catch::Matchers::EndsWith;
using namespace std;


TEST_CASE("TU Classe Date", "[Date]")
{
    Date debut1;
    Date debut2(13,2,1999);
    Date fin2(31, 12, 2021);
//Décommenter pour valider le constructeur de recopie
//    Date datecopie(fin2);

    std::stringstream ss;
    ss << debut1;
    std::string myDate = ss.str();
    REQUIRE_THAT(myDate, EndsWith("1/1/2020") );

    ss << debut2;
    std::string myDate2 = ss.str();
    REQUIRE_THAT(myDate2, EndsWith("13/2/1999") );

//Décommenter pour valider le constructeur de recopie
//    ss << datecopie;
//    std::string myDateCopie = ss.str();
//    REQUIRE_THAT(myDateCopie, EndsWith("31/12/2021") );
}
