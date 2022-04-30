#include "Player.hpp"
#include "Duke.hpp"
using namespace std;
namespace coup
{
    // class Duke: public Player{
        // public:
            // Duke(Game& _game, string _name): Player(_game, _name){
            //     Player(_game, _name);
            // }
            Duke& Duke::tax(){return *this;}
            void Duke::block(Player& p){}
            string Duke::role(){
                return "Duke";
            }
    // };
    
} // namespace coup
