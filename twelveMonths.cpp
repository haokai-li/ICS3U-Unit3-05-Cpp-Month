// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program check that twelve months

#include <iostream>
#include <string>

int main() {
    // This Program check that twelve months
    std::string monthNumberString;
    int monthNumber;

    // input
    std::cout << "Enter the number of months(ex: 3 for March):  ";
    std::cin >> monthNumberString;

    monthNumber = atoi(monthNumberString.c_str());

    std::cout << "" << std::endl;

    // process
    switch (monthNumber) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        case 10 :
            std::cout << "October" << std::endl;
            break;
        case 11 :
            std::cout << "November" << std::endl;
            break;
        case 12 :
            std::cout << "December" << std::endl;
            break;
        default :
            std::cout << "Pleace enter a number from 1 to 12" << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
