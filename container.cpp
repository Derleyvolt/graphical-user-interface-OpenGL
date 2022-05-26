#include "container.hpp"

container::container(sf::RenderWindow& wnd, int h, int w, Point pos, sf::Color cl) : component(wnd) {
    // limites do drag-bar
    drag_bar_limits = sf::Rect<float>(pos, Point(w, DRAG_BAR_HEIGHT));

    // configurações do drag-bar 
    drag_bar.setSize(Point(w, DRAG_BAR_HEIGHT));
    drag_bar.setPosition(pos);
    drag_bar.setFillColor(sf::Color(0, 35, 135));

    // modificações pra acomodar o drag-bar
    h     -= DRAG_BAR_HEIGHT;
    pos.y += DRAG_BAR_HEIGHT;

    // lowerbound to heigth and width
    h = std::max(h, 100);
    w = std::max(w, 100);

    limits = sf::Rect<float>(pos, Point(w, h));

    // config container position, size and color
    rectangle.setSize(Point(w, h));
    rectangle.setPosition(pos);
    rectangle.setFillColor(cl);
    set_text("Algorithms");
}

void container::set_text(std::string text) {
    this->title.setString(text);
    this->title.setPosition(this->get_title_position(text));
}

void container::draw() {
    window.draw(drag_bar);
    window.draw(this->title);
    window.draw(rectangle);
}

bool container::collision() {
    return 1;
}

Point container::get_title_position(const std::string arg) const {
    auto aux = drag_bar_limits;

    float x = aux.left + aux.width/2.0 - (arg.size()/2.0) * title.getLetterSpacing() * UBUNTU_LIGHT_OFFSET;
    float y = aux.top;
    return Point(x, y);
}
