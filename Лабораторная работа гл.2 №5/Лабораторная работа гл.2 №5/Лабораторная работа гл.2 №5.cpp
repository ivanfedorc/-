#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double LY, AU;
	cout << "Enter the number of light years: ";
	cin >> LY;
	AU = LY * 63240;
	cout << "\n" << LY << " ight years= " << AU << " aastronomical units";
	return 0;
	system("pause");

}