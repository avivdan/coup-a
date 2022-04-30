#include "Player.hpp"
using namespace std;
using namespace coup;
namespace coup
{
    class Duke: public Player{
        public:
            Duke(Game& _game, string _name): Player(_game, _name){
                this->_game = _game;
                this->_name = _name;
                // Player(_game, _name);
            }
            // ~Duke(): Player();
            void block(Player& p);
            Duke& tax();
            string role();
    };
    
} // namespace name
