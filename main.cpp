#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#define WINDOW_SIZE 600

int main() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_SIZE, WINDOW_SIZE), "tic tac toe minimax", sf::Style::Close);
    window.setVerticalSyncEnabled(true);

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
                        ;
                    }
                }
            }
        }

        window.display();
    }
    return 0;
}
