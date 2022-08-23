#include "rps.h"

using namespace std;

int main(){
    Game rps;
    cout << "welcome to rps v3.0, now featuring 100% more swag \n";
    while(rps.game_run){
        cout << "Player 1, ";
        Player p1;
        cout << "Player 2, ";
        Player p2;
        rps.move_check(p1.play_index, p2.play_index);
    }
}
