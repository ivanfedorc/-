#include "pch.h"
#include <iostream>
using namespace std;
const int a = 12, b = 0.0254;

int main()
{
	int inch, foot;
	double weight, pound, meterHeight, inchHeight, index;

	cout << "Please enter your height by foots and inches: ";	
		cin >> foot;
		cin >> inch;
	cout << "please enter your weight by pounds:";
		cin >> pound;
	inchHeight = foot * a + inch;
	meterHeight = inchHeight * 0.0254;
	weight = pound / 2.2;
	index = weight / (meterHeight*meterHeight);
	cout <<"Your index:"<<index;
	system("pause");
	return 0;
}
