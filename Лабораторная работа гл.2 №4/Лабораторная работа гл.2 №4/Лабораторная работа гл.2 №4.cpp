#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int celsius;
	double fahrenheit;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	fahrenheit = celsius*1.8+32;
	cout << "\n" << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit";
	return 0;
	system("pause");
}