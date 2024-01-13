//
// Created by 褚翊喨 on 2024/1/12.
//

#include "Game.h"

Game::Game() {
    restart();
}

void Game::restart() {
    pieces.clear();
    squares.clear();
    notGameOver = true;
    turn = true;
    for(char &c : bitBoard) {
        c = '0';
    }
}

void Game::newPiece(int x, int y) {
    if('0' == bitBoard[3 * y + x] && notGameOver) {
        Piece piece(turn);
        piece.setPosition(x, y);
        pieces.push_back(piece);

        bitBoard[3 * y + x] = turn ? 'o' : 'x';

        turn = !turn;
        win();
    }
}

int Game::win() {
    if(bitBoard[0] == bitBoard[1] && bitBoard[1] == bitBoard[2] && bitBoard[0] != '0') {
        sf::RectangleShape square1, square2, square3;

        square1.setPosition(0, 0);
        square1.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square1.setFillColor(sf::Color::Green);
        squares.push_back(square1);

        square2.setPosition(200, 0);
        square2.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square2.setFillColor(sf::Color::Green);
        squares.push_back(square2);

        square3.setPosition(400, 0);
        square3.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square3.setFillColor(sf::Color::Green);
        squares.push_back(square3);

        notGameOver = false;
    }
    else if(bitBoard[3] == bitBoard[4] && bitBoard[4] == bitBoard[5] && bitBoard[3] != '0') {
        sf::RectangleShape square1, square2, square3;

        square1.setPosition(0, 200);
        square1.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square1.setFillColor(sf::Color::Green);
        squares.push_back(square1);

        square2.setPosition(200, 200);
        square2.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square2.setFillColor(sf::Color::Green);
        squares.push_back(square2);

        square3.setPosition(400, 200);
        square3.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square3.setFillColor(sf::Color::Green);
        squares.push_back(square3);

        notGameOver = false;
    }
    else if(bitBoard[6] == bitBoard[7] && bitBoard[7] == bitBoard[8] && bitBoard[6] != '0') {
        sf::RectangleShape square1, square2, square3;

        square1.setPosition(0, 400);
        square1.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square1.setFillColor(sf::Color::Green);
        squares.push_back(square1);

        square2.setPosition(200, 400);
        square2.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square2.setFillColor(sf::Color::Green);
        squares.push_back(square2);

        square3.setPosition(400, 400);
        square3.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square3.setFillColor(sf::Color::Green);
        squares.push_back(square3);

        notGameOver = false;
    }
    else if(bitBoard[0] == bitBoard[3] && bitBoard[3] == bitBoard[6] && bitBoard[0] != '0') {
        sf::RectangleShape square1, square2, square3;

        square1.setPosition(0, 0);
        square1.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square1.setFillColor(sf::Color::Green);
        squares.push_back(square1);

        square2.setPosition(0, 200);
        square2.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square2.setFillColor(sf::Color::Green);
        squares.push_back(square2);

        square3.setPosition(0, 400);
        square3.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square3.setFillColor(sf::Color::Green);
        squares.push_back(square3);

        notGameOver = false;
    }
    else if(bitBoard[1] == bitBoard[4] && bitBoard[4] == bitBoard[7] && bitBoard[1] != '0') {
        sf::RectangleShape square1, square2, square3;

        square1.setPosition(200, 0);
        square1.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square1.setFillColor(sf::Color::Green);
        squares.push_back(square1);

        square2.setPosition(200, 200);
        square2.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square2.setFillColor(sf::Color::Green);
        squares.push_back(square2);

        square3.setPosition(200, 400);
        square3.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square3.setFillColor(sf::Color::Green);
        squares.push_back(square3);

        notGameOver = false;
    }
    else if(bitBoard[2] == bitBoard[5] && bitBoard[5] == bitBoard[8] && bitBoard[2] != '0') {
        sf::RectangleShape square1, square2, square3;

        square1.setPosition(400, 0);
        square1.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square1.setFillColor(sf::Color::Green);
        squares.push_back(square1);

        square2.setPosition(400, 200);
        square2.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square2.setFillColor(sf::Color::Green);
        squares.push_back(square2);

        square3.setPosition(400, 400);
        square3.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square3.setFillColor(sf::Color::Green);
        squares.push_back(square3);

        notGameOver = false;
    }
    else if(bitBoard[0] == bitBoard[4] && bitBoard[4] == bitBoard[8] && bitBoard[0] != '0') {
        sf::RectangleShape square1, square2, square3;

        square1.setPosition(0, 0);
        square1.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square1.setFillColor(sf::Color::Green);
        squares.push_back(square1);

        square2.setPosition(200, 200);
        square2.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square2.setFillColor(sf::Color::Green);
        squares.push_back(square2);

        square3.setPosition(400, 400);
        square3.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square3.setFillColor(sf::Color::Green);
        squares.push_back(square3);

        notGameOver = false;
    }
    else if(bitBoard[2] == bitBoard[4] && bitBoard[4] == bitBoard[6] && bitBoard[2] != '0') {
        sf::RectangleShape square1, square2, square3;

        square1.setPosition(400, 0);
        square1.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square1.setFillColor(sf::Color::Green);
        squares.push_back(square1);

        square2.setPosition(200, 200);
        square2.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square2.setFillColor(sf::Color::Green);
        squares.push_back(square2);

        square3.setPosition(200, 200);
        square3.setSize(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
        square3.setFillColor(sf::Color::Green);
        squares.push_back(square3);

        notGameOver = false;
    }

    return 0;
}

void Game::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    for(const sf::RectangleShape &square : squares) {
        target.draw(square);
    }

    target.draw(board);

    for(const Piece &piece : pieces) {
        target.draw(piece);
    }
}
