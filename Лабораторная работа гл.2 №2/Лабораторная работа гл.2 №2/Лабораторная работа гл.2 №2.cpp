

#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	int farlong , yard;
	cout << "Введите кол-во Фарлонгов\n";
	cin >> farlong;
	yard = farlong * 220;
	cout << "Кол-во ярдов=" << yard;
	return 0;
	system("pause");
    
}

