#include <iostream>

#include "pigment.h"
#include "print_screen.h"
#include "pigment_number.h"

int main() {
    std::cout << pigments::red("This is red!") << std::endl;
    std::cout << pigments::green("This is green!") << std::endl;
    std::cout << pigment_numbers::message("This is a black message of 1234!") << std::endl;
    print_screen::red("From print_screen::red");
    print_screen::green("From print_screen::green");
    return 0;
}
