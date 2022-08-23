#include <iostream>
#include <cctype>
#ifndef rps_H
#define rps_H
using namespace std;
class Game
{      
    public:        
        void win_statement(int winner){
            char user_num;
            switch(winner){
                case 0:
                    cout << "There's a tie!"<< endl;
                    break;
                case 1:
                    cout << "Player 1 wins!" << endl;
                    break;
                case 2:
                    cout << "Player 2 wins!" << endl;
                    break;
                default:
                    cout << "fault; break";
                    break;
            }
            cout << "Play again? (y/n)";
            cin >> user_num;
            if(toupper(user_num) != 'Y'){
                game_run = 0;
            }
        }
        int game_run = 1;
};
class Player: private Game
{
    public:
        char move;
        Player(){
            cout << "enter your move: (R, P, or S) \n";
            cin >> move;
        }        
};

#endif