#include "Board.h"
#include <iostream>

Board::Board(int s) : size(s), grid(s, std::vector<Stone>(s, Stone::None)) {}

void Board::display() {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (grid[i][j] == Stone::None) std::cout << ". ";
            else if (grid[i][j] == Stone::Black) std::cout << "B ";
            else std::cout << "W ";
        }
        std::cout << std::endl;
    }
}

bool Board::placeStone(int x, int y, Stone color) {
    if (x < 0 || x >= size || y < 0 || y >= size || grid[x][y] != Stone::None) {
        return false;
    }
    grid[x][y] = color;
    return true;
}

Stone Board::getStone(int x, int y) { return grid[x][y]; }
int Board::getSize() { return size; }
