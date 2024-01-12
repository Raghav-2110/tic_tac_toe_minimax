//
// Created by 褚翊喨 on 2024/1/12.
//

#include "Board.h"

Board::Board() {
    sprite.setTexture(Texture::board);
}

void Board::draw(sf::RenderTarget &target, sf::RenderStates &states) {
    target.draw(sprite);
}
