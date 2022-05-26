#ifndef MAIN_MENU
#define MAIN_MENU

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include "component.hpp"

#define DRAG_BAR_HEIGHT            20
#define UBUNTU_LIGHT_OFFSET        7

class container : public component {
public:
    container(sf::RenderWindow& wnd, int h = 300, int w = 200, Point pos = Point(0, 0), 
              sf::Color cl = sf::Color(46, 52, 64, 220));

    void set_text(std::string text);

    void draw();

    bool collision();

private:
    Point get_title_position(const std::string arg) const;

    std::vector<std::unique_ptr<component>> child_components;
    sf::RectangleShape rectangle;

    // drag_bar
    sf::RectangleShape drag_bar;
    sf::Rect<float>    drag_bar_limits;
};

#endif
