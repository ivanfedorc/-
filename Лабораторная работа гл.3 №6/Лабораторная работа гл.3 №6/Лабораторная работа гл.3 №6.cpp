#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double conEU, conUS;
	cout << "Enter fuel consumption: ";
	cin >> conEU;
	conUS = (3.785*62.14) / conEU;
	cout << "Fuel consumption: " << conUS;
	system("pause");
	return 0;
}


 