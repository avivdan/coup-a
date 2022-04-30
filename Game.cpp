
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include "Game.hpp"

using namespace std;
namespace coup
{

    string Game::turn() { return "wow"; }
    vector<string> Game::players()
    {
        vector<string> wow = {""
                              ""
                              ""};
        return wow;
    }
    void Game::winner() {}

} // namespace coup
