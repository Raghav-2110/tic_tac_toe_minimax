//
// Created by 褚翊喨 on 2024/1/11.
//

#ifndef TIC_TAC_TOE_MINIMAX_PIECE_H
#define TIC_TAC_TOE_MINIMAX_PIECE_H

#define WINDOW_SIZE 600
#define SQUARE_SIZE WINDOW_SIZE / 3

#include "Texture.h"

class Piece : public sf::Drawable{
public:
    Piece();
    Piece(char c);
    void draw(sf::RenderTarget &target, sf::RenderStates &states);
    void setPosition(int x, int y);

private:
    sf::Sprite sprite;

};


#endif //TIC_TAC_TOE_MINIMAX_PIECE_H
