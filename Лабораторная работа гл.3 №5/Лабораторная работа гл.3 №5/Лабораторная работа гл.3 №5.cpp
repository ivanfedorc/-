#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	double distance, fuel, consumption;
	cout << "How much kilometers? ";
	cin >> distance;
	cout << "How much fuel? ";
	cin >> fuel;
	consumption = distance / fuel;
	cout << "Consumption: " << consumption;
	system("pause");
	return 0;

}

