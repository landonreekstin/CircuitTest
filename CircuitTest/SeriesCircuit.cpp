#pragma once
#include <iostream>
#include "Circuit.h"
#include "SeriesCircuit.h"

using namespace std;

SeriesCircuit::SeriesCircuit(int resistors, int capacitors, int resistance) : Circuit(resistors, capacitors, resistance)
{
	cout << "In SeriesCircuit Constructor: " << _pResistors << " " << _pCapacitors << " " << _resistance << endl;
}


SeriesCircuit::~SeriesCircuit()
{
	cout << "In SeriesCircuit Destructor: " << _pResistors << " " << _pCapacitors << " " << _resistance << endl;

}