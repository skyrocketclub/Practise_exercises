#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

/*
 ************************************************************************************
 * PSUEDO------------------CODE
 * DEFINING THE RULES OF THE GAME
 * 1. YOU ALWAYS ROLL TWO DICE
 * 2. THERE IS SOME KIND OF WINDOW TO DETECT WHAT HAPPENS IN YOUR FIRST THROW
 *              IF YOU LAND 7 OR 11 IN YOUR FIRST THROW, YOU WIN
 *              IF YOU LAND 2, 3 OR 12 IN YOUR FIRST THROW, YOU LOSE AND THE HOUSE WINS
 *              IF YOU LAND 4 5 6 8 9 OR 10 IN YOUR FIRST THROW, YOU ENTER ANOTHER LOOOOOOOOOOP
 *                              YOU THEN PLACE THAT POINT TO BE YOUR NEW GOAL
 *                              YOU PLAY THE GAME TILL YOU WIN OR LOSE
 *                              IF YOU LAND THE POINT FIRST(WHICH IS YOUR TARGET) YOU WIN
 *                              IF YOU LAND 7 BEFORE LANDING THE POINT, YOU LOSE...
 * */
 
 int throw_dice(int dice1, int dice2){
        int sum = dice1 + dice2;
        cout<<"You threw "<<dice1<<" & "<<dice2<<" = " <<sum<<endl;
        return sum;
 }
 

int main() {

    char start {};
    cout<<"WELCOME TO UNILAG STAFF CLUB CRAPS...\nPRESS 1 TO ROLL THE DICE:  ";
    cin>>start;
    if(start == '1'){
          int dice1 {}, dice2 {} , sum {}, target {};
           srand(time(nullptr)); //The random number is seeded here.......
            dice1 = rand()%6+1;
            dice2 = rand()%6+1;
           sum= throw_dice(dice1, dice2);
        
        if(sum == 7 || sum == 11){
            cout<<"MAESTRO!, You Win! "<<endl;
        }
        
        else if( sum ==2 || sum == 3 || sum == 12){
            cout<<"YOU LOST! But you wer CLOSE! Like to Play Again? "<<endl;
        }
        
        else {
            target = sum;
            do{
                            dice1 = rand()%6+1;
                            dice2 = rand()%6+1;
                            sum= throw_dice(dice1, dice2);
            }
            while( sum != target && sum != 7 );
            
            if(sum==target){
                cout<<"MAESTRO!, You Win! "<<endl;
            }
            
            else if (sum == 7){
                cout<<"YOU LOST! But you were CLOSE! Like to Play Again? "<<endl;
            }
        }
    }
    
 
   
    return 0;
}