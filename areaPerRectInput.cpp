// Copyright (c) Year Tony G All rights reserved.

//

// Created by: Tony G

// Date: 2025-02-24

// Calculates the area and perimeter of a rectangle.
#include <iostream>

int main() {
    // creates variables
    int length;
    int width;
    // user input
    std::cout << "Enter length:";
    std::cin >> length;
    std::cout << "Enter Width:";
    std::cin >> width;
    // prints the length and width
    std::cout << "length:" << width << std::endl;
    std::cout << "width:" << width << std::endl;
    // calculates the perimeter and area
    std::cout << "Area is equal to " << (width * length) << std::endl;
    std::cout << "Perimeter is equal to " << (2 * width + 2 * length);
}
