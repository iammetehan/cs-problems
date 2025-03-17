#pragma once

#include <vector>

namespace cs_problems::sorting
{
    class Sorting
    {
    public:
        virtual std::vector<int> Run(const std::vector<int>& input) const = 0;
        virtual void Test() const;

        virtual ~Sorting();
    };
};