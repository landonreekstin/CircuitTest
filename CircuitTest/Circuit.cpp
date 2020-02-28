#include <iostream>
#include "Circuit.h"

using namespace std;

Circuit::Circuit(int resistors, int capacitors, float resistance)
{
	_pResistors = new int[resistors];

	_pCapacitors = new int[capacitors];

	_resistance = resistance;

	cout << "In Circuit Constructor: " << _pResistors << "\t" << _pCapacitors << "\t" << _resistance << endl;

}

Circuit::~Circuit()
{
	delete _pCapacitors;
	delete _pResistors;
	cout << "In Circuit Destructor: " << _pResistors << "\t" << _pCapacitors << "\t" << _resistance << endl;
}

Circuit::Circuit(const Circuit& oldCircuit)
{
	for (int i = 0; i < 2; i++)
	{
		_pCapacitors[i] = new int(*oldCircuit._pCapacitors);
		_pResistors[i] = new int(*oldCircuit._pResistors);
	}
	_resistance = oldCircuit._resistance;
}

// Assignmwnt Operator
Circuit& Circuit::operator=(const Circuit& oldCircuit)
{
	for (int i = 0; i < 2; i++)
	{
		_pCapacitors[i] = new int(*oldCircuit._pCapacitors);
		_pResistors[i] = new int(*oldCircuit._pResistors);
	}
	_resistance = oldCircuit._resistance;
	return *this;
}

