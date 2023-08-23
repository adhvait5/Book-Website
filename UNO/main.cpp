#include <iostream>
#include <cstdlib>
#include <string>

#include "Deck.h"

using namespace std;

void startGame();
//void GenerateRandCard(Card randCard);
player temp;
int main(){
    
    startGame();
    temp.GenerateRandCard();
    temp.print();
    return 0;
}

void startGame(){
    int numPlayers;
    cout << "Welcome to Uno!" << endl;
    cout << "Please enter the number of players: ";
    cin >> numPlayers;
    cout << "Generating Board" << endl;
}

