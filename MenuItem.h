#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>

class MenuItem {
private:
    std::string name;
    std::string servingTemp;

public:
    MenuItem(const std::string& name, const std::string& servingTemp);
    virtual void display() const;
    virtual ~MenuItem() = default;
};

#endif
