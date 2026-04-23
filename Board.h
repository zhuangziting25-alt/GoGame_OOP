#ifndef BOARD_H
#define BOARD_H

#include <vector>

enum class Stone { None, Black, White };

class Board {
private:
    int size;
    std::vector<std::vector<Stone>> grid;

public:
    Board(int s = 19);
    void display();
    bool placeStone(int x, int y, Stone color);
    Stone getStone(int x, int y);
    int getSize();
};

#endif
