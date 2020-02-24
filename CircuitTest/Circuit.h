#pragma once
#include <iostream>

using namespace std;

class Circuit
{
private:
    int* _pResistors;
    int* _pCapacitors;

public:
    Circuit(int* pResistors[], int* pCapacitors[])
    {
        _pResistors = new int[];
        _pCapacitors = new int[];

        delete[] _pResistors;
        delete[] _pCapacitors;
    }
    ~Circuit();
};

