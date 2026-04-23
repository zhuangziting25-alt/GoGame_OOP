#include "GameManager.h"
#include <iostream>

GameManager::GameManager() : board(19), currentTurn(Stone::Black), isGameOver(false) {}

void GameManager::switchTurn() {
    currentTurn = (currentTurn == Stone::Black) ? Stone::White : Stone::Black;
}

void GameManager::start() {
    int x, y;
    while (!isGameOver) {
        board.display();
        std::cout << (currentTurn == Stone::Black ? "黑棋" : "白棋") << "下子 (輸入 x y, 或輸入 -1 -1 結束): ";
        std::cin >> x >> y;

        if (x == -1) break;

        if (board.placeStone(x, y, currentTurn)) {
            switchTurn();
        } else {
            std::cout << "無效的位置，請重試！" << std::endl;
        }
    }
}
