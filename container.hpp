#ifndef MAIN_MENU
#define MAIN_MENU

#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include "component.hpp"

class container : public component {
public:
    container() {
        
    }

    void draw();
    bool collision();

private:
    std::vector<unique_ptr<component>> child_components;
};

#endif