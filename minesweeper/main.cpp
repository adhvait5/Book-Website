#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void startGame();

int main(){
    startGame();
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
    cout << random << endl;

    char letters[] = "bgry";
    char randomLetter = letters[rand() % 4];

    cout << randomLetter << endl;

    string firstCard = "" + randomNumber + randomLetter; 

    cout << firstCard; 
}