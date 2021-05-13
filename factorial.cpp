// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 13, 2021
// Determines sum of previous numbers with while loop

#include <iostream>
#include <string>

main() {
    std::string user_input;
    double total, user_number;
    int loop_counter = 1;
    int factorial = 1;

    // Input
    std::cout << "Enter your number: ";
    std::cin >> user_input;

    try {
        user_number = std::stoi(user_input);

        // Process and output
        while (loop_counter <= user_number) {
            factorial = factorial * loop_counter;
            loop_counter = loop_counter + 1;
        }
        std::cout << factorial;
        std::cout << " is the sum of all previous numbers before ";
        std::cout << user_number;
    }catch (std::invalid_argument) {
        std::cout << user_input;
        std::cout << " is not a positive integer";
    }
    std::cout << "\nDone.";
}
