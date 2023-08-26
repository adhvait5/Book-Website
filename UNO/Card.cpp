#include "Card.h"

Card::Card(){
    color = ' ';
    num = 0;
}

void Card::printCard(){
    cout << num << "" << color << ", ";
}