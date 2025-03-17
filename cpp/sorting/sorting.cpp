#include "sorting.h"

#include <iostream>

namespace cs_problems::sorting
{
    Sorting::~Sorting()
    {
        
    }

    void Sorting::Test() const
    {
        auto RunTest = [&](const std::vector<int>& input, const std::vector<int>& expected, const std::string& testName) 
        {
            std::vector<int> result = this->Run(input);
            std::cout << testName << ": " << (result == expected ? "PASSED" : "FAILED") << "\n";
        };
        
        // Test case 1: Already sorted array
        RunTest({1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, "Sorted Array");
        
        // Test case 2: Reverse sorted array
        RunTest({5, 4, 3, 2, 1}, {1, 2, 3, 4, 5}, "Reverse Sorted Array");
        
        // Test case 3: Random order array
        RunTest({3, 1, 4, 1, 5, 9, 2, 6}, {1, 1, 2, 3, 4, 5, 6, 9}, "Random Order Array");
        
        // Test case 4: Single element array
        RunTest({42}, {42}, "Single Element Array");
        
        // Test case 5: Empty array
        RunTest({}, {}, "Empty Array");
    };

};