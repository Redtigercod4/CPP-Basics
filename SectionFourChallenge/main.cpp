//
// Created by Wesley Whittle on 19/08/2024.
//
#include <iostream>

int main()
{
    int favourite_number;
    std::cout << "Enter your favour number: ";
    std::cin >> favourite_number;
    std::cout << "Amazing!! That's my favourite number too!" << std::endl;
    std::cout << "No really!! " + std::to_string(favourite_number) + " is my favourite number!" << std::endl;
    return 0;
}
