//g++ -O3 bincount.cpp -o bincount.exe

#include "bincount.hpp"
#include <array>


int main()
{
    /*
    std::vector<int> sequence;
    std::vector<int> weights;

    sequence.push_back(1);
    sequence.push_back(2);
    sequence.push_back(1);
    sequence.push_back(2);
    sequence.push_back(2);
    sequence.push_back(1);
    sequence.push_back(1);
    sequence.push_back(1);
    sequence.push_back(2);


    //bincount(sequence);
    */
    std::vector<int> sequence;
    std::vector<float> weights;

    sequence.push_back(1);
    sequence.push_back(2);
    sequence.push_back(1);
    sequence.push_back(2);
    sequence.push_back(2);
    sequence.push_back(1);
    sequence.push_back(1);

    weights.push_back(0.1);
    weights.push_back(0.2);
    weights.push_back(0.3);
    weights.push_back(0.4);
    weights.push_back(0.5);
    weights.push_back(0.6);
    weights.push_back(0.7);

    
    auto result = bincount(sequence, weights);


    std::cout << result[0] << std::endl;

    int i =0;
    for(i = 0;  i < 7; ++i)
        std::cout << result[i] << std::endl;

    return 0;
}