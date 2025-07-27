#include "MainCourse.h"
#include <iostream>

MainCourse::MainCourse(const std::string& name, const std::string& servingTemp, const std::string& sideDish)
    : MenuItem(name, servingTemp), sideDish(sideDish) {}

void MainCourse::display() const {
    MenuItem::display();
    std::cout << "Side Dish: " << sideDish << std::endl;
}
