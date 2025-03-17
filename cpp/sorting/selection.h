#pragma once

#include "sorting.h"

namespace cs_problems::sorting
{
    class Selection : public Sorting
    {
    public:
        std::vector<int> Run(const std::vector<int>& input) const override;
        void Test() const override;
    };
};