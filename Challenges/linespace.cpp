//g++ -O3 linespace.cpp -o linespace.exe

#include "linespace.hpp"


int main()
{

    double x1, x2;
    int n;
    bool endpoint = true; 
    //Example 1
    //x1 = 0, x2 = 6, n = 4;
    //Example 2
    //x1 = 0, x2 = 6, n = 4, endpoint = false;
    //Example 3
    x1 = 0, x2 = 4, n = 10;
    //Example 4
    //x1 = 0, x2 = 4, n = 10; endpoint = false;

    auto result = linespace(x1, x2, n, endpoint);
    for (unsigned i = 0; i < result.size(); ++i)
    {
        std::cout << ' ' << result.at(i);
    }

    return 0;
}