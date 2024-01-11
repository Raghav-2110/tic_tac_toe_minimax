//
// Created by 褚翊喨 on 2024/1/11.
//

#include "Texture.h"

sf::Texture Texture::loadTexture(const std::string& filename) {
    sf::Texture texture;
    texture.loadFromFile(filename);

    return texture;
}
