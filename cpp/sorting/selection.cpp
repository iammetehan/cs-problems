#include "selection.h"

#include <iostream>

namespace cs_problems::sorting
{
    Selection Selection::instance;

    Selection* Selection::GetInstance()
    {
        return &instance;
    }

    std::vector<int> Selection::Run(const std::vector<int>& input) const
    {
        std::vector<int> arr = input; // Create a copy of the input vector
        int n = arr.size();
        
        for (int i = 0; i < n - 1; ++i) 
        {
            int minIndex = i;
            for (int j = i + 1; j < n; ++j) 
            {
                if (arr[j] < arr[minIndex]) 
                {
                    minIndex = j;
                }
            }
            
            if (minIndex != i) 
            {
                std::swap(arr[i], arr[minIndex]);
            }
        }
        
        return arr;
    }

    void Selection::Test() const
    {
        std::cout << "--------" << std::endl;
        std::cout << "Starting test for Selection Sort" << std::endl;
    
        Sorting::Test();

        std::cout << "Selection Sort is completed" << std::endl;
    };

};