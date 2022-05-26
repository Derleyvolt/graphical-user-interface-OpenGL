#include "component.hpp"
#include <iostream>


component::component(sf::RenderWindow& wnd) : window(wnd) {
    if(!font.loadFromFile("Ubuntu-Light.ttf")) {
        std::cout << "Erro ao carregar fonte" << std::endl;
    }

    title.setFont(font);
    title.setScale(Point(0.5, 0.5));
}
