#include <tuple>
#include <iostream>
#include <string>
#include <stdexcept>
#include <math.h>

std::pair<double, double> findRoots(double a, double b, double c)
{
    std::pair<double, double> result;
    try
    {
        result.first = (-b + sqrt(b*b-4*a*c))/(2*a);
        result.second = (-b - sqrt(b*b-4*a*c))/(2*a);
    }
    catch(std::out_of_range ex)
    {
        std::cout<< "this function does not work with complex numbers!\n"<<ex.what();
    }
    return result; 
}

#ifndef RunTests
int main()
{
    std::pair<double,double> roots = findRoots(2, 10, 8);
    std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}
#endif
