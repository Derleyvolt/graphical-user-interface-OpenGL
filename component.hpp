#ifndef BOUND
#define BOUND

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <algorithm>

typedef sf::Vector2f Point;

class component {
public:
    sf::RenderWindow& window;
    sf::Rect<float>   limits;
    sf::Text          title;
    sf::Font          font;

    component(sf::RenderWindow& wnd) : window(wnd) {
        std::cout << "Fonte carregada" << std::endl;
        if(!font.loadFromFile("LinLibertine_aBL.ttf")) {
            std::cout << "Ocorreu algum erro no load da imagem" << std::endl;
        }

        title.setFont(font);
        title.setScale(Point(0.5, 0.5));
    }

    virtual void set_text(std::string title) = 0;
    virtual void draw()      = 0;
    virtual bool collision() = 0;
    virtual void on_click() {};
    virtual void on_hover() {};
};

#endif
