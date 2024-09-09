#ifndef LINSPACE_HPP
#define LINSPACE_HPP

#include <iostream>
#include <vector>


std::vector<double> linespace(const double& x1, const double& x2, const int& n, bool endpoint)
{
    std::vector<double> result;
    double r = x1;
    double sum = endpoint ? (x2-x1)/(n-1) : (x2-x1)/(n);

    for(auto i = 0; i < n; ++i)
    {   
        result.push_back(r);
        r += sum;
    }
    
    return result;
}

#endif //LINSPACE_HPP