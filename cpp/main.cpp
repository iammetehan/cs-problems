#include <iostream>

#include "selection.h"
#include "bubble.h"

std::vector <cs_problems::sorting::Sorting*> sortings;

void AddSortingAlgorithms()
{
    sortings.push_back(cs_problems::sorting::Selection::GetInstance());
    sortings.push_back(cs_problems::sorting::Bubble::GetInstance());
}

void RunSortingAlgorithmsTests()
{
    for (auto* sorting: sortings)
    {
        sorting->Test();
    }
}

int main()
{
    AddSortingAlgorithms();
    RunSortingAlgorithmsTests();

    return 0;
}