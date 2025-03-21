#include <iostream>

#include "selection.h"
#include "bubble.h"


int main()
{
    cs_problems::sorting::Sorting* selection = new cs_problems::sorting::Selection();
    selection->Test();

    cs_problems::sorting::Sorting* bubble = new cs_problems::sorting::Bubble();
    bubble->Test();

    return 0;
}