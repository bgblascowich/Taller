#include <iostream>

#include "pretty_print.h"
#include "test_pigment.h"

int main() {
    int number_of_tests = 0;
    int success = 0;
    test_pigments(&number_of_tests, &success);

    RESUME("All tests: ", number_of_tests, success);
    return 0;
}
