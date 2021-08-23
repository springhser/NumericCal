#ifndef POLYNOMIAL_HPP
#define POLYNOMIAL_HPP

#include "../Utils/HelpTool.hpp"

#include <vector>

class Polynomial
{
public:
    // 一维多项式求值
    // 
    double lplyv(std::vector<double>& a, double x)
    {
        int n = a.size();
        // PRINTN("n:" << n);
        double u = a[n-1];

        for(int i = n-2; i >= 0;--i)
        {
            // PRINTN("i: " << i << " , a: "<< a[i]);
            u = u*x+a[i];
        }

        return u;
    }
};

class PolynomialTest
{
public:
    void test()
    {
        testLplyv();
    }

private:
    void testLplyv()
    {
        std::vector<double> a{-20.0, 7.0, -7.0,1.0, 3.0, -5.0, 2.0};
        std::vector<double> x{0.9, -0.9, 1.1, -1.1, 1.3,-1.3};

        Polynomial poly;

        for(auto xi : x)
        {
            PRINTN("xi = " << xi <<" , pi = " << poly.lplyv(a, xi));
        }
        
    }
};


#endif /* POLYNOMIAL_HPP */