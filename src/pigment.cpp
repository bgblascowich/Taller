#include <iostream>

#include "pigment.h"

std::string pigments::red(std::string message) {
    return "\u001b[31m" + message + "\u001b[0m";
}

std::string pigments::green(std::string message) {
    return "\u001b[32m" + message + "\u001b[0m";
}