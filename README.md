# Party Menu OOP Project

This project demonstrates basic Object-Oriented Programming (OOP) principles in C++ through a simulation of a party menu. It uses class inheritance and polymorphism to define different types of menu items.

## 🧱 Class Structure

### Base Class: `MenuItem`
- **Private Members:**
  - `name` (string): Name of the dish.
  - `servingTemp` (string): "hot" or "cold".
- **Public Methods:**
  - Constructor
  - `display()` method (virtual)

### Derived Classes:
- **Appetizer**
  - Inherits from `MenuItem`
  - Extra Member: `bool dipIncluded`
- **MainCourse**
  - Inherits from `MenuItem`
  - Extra Member: `string sideDish`
- **Dessert**
  - Inherits from `MenuItem`
  - Extra Member: `bool isSugarFree`

## 📁 File Structure

