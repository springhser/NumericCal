/*
 * @Author: your name
 * @Date: 2021-08-23 22:27:13
 * @LastEditTime: 2021-08-23 22:53:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /NumericCal/Matrix/Matrix.hpp
 */
#ifndef MATRIX_HPP
#define MATRIX_HPP

#include "Utils/HelpTool.hpp"

class Matrix
{
public:
    Matrix(){}
    Matrix(double[][2], int r, int c)
    {

    }

private:
    std::vector<std::vector<double>> v_;
    
};


class MatrixTest
{
public:
    void test()
    {
        double aa[2][2]= {{1.0,2.0},{3.0,4.0}};
        double bb[2][2] = {{2.0,2.0},{4.0, 6.0}};
        
        Matrix a(aa,2,2),b(bb,2,2);
    }   
};





#endif // !MATRIX_HPP



