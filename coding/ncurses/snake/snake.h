#include <ncurses.h>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <unistd.h>
#ifndef SNAKE_H
#define SNAKE_H

struct snakepart{
    int x,y;
    snakepart();
    snakepart(int col, int row);
};

class snakeclass{
    private:
        int points, del, maxwidth, maxheight;
        char direction, partchar, oldalchar, foo;
        bool get;
        snakepart food;
        std::vector<snakepart> snake;

        void putfood();
        bool collision();
        void movesnake();
    public:
        snakeclass();
        ~snakeclass();
        void start();
};
#endif
