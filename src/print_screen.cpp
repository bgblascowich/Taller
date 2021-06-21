#include <iostream>

#include "print_screen.h"

void print_screen::red(std::string message) {
    std::cout << "\u001b[31m" + message + "\u001b[0m" << std::endl;
}

void print_screen::green(std::string message) {
    std::cout << "\u001b[32m" + message + "\u001b[0m" << std::endl;
}