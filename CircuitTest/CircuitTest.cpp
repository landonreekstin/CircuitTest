#include <iostream>
#include "Circuit.h"

int main()
{
    int pResistors[] = { 50, 100, 70 };
    int pCapacitors[] = { 23, 47, 100 };
    int resistance = 55;

    Circuit components(pResistors, pCapacitors, resistance);
}

