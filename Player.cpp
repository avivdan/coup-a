#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include "Player.hpp"

using namespace std;
namespace coup{

    Player::Player(Game &_game, string _name){};

    // Player::~Player();

    Player& Player::income() { return *this; }
    Player& Player::foreign_aid() { return *this; }
    Player& Player::coup() { return *this; }

    int Player::coins() { return 3; }
}

