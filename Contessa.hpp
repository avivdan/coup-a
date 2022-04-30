#include "Player.hpp"
using namespace std;
using namespace coup;
namespace coup
{
    class Contessa: public Player{
        public:
            Contessa(Game& _game, string _name): Player(_game, _name){
                Player(_game, _name);
            }
            //block assasination
            Contessa& block(Player& p){return *this;};
            string role() const{
                return "Contessa";
            }
    };
    
} // namespace coup
