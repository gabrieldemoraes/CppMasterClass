#ifndef BINCOUNT_HPP
#define BINCOUNT_HPP

#include <iostream>
#include <vector>
#include <algorithm>

int* bincount(std::vector<int>& sequence)
{
    
    const int max_element = *std::max_element(sequence.begin(), sequence.end());
    int result[max_element + 1] = {0};

    for(std::vector<int>::iterator it = sequence.begin(); it != sequence.end(); ++it)
    {
        result[*it] += 1; 
    }

    for(int i = 0;  i < max_element + 1; ++i)
    {
        std::cout << result[i] << std::endl;
    }
    return result;
}

float* bincount(std::vector<int>& sequence, std::vector<float>& weights)
{
    
    const int max_element = *std::max_element(sequence.begin(), sequence.end());
    float result[max_element + 1] = {0};
    int i = 0;
    
    for(std::vector<int>::iterator it = sequence.begin(); it != sequence.end(); ++it)
    {
        result[*it] += weights[i];
        ++i;
    }
    /*
    for(i = 0;  i < max_element + 1; ++i)
        std::cout << result[i] << std::endl;

    return result;
    */
   
}



#endif