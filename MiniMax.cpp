//
// Created by 褚翊喨 on 2024/1/13.
//

#include "MiniMax.h"

int miniMax(char *bitBoard, int depth, int alpha, int beta, bool isMax) {

    int boardVal = evaluateBoard(bitBoard, depth);

//    if(abs(boardVal) > 0 || 0 == depth || !anyMoveAvailable(bitBoard)) {
//        return boardVal;
//    }

    if(0 == depth || !anyMoveAvailable(bitBoard)) {
        return boardVal;
    }

    if(isMax) {
        int highestValue = INT_MIN;
        for(int row = 0; row < 3; row++) {
            for(int col = 0; col < 3; col++) {
                if('0' == bitBoard[row * 3 + col]) {
                    bitBoard[row * 3 + col] = 'x';
                    highestValue = max(highestValue,
                                       miniMax(bitBoard, depth - 1, alpha, beta, false));
                    bitBoard[row * 3 + col] = '0';

                    if(highestValue >= beta) {
                        return highestValue;
                    }

                    alpha = max(alpha, highestValue);
                }
            }
        }
        return highestValue;
    }
    else  {
        int lowestValue = INT_MAX;
        for(int row = 0; row < 3; row++) {
            for(int col = 0; col < 3; col++) {
                if('0' == bitBoard[row * 3 + col]) {
                    bitBoard[row * 3 + col] = 'o';
                    lowestValue = min(lowestValue,
                                      miniMax(bitBoard, depth - 1, alpha, beta, true));
                    bitBoard[row * 3 + col] = '0';

                    if(lowestValue <= alpha) {
                        return lowestValue;
                    }

                    beta = min(beta, lowestValue);
                }
            }
        }
        return lowestValue;
    }
}

int evaluateBoard(const char *bitBoard, int depth) {
    int rowSum = 0;
    const int O_WIN = 'o' * 3;
    const int X_WIN = 'x' * 3;

    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            rowSum += bitBoard[row * 3 + col];
        }
        if(X_WIN == rowSum) {
            return 10 + depth;
        }
        else if(O_WIN == rowSum) {
            return -10 - depth;
        }
        rowSum = 0;
    }

    rowSum = 0;
    for(int col = 0; col < 3; col++) {
        for(int row = 0; row < 3; row++) {
            rowSum += bitBoard[row * 3 + col];
        }
        if(X_WIN == rowSum) {
            return 10 + depth;
        }
        else if(O_WIN == rowSum) {
            return -10 - depth;
        }
        rowSum = 0;
    }

    rowSum = 0;
    for(int i = 0; i < 3; i++) {
        rowSum += bitBoard[i * 3 + i];
    }
    if(X_WIN == rowSum) {
        return 10 + depth;
    }
    else if(O_WIN == rowSum) {
        return -10 - depth;
    }

    rowSum = 0;
    int indexMax = 2;
    for(int i = 0; i <= indexMax; i++) {
        rowSum += bitBoard[i * 3 + (indexMax - i)];
    }
    if(X_WIN == rowSum) {
        return 10 + depth;
    }
    else if(O_WIN == rowSum) {
        return -10 - depth;
    }

    return 0;
}

bool anyMoveAvailable(const char *bitBoard) {
    for(int i = 0; i < 9; i++) {
        if('0' == bitBoard[i]) {
            return true;
        }
    }

    return false;
}

location getBestMove(char *bitBoard) {
    location bestMove(-1, -1);
    int bestValue = INT_MIN;

    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            if('0' == bitBoard[row * 3 + col]) {
                bitBoard[row * 3 + col] = 'x';
                int moveValue = miniMax(bitBoard, 12, INT_MIN, INT_MAX, false);
                bitBoard[row * 3 + col] = '0';
                if(moveValue > bestValue) {
                    bestMove.row = row;
                    bestMove.col = col;
                    bestValue = moveValue;
                }
            }
        }
    }

    return bestMove;
}
