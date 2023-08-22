#include <iostream>
#include <cstdlib>
#include <string>

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
    cout << "Generating..." << endl;
}

void GenerateRandCard(Card randCard){

    int randomNumber = rand() % 10;
    cout << randomNumber;
    randCard->number= randomNumber;

    char letters[] = "BGRY";
    char randomLetter = letters[rand() % 4];
    cout << randomLetter << endl;
    randCard->letter = randomLetter;

}