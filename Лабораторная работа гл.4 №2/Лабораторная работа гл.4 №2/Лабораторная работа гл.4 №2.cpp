#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string name, dessert;
	cout << "Enter your name: \n";
	cin >> name;
	cout << "Enter your favourite dessert: \n";
	cin>>dessert;
	cout << "I have tasty " << dessert;
	cout << " for you, " << name << ".\ n ";
	system("pause");
	return 0;

}