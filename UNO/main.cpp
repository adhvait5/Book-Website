#include <iostream>
#include <cstdlib>
#include <string>

#include "Deck.h"

using namespace std;

void startGame();

int main(){
    startGame();
    GenerateRandCard();
    return 0;
}

void startGame(){
    int numPlayers;
    cout << "Welcome to Uno!" << endl;
    cout << "Please enter the number of players: ";
    cin >> numPlayers;
    cout << "Generating Board" << endl;

    int randomNumber = rand() % 10;
    cout << randomNumber;

    char letters[] = "bgry";
    char randomLetter = letters[rand() % 4];

    cout << randomLetter << endl;

}

void GenerateRandCard(Card randCard){

    int randomNumber = rand() % 10;
    cout << randomNumber;
    randCard->number= randomNumber;
    cout << random << endl;

    char letters[] = "BGRY";
    char letters[] = "bgry";
    char randomLetter = letters[rand() % 4];

    cout << randomLetter << endl;
    randCard->letter = randomLetter;

    string firstCard = "" + randomNumber + randomLetter; 
}