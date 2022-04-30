#include "Player.hpp"
using namespace std;
using namespace coup;
namespace coup
{
    class Assassin: public Player{
        public:
            // using Player::Player;/
            Assassin(Game& _game, string _name): Player(_game, _name){
                Player(_game, _name);
            }
            Assassin& coup(Player& p){return *this;};
            string role() const{
                return "Assassin";
            };
    };
    
} // namespace coup
