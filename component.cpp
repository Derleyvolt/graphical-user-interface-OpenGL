#include "component.hpp"
#include <iostream>


component::component(sf::RenderWindow& wnd, sf::Event& ev) : window(wnd), event(ev) {
    this->is_pressed = false;
    

    if(!font.loadFromFile("Ubuntu-Light.ttf")) {
        std::cout << "Erro ao carregar fonte" << std::endl;
    }

    title.setFont(font);
    title.setScale(Point(0.5, 0.5));
}
