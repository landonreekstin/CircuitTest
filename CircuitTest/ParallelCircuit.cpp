#pragma once
#include <iostream>
#include "Circuit.h"
#include "ParallelCircuit.h"

using namespace std;

ParallelCircuit::ParallelCircuit(int resistors, int capacitors, int resistance) : Circuit(resistors, capacitors, resistance)
{
	cout << "In ParallelCircuit Constructor: " << _pResistors << " " << _pCapacitors << " " << _resistance << endl;
}


ParallelCircuit::~ParallelCircuit()
{
	cout << "In ParallelCircuit Destructor: " << _pResistors << " " << _pCapacitors << " " << _resistance << endl;
}

