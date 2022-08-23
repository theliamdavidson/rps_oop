#include <iostream>
#include <cctype>
#include <string>
#ifndef rps_H
#define rps_H
using namespace std;


class Game
{      
    public:            
        char mov[4] = {'R', 'S', 'P', 'R'};  
        void move_check(int p1index, int p2index){
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
        int game_run = 1;     
};

class Player: private Game
{
    private: 
        string move;
    public:
        int entry = 1;
        int play_index = 0;
        Player(){
            while(entry){
                cout << "enter your move: (R, P, or S) \n";
                cin >> move;
                for(int i = 0; i < 3; i++){
                    if(mov[i] == toupper(move[0])){
                        entry = 0;
                        play_index = i;
                    }
                }
                if(entry){
                    cout << "incorrect input, please try again";
                }              
            }
        }        
};

#endif