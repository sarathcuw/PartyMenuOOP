#include "MenuItem.h"
#include <iostream>

MenuItem::MenuItem(const std::string& name, const std::string& servingTemp)
    : name(name), servingTemp(servingTemp) {}

void MenuItem::display() const {
    std::cout << "Name: " << name << "\nServing Temperature: " << servingTemp << std::endl;
}
