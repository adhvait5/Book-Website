
#include <iostream>
#include <string>
#include <cstdlib>
#include <string>
#include "Deck.h"
#include "Card.h"

using namespace std;

Deck::Deck(){
    firstCard.num = 0;
    firstCard.color = ' ';
}

void Deck::GenerateRandCard(){

    int randomNumber = rand() % 10;
    cout << randomNumber;
    firstCard.num= randomNumber;

    char letters[] = "BGRY";
    char randomLetter = letters[rand() % 4];

    cout << randomLetter << endl;
    firstCard.color = randomLetter;

}

void Deck::print(){

    cout << firstCard.num << "" << firstCard.color << endl;

}
