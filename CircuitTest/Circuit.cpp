#include <iostream>
#include "Circuit.h"

using namespace std;

Circuit::Circuit(int* pResistors[3], int* pCapacitors[3])
{
	for (int i = 0; i <= 2; i++)
	{
		_pResistors = pResistors[i] = 0;
		_pCapacitors = pCapacitors[i] = 0;
	}
	cout << "In Circuit Constructor: " << _pResistors << "\t" << _pCapacitors << endl;

}

Circuit::~Circuit()
{
	cout << "In Circuit Destructor: " << _pResistors << "\t" << _pCapacitors << endl;
}

