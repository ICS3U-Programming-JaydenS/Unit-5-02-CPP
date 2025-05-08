// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created By: Jayden Smith
// Date: May 7, 2025
// This code calculates the area of a triangle

#include <iostream>
#include <string>

void calcArea(float base, float height) {
    // Defines variables
    float area;
    // Calculates and prints area
    area = (base*height*0.5);
    std::cout << "The area of your triangle is "
    << area << "cm^2\n";
}

int main() {
    // Define variables
    std::string user_base;
    std::string user_height;
    float base_float;
    float height_float;

    // Get user inputs
    std::cout << "What is your base (cm) ? ";
    std::cin >> user_base;
    std::cout << "What is your height (cm) ? ";
    std::cin >> user_base;

    // Convert the two inputs in nested try catch to float
     try {
        base_float = std::stof(user_base);

            // Checks if base is negative
            if (base_float < 0) {
                std::cout << base_float <<"is not a positive float";
            }

        try {
            height_float = std::stof(user_height);

            // Checks if height is negative
                if (height_float < 0) {
                    std::cout << height_float << "is not a positive float";
                } else {
                // Calls function
                calcArea(base_float, height_float);}

            // What happens if the inputs are strings
            } catch (std::invalid_argument) {
                std::cout << height_float << "is not a float!\n";
            }
        } catch (std::invalid_argument) {
            std::cout << height_float << "is not a float!\n";
        }
}
