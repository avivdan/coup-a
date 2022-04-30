
#pragma once
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

using namespace std;
namespace coup
{
    class Game{
        
        public:
            Game(){}

            // ~Game();

            string turn();
            vector<string> players();
            void winner();
    };
    
} // namespace coup
