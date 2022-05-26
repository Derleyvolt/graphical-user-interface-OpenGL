#ifndef BOUND
#define BOUND

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <algorithm>

typedef sf::Vector2f Point;

class component {
private: 
    sf::Font font;

public:
    sf::RenderWindow& window;
    sf::Rect<float>   limits;
    sf::Text          title;

    component(sf::RenderWindow& wnd);

    virtual void set_text(std::string title) = 0;
    virtual void draw()      = 0;
    virtual bool collision() = 0;
    virtual void on_click() {};
    virtual void on_hover() {};
};

#endif
