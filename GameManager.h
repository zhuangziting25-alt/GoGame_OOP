#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Board.h"

class GameManager {
private:
    Board board;
    Stone currentTurn;
    bool isGameOver;

public:
    GameManager();
    void start();
    void switchTurn();
};

#endif
