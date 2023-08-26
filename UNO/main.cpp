#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

#include "Deck.h"

using namespace std;

void startGame();
//void GenerateRandCard(Card randCard);

int main() 
{ 
    Deck temp;
    startGame();
    temp.GenerateRandCard();
    temp.print();

    vector<Card> playerOne; 
    vector<Card> playerTwo;

    Card newCard; 
    char letters[] = "BGRY";

    for(int i = 0; i < 7; ++i){
        newCard.num = rand() % 10;
        newCard.color = letters[rand() % 4];
        playerOne.push_back(newCard);
    }

    for(int i = 0; i < 7; ++i){
        newCard.num = rand() % 10;
        newCard.color = letters[rand() % 4];
        playerTwo.push_back(newCard);
    }

   //test case
   /* for(int i = 0; i < 7; ++i){
       playerOne.at(i).printCard(); 
    }

    cout << endl; 

    for(int i = 0; i < 7; ++i){
       playerTwo.at(i).printCard(); 
    }

    */




    return 0;
}

void startGame(){
    int numPlayers;
    cout << "Welcome to Uno!" << endl;
    cout << "Please enter the number of players: ";
    cin >> numPlayers;
    cout << "Generating Board" << endl;
}

