#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <string>

using namespace std;

struct Card{
    Card(){
        color = ' ';
        num = 0;
    }
    char color;
    int num;
};

class Deck {
    private:
        //int score;
        Card firstCard; 

    public:
        void GenerateRandCard();
        void print();

};
#endif 