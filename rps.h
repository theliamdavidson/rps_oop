#include <iostream>
#include <cctype>
#include <string>
#ifndef rps_H
#define rps_H
using namespace std;

class Game{      
    public:            
        char move_array[4] = {'R', 'S', 'P', 'R'};  
        int game_run = 1;   
        int player_data(){
            string move;
            int entry = 1;
            while(entry){
                cout << "enter your move: (R, P, or S) \n";
                cin >> move;
                for(int index = 0; index < 3; index++){
                    if(move_array[index] == toupper(move[0])){
                        return index;
                    }
                }
                cout << "incorrect input, please try again";         
            }
        }
        void win_check(int p1index, int p2index){
            if(p1index == p2index){
                cout << "There's a tie!"<< endl;
            }
            else if ((p1index + 1) == p2index){
                cout << "Player 1 wins!" << endl;
            }
            else{
                cout << "Player 2 wins!" << endl;
            }   
            cout << "Play again? (y/n) ";
            char user_let;
            cin >> user_let;
            if(toupper(user_let) != 'Y'){
                game_run = 0;
            }         
        }  
};

class Player: private Game{
    public:
        int move_index = 0;
        Player(){
            move_index = player_data();
        }        
};
#endif