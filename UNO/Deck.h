#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <string>
//#include <cstdlib>
//#include <string>

using namespace std;

#include "Card.h"

class Deck {
    private:
        //int score;
        Card firstCard;

    public:
          
        Deck();
        void GenerateRandCard();
        void print();

};

#endif 