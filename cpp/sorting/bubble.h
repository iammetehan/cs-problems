#pragma once

#include "sorting.h"

namespace cs_problems::sorting
{
    class Bubble : public Sorting
    {
    public:
        std::vector<int> Run(const std::vector<int>& input) const override;
        void Test() const override;
        
        static Bubble *GetInstance();
   
    private:
        Bubble() = default;
        static Bubble instance;
    };
};