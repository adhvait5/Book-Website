#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <string>

struct Card{
    Card(){
        color = ' ';
        num = 0;
    }
    char color;
    int num;
};

class player {
    private:
        int score;

    public:
        void function();

};
#endif 