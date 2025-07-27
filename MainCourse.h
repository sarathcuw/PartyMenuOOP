#ifndef MAINCOURSE_H
#define MAINCOURSE_H

#include "MenuItem.h"

class MainCourse : public MenuItem {
private:
    std::string sideDish;

public:
    MainCourse(const std::string& name, const std::string& servingTemp, const std::string& sideDish);
    void display() const override;
};

#endif
