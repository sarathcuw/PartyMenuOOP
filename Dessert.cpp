#include "Dessert.h"
#include <iostream>

Dessert::Dessert(const std::string& name, const std::string& servingTemp, bool isSugarFree)
    : MenuItem(name, servingTemp), isSugarFree(isSugarFree) {}

void Dessert::display() const {
    MenuItem::display();
    std::cout << "Sugar Free: " << (isSugarFree ? "Yes" : "No") << std::endl;
}
