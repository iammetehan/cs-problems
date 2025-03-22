#include "bubble.h"

#include <iostream>

namespace cs_problems::sorting
{
    Bubble Bubble::instance;

    Bubble* Bubble::GetInstance()
    {
        return &instance;
    }

    std::vector<int> Bubble::Run(const std::vector<int>& input) const
    {
        std::vector<int> arr = input; // Create a copy of the input vector
        int n = arr.size();
        
        for (int i = 0; i < n - 1; ++i) 
        {
            bool isSwapped = false;
            for (int j = 0; j < n - i - 1; ++j) 
            {
                if (arr[j] > arr[j + 1]) 
                {
                    std::swap(arr[j], arr[j + 1]);
                    isSwapped = true;
                }
            }

            if (false == isSwapped) // Optimization: stop if already sorted
            {
                break;
            }
        }
        
        return arr;
    }

    void Bubble::Test() const
    {
        std::cout << "--------" << std::endl;
        std::cout << "Starting test for Bubble Sort" << std::endl;
    
        Sorting::Test();

        std::cout << "Bubble Sort is completed" << std::endl;
    };

};