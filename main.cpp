#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include "container.hpp"
//#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    component* menu = new container(window, 300, 200, Point(60, 80));

    while (window.isOpen()) {
        sf::Event event;
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
