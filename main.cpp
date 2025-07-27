#include <iostream>
#include "Appetizer.h"
#include "MainCourse.h"
#include "Dessert.h"

int main() {
    Appetizer starter("Spring Rolls", "hot", true);
    MainCourse entree("Grilled Chicken", "hot", "Mashed Potatoes");
    Dessert treat("Fruit Salad", "cold", true);

    std::cout << "--- Appetizer ---" << std::endl;
    starter.display();
    std::cout << "\n--- Main Course ---" << std::endl;
    entree.display();
    std::cout << "\n--- Dessert ---" << std::endl;
    treat.display();

    return 0;
}
