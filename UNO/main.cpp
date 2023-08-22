#include <iostream>
#include <cstdlib>
#include <string>

#include "Deck.h"

using namespace std;

void startGame();
void GenerateRandCard(Card randCard);

int main(){
    Card temp;
    startGame();
    GenerateRandCard(temp);
    cout<<"test-> random card is: "<<temp.num<<temp.color<<endl;
    return 0;
}

void startGame(){
    int numPlayers;
    cout << "Welcome to Uno!" << endl;
    cout << "Please enter the number of players: ";
    cin >> numPlayers;
    cout << "Generating Board" << endl;
}

void GenerateRandCard(Card randCard){

    int randomNumber = rand() % 10;
    cout << randomNumber;
    randCard.num= randomNumber;

    char letters[] = "BGRY";
    char randomLetter = letters[rand() % 4];

    cout << randomLetter << endl;
    randCard.color = randomLetter;
}