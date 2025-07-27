#include "Appetizer.h"
#include <iostream>

Appetizer::Appetizer(const std::string& name, const std::string& servingTemp, bool dipIncluded)
    : MenuItem(name, servingTemp), dipIncluded(dipIncluded) {}

void Appetizer::display() const {
    MenuItem::display();
    std::cout << "Dip Included: " << (dipIncluded ? "Yes" : "No") << std::endl;
}
