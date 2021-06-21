#include <iostream>
#include <utility>

#include "pretty_print.h"

#include "pigment.h"

void SUCCESS(std::string message) {
    std::cout << message << " -> ";
    print_screen::green("SUCCESS");
}

void FAIL(std::string message) {
    std::cout << message << " -> ";
    print_screen::red("FAIL");
}

void RESUME(const std::string &message, int number_of_tests, int success) {
    if (number_of_tests == success) {
        std::cout << message << pigments::green(std::to_string(success)) << "/"
                  << pigments::green(std::to_string(number_of_tests)) << std::endl;
    } else {
        std::cout << message << pigments::red(std::to_string(success)) << "/"
                  << pigments::green(std::to_string(number_of_tests)) << std::endl;
    }
}