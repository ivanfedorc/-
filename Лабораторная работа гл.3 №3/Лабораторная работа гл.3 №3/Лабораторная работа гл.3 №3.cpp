#include "pch.h"
#include <iostream>
using namespace std;
const int a = 60;

int main()
{
	double degrees, minutes, seconds, minutesTotal, degreesTotal;

	cout << "Please enter a latitude in degrees, minutes and seconds: ";
	cout << "\nFirstly, enter the degrees:";
	cin >> degrees;
	cout << "Secondly, enter the minutes of arc:";
	cin >> minutes;
	cout << "Thirdly, enter the seconds of arc:";
	cin >> seconds;
	minutesTotal = minutes + seconds / a;
	degreesTotal = degrees + minutesTotal / a;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degreesTotal << " degrees.";
	system("pause");
	return 0;
}