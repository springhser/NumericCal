#include <iostream>
#include "Utils/HelpTool.hpp"
#include "Polynomial/polynomial.hpp"

int main()
{
    PRINTN("Hello World");

    TESTMODULE(" Polynomial Test ");
    PolynomialTest poly_test;
    poly_test.test();
    return 0;
}