#ifndef MAIN_MENU
#define MAIN_MENU

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include "component.hpp"

typedef sf::Vector2f Point;

class container : public component {
public:
    container(sf::RenderWindow& wnd, int h = 300, int w = 200, Point pos = Point(0, 0), sf::Color cl = sf::Color(46, 52, 64, 220)) : component(wnd) {
        // limites do drag-bar
        drag_bar_limits = sf::Rect<float>(pos, Point(w, h));

        // configurações do drag-bar 
        drag_bar.setSize(Point(w, h));
        drag_bar.setPosition(pos);
        drag_bar.setFillColor(sf::Color(0, 35, 135));
        //drag_bar.setOutlineThickness(1);

        // modificações pra acomodar o drag-bar
        h     -= 20;
        pos.y += 20;

        // lowerbound to heigth and width
        h = std::max(h, 100);
        w = std::max(w, 100);

        limits = sf::Rect<float>(pos, Point(w, h));

        // config container position, size and color
        rectangle.setSize(Point(w, h));
        rectangle.setPosition(pos);
        rectangle.setFillColor(cl);
        //rectangle.setOutlineThickness(1);
        //rectangle.setOutlineColor(sf::Color(20, 30, 40));

    }

    void draw() {
        window.draw(drag_bar);
        window.draw(rectangle);
    }

    bool collision() {
        return 1;
    }

private:
    std::vector<std::unique_ptr<component>> child_components;
    sf::RectangleShape rectangle;

    // drag_bar
    sf::RectangleShape drag_bar;
    sf::Rect<float>    drag_bar_limits;
};

#endif
