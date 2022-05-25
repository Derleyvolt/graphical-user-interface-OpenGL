#ifndef BOUND
#define BOUND

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <algorithm>

class component {
public:
    sf::RenderWindow& window;
    sf::Rect<float>   limits;
    std::string       text;

    component(sf::RenderWindow& wnd) : window(wnd) {

    }

    virtual void draw()      = 0;
    virtual bool collision() = 0;
    virtual void on_click() {};
    virtual void on_hover() {};
};

#endif
