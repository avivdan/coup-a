#pragma once
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include "Game.hpp"

using namespace std;

namespace coup{
    class Player{

        public:
            string _name;
            Game _game;
            Player(Game& _game, string _name);

            ~Player(){};

            Player &income();
            Player &foreign_aid();
            Player &coup();

            int coins();
    };
}

