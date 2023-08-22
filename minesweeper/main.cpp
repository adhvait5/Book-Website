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
    cout << "Generating Board" << endl;

    int randomNumber = rand() % 10;
    cout << randomNumber;

    char letters[] = "bgry";
    char randomLetter = letters[rand() % 4];

    cout << randomLetter << endl;

    //string firstCard = "" + randomNumber + randomLetter; 

    //cout << firstCard; 




}