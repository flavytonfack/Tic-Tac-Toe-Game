//
//  main.cpp
//  TicTacGame
//
//  Created by Flavy Tonfack on 7/24/17.
//  Copyright © 2017 Flavy Tonfack. All rights reserved.
//

#include <iostream>
using namespace std;



char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int GameStatus();
void drawBoard();


int main() {
    
    int player = 1, i, input;
    char mark;
    
    do {
        drawBoard();
        player = (player % 2) ? 1:2;
        
        cout << "Player " <<player << ", enter a number: " << endl;
        cin >> input;
        
        mark = (player == 1) ? 'A' : 'B';
        
        if (input == 1 && square[1] == '1')
            square[1] = mark;
        
        else if (input == 2 && square[2] == '2')
            square[2] = mark;
        
        else if (input == 3 && square[3] =='3')
            square[3] = mark;
        
        else if (input == 4 && square[4] =='4')
            square[4] = mark;
        
        else if (input == 5 && square[5] =='5')
            square[5] = mark;
        
        else if (input == 6 && square[6] =='6')
            square[6] = mark;
        
        else if (input == 7 && square[7] =='7')
            square[7] = mark;
        
        else if (input == 8 && square[8] =='8')
            square[8] = mark;
        
        else if (input == 9 && square[9] =='9')
            square[9] = mark;
        
        else
        {
            cout << "Invalid move" << endl;
            player--;
            cin.ignore();
            cin.get();
        }
        
        i = GameStatus();
        
        player ++;
        
    }
  
    while (i==-1);
    
    drawBoard();
    
    if (i==1)
        cout << "Player " <<--player << " win " << endl;
    
    else
        cout << "Game draw " << endl;
    
    cin.ignore();
    cin.get();
    return 0;
}



/****
 FUNCTION TO RETURN GAME STATUS
 1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
 0 GAME IS OVER AND NO RESULT
 *****/

int GameStatus()
{
    if (square[1] == square[2] && square[2] == square[3])
        
        return 1;
    
    else if (square[4] == square[5] && square[5] == square[6])
        
        return 1;
    
    else if (square[7] == square[8] && square[8] == square[9])
        
        return 1;
    
    else if (square[1] == square[4] && square[4] == square[7])
        
        return 1;
    
    else if (square[2] == square[5] && square[5] == square[8])
        
        return 1;
    
    else if (square[3] == square[6] && square[6] == square[9])
        
        return 1;
    
    else if (square[1] == square[5] && square[5] == square[9])
        
        return 1;
    
    else if (square[3] == square[5] && square[5] == square[7])
        
        return 1;
    
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' &&
             square[7] != '7' && square[8] != '8' && square[9] != '9')
    
         return 0;
    
    else
        return -1;
}


/*******
 FUNCTION TO DRAW BOARD OF TIC TAC TOE
 *****/

void drawBoard()
{
    cout <<"Tic Tac Toe Game" << endl;
    cout << endl;
    cout << endl;

    cout <<"Player 1 (A)  &  Player 2 (B)" << endl;
    cout << endl;
    
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    
    cout << "     |     |     " << endl;
}








































