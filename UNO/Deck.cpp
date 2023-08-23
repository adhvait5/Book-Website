#include "Deck.h"


void player::GenerateRandCard(){

    int randomNumber = rand() % 10;
    cout << randomNumber;
    firstCard.num= randomNumber;

    char letters[] = "BGRY";
    char randomLetter = letters[rand() % 4];

    cout << randomLetter << endl;
    firstCard.color = randomLetter;

}

void player::print(){

    cout << firstCard.num << "" << firstCard.color << endl;

}
