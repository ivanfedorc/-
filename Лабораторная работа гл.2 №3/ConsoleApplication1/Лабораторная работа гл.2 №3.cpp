
#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;

int FirstStr()
{
	cout << "Three blind mice\n";
	return 0;
}
int SecondStr()
{
	cout << "See how they run\n";
	return 0;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	FirstStr();
	FirstStr();
	SecondStr();
	SecondStr();
	return 0;
	system("pause");
}


