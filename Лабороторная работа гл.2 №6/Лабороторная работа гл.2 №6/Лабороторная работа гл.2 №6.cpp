#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int hours, minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "\nEnter the number of minutes: ";
	cin >> minutes;
	cout << "\n" << "Time: " << hours << ":"<< minutes;
	return 0;
	system("pause");

}