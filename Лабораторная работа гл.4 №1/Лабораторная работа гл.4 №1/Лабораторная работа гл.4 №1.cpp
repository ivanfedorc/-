

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{

	char grade[2];
	string Fname, Lname;
	int age;
	cout << "What is your first name? ";   
	cin>>Fname;
	cout << "What is your  second name? ";
	cin>>Lname;
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	grade[0] = grade[0]++;
	cout << "Name: " << Lname << ", " << Fname;
	cout << "\nGrade: " << grade;
	cout << "\nAge: " << age;
	system("pause");
	return 0;

	




}
