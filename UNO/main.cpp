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
    char letters[] = "BGRY";

    Card deckCard;
    deckCard.num = rand() % 10;
    deckCard.color = letters[rand() % 4];


    vector<Card> playerOne; 
    vector<Card> playerTwo;
    int playerOneScore;
    int playerTwoScore;

    Card newCard; 
    

    for(int i = 0; i < 7; ++i){
        newCard.num = rand() % 10;
        newCard.color = letters[rand() % 4];
        playerOne.push_back(newCard);
        playerOneScore++;
    }

    for(int i = 0; i < 7; ++i){
        newCard.num = rand() % 10;
        newCard.color = letters[rand() % 4];
        playerTwo.push_back(newCard);
        playerTwoScore++;
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
   int userInput; 
   while(playerOneScore != 0 || playerTwoScore != 0){
    

    for(int i = 0; i < playerOneScore; ++i){
       playerOne.at(i).printCard(); 
    }

    cout < endl;

    for(int i = 0; i < 7; ++i){
       cout << i << " "; 
    }

    cout << endl; 

    cout << "Player 1 turn: " ;
    cin >> userInput;

    while(!(userInput < 7)){
        cout << " Please enter a different input or draw a card: "; 
        cin >> userInput; 
    }

    for(int i = 0; i <= userInput; ++i){
        if(i == userInput){
            if(playerOne.at(i).color == deckCard.color && playerOne.at(i).num == deckCard.num){
                deckCard = playerOne.at(i);
                playerOne.erase(playerOne.begin()+i);
                playerOneScore--;
            }
        }else{
            newCard.num = rand() % 10;
            newCard.color = letters[rand() % 4];
            playerOne.push_back(newCard);
            playerOneScore++;
        }
    }

    deckCard.printCard();

    for(int i = 0; i < playerTwoScore; ++i){
       playerTwo.at(i).printCard(); 
    }

    cout << endl; 

    for(int i = 0; i < 7; ++i){
       cout << i << " "; 
    }

    cout << endl; 

    cout << "Player 2 turn: " ;
    cin >> userInput;

    while(!(userInput < 7)){
        cout << " Please enter a different input or draw a card: "; 
        cin >> userInput; 
    }

    for(int i = 0; i <= userInput; ++i){
        if(i == userInput){
            if(playerTwo.at(i).color == deckCard.color && playerTwo.at(i).num == deckCard.num){
                deckCard = playerTwo.at(i);
                playerOne.erase(playerTwo.begin()+i);
                playerTwoScore--;
            }
        }else{
            newCard.num = rand() % 10;
            newCard.color = letters[rand() % 4];
            playerTwo.push_back(newCard);
            playerTwoScore++;
        }
    }



    


   }





    return 0;
}

void startGame(){
    int numPlayers;
    cout << "Welcome to Uno!" << endl;
    cout << "Please enter the number of players: ";
    cin >> numPlayers;
    cout << "Generating Board" << endl;
}

