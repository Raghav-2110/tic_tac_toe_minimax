//
// Created by 褚翊喨 on 2024/1/13.
//

#ifndef TIC_TAC_TOE_MINIMAX_MINIMAX_H
#define TIC_TAC_TOE_MINIMAX_MINIMAX_H

#include "Board.h"

struct location {
    int row;
    int col;

    location(int row, int col) :row(row), col(col) {}
};

int miniMax(char *bitBoard, int depth, int alpha, int beta, bool isMax);
int evaluateBoard(const char *bitBoard, int depth);
bool anyMoveAvailable(const char *bitBoard);
location getBestMove(char *bitBoard);
inline int max(int a, int b) {return a > b ? a : b;}
inline int min(int a, int b) {return a < b ? a : b;}

#endif //TIC_TAC_TOE_MINIMAX_MINIMAX_H
