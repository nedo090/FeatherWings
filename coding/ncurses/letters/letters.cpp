#include "letters.hpp"

Letters::Letters(){
    sym = 0;
    initscr();
}

Letters::~Letters(){
    getch();
    endwin();

}
