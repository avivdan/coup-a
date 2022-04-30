#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
#include "doctest.h"


using namespace std;
using namespace coup;

  
TEST_CASE("only_one"){

    //init
    Game game_1{};
    CHECK_THROWS(game_1.turn());
    CHECK(game_1.players().size() == 0);

    //add players
	Duke duke{game_1, "Moshe"};   
	Assassin assassin{game_1, "Yossi"};   
	Ambassador ambassador{game_1, "Meirav"}; 
	Captain captain{game_1, "Reut"}; 
	Contessa contessa{game_1, "Gilad"};  

    // //roles
    CHECK(duke.role() == "Duke");
    CHECK(assassin.role() =="Assassin");
    CHECK(ambassador.role() =="Ambassador");
    CHECK(captain.role() =="Captain");
    CHECK(contessa.role() == "Contessa");


    CHECK_NOTHROW(duke.income());
    CHECK_NOTHROW(assassin.income());
    CHECK_NOTHROW(ambassador.income());
    CHECK_THROWS(contessa.income());

    CHECK_NOTHROW(captain.income());
    contessa.income();

    duke.foreign_aid();
    assassin.income();
    //cant block foreeign aid
    CHECK_THROWS(ambassador.block(assassin));


    CHECK(duke.coins() == 2);
    CHECK(assassin.coins() == 3);

    CHECK_NOTHROW(duke.block(assassin));

    CHECK(duke.coins() == 2);
    CHECK(assassin.coins() == 1);

    //have 1 coin instead of 3
    CHECK_THROWS(assassin.coup(captain));

    CHECK_THROWS(game_1.winner());
}