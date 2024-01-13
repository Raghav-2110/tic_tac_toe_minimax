//
// Created by 褚翊喨 on 2024/1/12.
//

#ifndef TIC_TAC_TOE_MINIMAX_BOARD_H
#define TIC_TAC_TOE_MINIMAX_BOARD_H

#include "Texture.h"

class Board : public sf::Drawable {
public:
    Board();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

private:
    sf::Sprite sprite;
};


#endif //TIC_TAC_TOE_MINIMAX_BOARD_H
