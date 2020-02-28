#pragma once

#include <iostream>
#include "Circuit.h"

using namespace std;

class ParallelCircuit : Circuit
{
public:
	
	ParallelCircuit(int resistors, int capacitors, int resistance);
	~ParallelCircuit();
};

