/*
 * @Author: your name
 * @Date: 2020-05-08 19:36:03
 * @LastEditTime: 2021-08-23 22:35:12
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /NumericCal/main.cpp
 */
#include <iostream>
#include "Utils/HelpTool.hpp"
#include "Polynomial/polynomial.hpp"
#include "Matrix/Matrix.hpp"

int main()
{
    PRINTN("Hello World");

    TESTMODULE(" Polynomial Test ");
    PolynomialTest poly_test;
    poly_test.test();
    return 0;
}