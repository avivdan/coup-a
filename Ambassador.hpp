#include "Player.hpp"
using namespace std;
using namespace coup;
namespace coup
{ 
    class Ambassador: public Player{
        public:
            Ambassador(Game& _game, string _name): Player(_game, _name){
                Player(_game, _name);
            }
            Ambassador& transfer(Player& p1, Player& p2){return *this;};
            //block steal 
            Ambassador& block(Player& p){return *this;};
            string role() const{
                return "Ambassador";
            }
    };
} // namespace coup
