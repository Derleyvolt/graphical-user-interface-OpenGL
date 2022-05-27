#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include "container.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    sf::Event event;

    component* menu = new container(window, event, 300, 200, Point(60, 80));

    menu->set_text("Algorithms");

    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        menu->draw();
        window.display();
    }

    return 0;
}
