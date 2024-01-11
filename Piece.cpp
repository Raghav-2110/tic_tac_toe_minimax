//
// Created by 褚翊喨 on 2024/1/11.
//

#include "Piece.h"

Piece::Piece() {}

Piece::Piece(char c) {
    if('o' == c) {
        sprite.setTexture(Texture::o);
        sprite.setOrigin(sf::Vector2f(sprite.getTexture()->getSize().x / 2.0, sprite.getTexture()->getSize().y / 2.0));
        sprite.setScale(0.05, 0.05);
    }
    else {
        sprite.setTexture(Texture::x);
        sprite.setOrigin(sf::Vector2f(sprite.getTexture()->getSize().x / 2.0, sprite.getTexture()->getSize().y / 2.0));
        sprite.setScale(0.05, 0.05);
    }
}

void Piece::draw(sf::RenderTarget &target, sf::RenderStates &states) {
    target.draw(sprite);
}

void Piece::setPosition(int x, int y) {
    sprite.setPosition(x * SQUARE_SIZE + SQUARE_SIZE / 2, y * SQUARE_SIZE + SQUARE_SIZE / 2);
}