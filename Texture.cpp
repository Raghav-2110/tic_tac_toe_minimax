//
// Created by 褚翊喨 on 2024/1/11.
//

#include "Texture.h"

sf::Texture Texture::loadTexture(const std::string &filename) {
    sf::Texture texture;
    texture.loadFromFile(filename);

    return texture;
}

sf::Texture Texture::o = loadTexture("/Users/mba/myCode/tic-tac-toe-minimax/Texture/o.png");
sf::Texture Texture::x = loadTexture("/Users/mba/myCode/tic-tac-toe-minimax/Texture/x.png");
sf::Texture Texture::board = loadTexture("/Users/mba/myCode/tic-tac-toe-minimax/Texture/board.png");
