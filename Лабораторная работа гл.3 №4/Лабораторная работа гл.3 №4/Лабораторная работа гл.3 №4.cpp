#include "pch.h"
#include <iostream>
using namespace std;
const int a = 60, b=24;

int main()
{
	int days, hours, minutes, seconds;
	long secondsTotal;

	cout << "Enter the number of seconds: ";
	cin >> secondsTotal;
	seconds = secondsTotal % a;
	minutes = secondsTotal / a;
	hours = minutes / a;
	minutes = minutes % a;
	days = hours / b;
	hours = hours % b;
	cout << "\n" << secondsTotal << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.";
	system("pause");
	return 0;
}