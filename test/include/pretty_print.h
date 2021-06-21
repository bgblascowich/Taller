#ifndef TALLER_PRETTY_PRINT_H
#define TALLER_PRETTY_PRINT_H

#include "print_screen.h"

void SUCCESS(std::string message);

void FAIL(std::string message);

void RESUME(const std::string& message, int number_of_tests, int success);

#endif //TALLER_PRETTY_PRINT_H
