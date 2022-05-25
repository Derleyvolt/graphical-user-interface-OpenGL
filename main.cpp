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

    //sf::Rect<int, int ,int , int> rct(10, 20, 10, 20);

    component* menu = new container(window, 300, 400, Point(60, 80));

    // sf::Font MyFont;
    // if (!MyFont.loadFromFile("LinLibertine_aBL.ttf")) {
    //     std::cout << "algum erro ocorreu" << std::endl;
    // }

    // sf::Text teste("Menu principal", MyFont);

    // teste.setScale(Point(0.4, 0.4));

    //teste.setPosition(Point(50, 50));
    //teste.SetFont(sf::Font::get);
    //teste.setString("RATINHO FALADOR");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        //window.draw(teste);
        menu->draw();
        //window.draw(rectangle);
        window.display();
    }

    return 0;
}
