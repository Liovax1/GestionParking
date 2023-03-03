
#include <catch2/catch.hpp>

#include "badge.h"
#include "client_parking.h"
#include "date.h"
#include "liste_clients.h"

TEST_CASE("Liste  Client_parking et Badge", "[CP&B]")
{
    Liste_clients maListe;

    Badge badgeTorvald("1 7 221 87 161", 13, 2, 1999, 31, 12, 2021);
    Badge badgeBezos("1 7 221 87 162", 12, 12, 2015, 31, 12, 2021);
    Badge badgeJobs("1 7 221 87 163", 26, 5, 2017, 31, 12, 2021);

    Client_parking Torvald("Torvald", "Linus", "Porsche", "Cayenne", "AA-007-XD");
    Client_parking Bezos("Bezos", "Jeff", "Renault", "Zoe", "JF-444-LOL");
    Client_parking Jobs("Jobs", "Steve", "Audi", "Z3", "BB-008-PT");

    Torvald.setBadge(&badgeTorvald);
    Bezos.setBadge(&badgeBezos);
    Jobs.setBadge(&badgeJobs);

    //TU getter/setter
    maListe.addClient(Torvald);
    REQUIRE(maListe.getClient(0).getNom() == "Torvald");

    maListe.addClient(Bezos);
    REQUIRE(maListe.getClient(1).getPrenom() == "Jeff");

    maListe.addClient(Jobs);
    REQUIRE(maListe.getClient(2).getVoiture().getMarque() == "Audi");

    // TU ClientIsValid
    std::string testBadge = "1 7 221 87 161";
    REQUIRE( maListe.ClientIsValid(testBadge) == 0 );
    testBadge = "1 7 221 87 162";
    REQUIRE( maListe.ClientIsValid(testBadge) == 1 );
    testBadge = "1 7 221 87 163";
    REQUIRE( maListe.ClientIsValid(testBadge) == 2 );
    testBadge = "1 7 221 87 164";
    REQUIRE( maListe.ClientIsValid(testBadge) == -1 );
}
