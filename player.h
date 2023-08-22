#ifndef player_H
#define player_h
#include <iostream>

struct Card{
    Card(){
        color = "";
        number = "";
    }
    private:
    char color;
    int num;
}

class player {
    private:
        int score;

    public:
        void function();

}
#endif 