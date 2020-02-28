#pragma once
#include <iostream>

using namespace std;

class Circuit
{
protected:
    int* _pResistors = 0;
    int* _pCapacitors = 0;
    float _resistance = 0;

public:
   
    Circuit(int resistors, int capacitors, int resistance);
    ~Circuit();

    // Copy Constructor
    Circuit(const Circuit&);

    // Assignment Operator
    Circuit& operator=(const Circuit&);
};

