//
// Created by 褚翊喨 on 2024/1/12.
//

#ifndef TIC_TAC_TOE_MINIMAX_GAME_H
#define TIC_TAC_TOE_MINIMAX_GAME_H

#define WINDOW_SIZE 600
#define SQUARE_SIZE (WINDOW_SIZE / 3)

#include <vector>
#include "Board.h"
#include "Piece.h"

class Game : public sf::Drawable {
public:
    Game();
    void restart();
    void newPiece(int x, int y);
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;

private:
    int win();
    Board board;
    char bitBoard[9];
    bool notGameOver;
    bool turn;
    std::vector<Piece> pieces;
    std::vector<sf::RectangleShape> squares;
};


#endif //TIC_TAC_TOE_MINIMAX_GAME_H
