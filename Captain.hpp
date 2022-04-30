#include "Player.hpp"
using namespace std;
using namespace coup;
namespace coup
{
    class Captain: public Player{
        public:
            Captain(Game& _game, string _name): Player(_game, _name){
                Player(_game, _name);
            }
            Captain& steal(Player& p){return *this;};
            //block steal
            Captain& block(Player& p){return *this;};
            string role() const{
                return "Captain";
            }
    };
    
} // namespace coup
