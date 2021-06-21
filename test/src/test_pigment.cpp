#include "test_pigment.h"
#include "pretty_print.h"
#include "pigment.h"

void test_pigments(int *number_of_tests, int *success) {
    int n_tests = 0;
    int s_tests = 0;
    n_tests++;
    if (pigments::red("Long Message") == "\u001b[31mLong Message\u001b[0m") {
        s_tests++;
        SUCCESS("Red pigment");
    } else {
        FAIL("Red pigment");
    }

    n_tests++;
    if (pigments::green("Long Message") == "\u001b[32mLong Message\u001b[0m") {
        s_tests++;
        SUCCESS("Green pigment");
    } else {
        FAIL("Green pigment");
    }
    (*number_of_tests) += n_tests;
    (*success) += s_tests;
    RESUME("Pigments: ", n_tests, s_tests);
}