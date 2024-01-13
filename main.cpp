#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Game.h"

#define WINDOW_SIZE 600
#define SQUARE_SIZE (WINDOW_SIZE / 3)

int main() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_SIZE, WINDOW_SIZE), "tic tac toe minimax", sf::Style::Close);
    window.setVerticalSyncEnabled(true);
    Game game;

    while (window.isOpen()) {
        sf::Event event = sf::Event();

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    if ((0 < event.mouseButton.x) && (event.mouseButton.x < WINDOW_SIZE)
                    && (0 < event.mouseButton.y) && (event.mouseButton.y < WINDOW_SIZE)) {
                        game.newPiece(event.mouseButton.x / SQUARE_SIZE, event.mouseButton.y / SQUARE_SIZE);
                    }
                }
            }

            if(event.type == sf::Event::EventType::KeyPressed) {
                if(event.key.code == sf::Keyboard::R) {
                    game.restart();
                }
            }

        }

        window.clear(sf::Color(16, 16,16, 255));
        window.draw(game);
        window.display();
    }
    return 0;
}
