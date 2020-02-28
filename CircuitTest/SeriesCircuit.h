#pragma once

#include <iostream>
#include "Circuit.h"

using namespace std;

class SeriesCircuit : Circuit
{
public:
    // SeriesCircuit(int*, int*, int*);
    
    SeriesCircuit(int resistors, int capacitors, int resistance);
    ~SeriesCircuit();
};

