

#include "pch.h"
#include <iostream>
using namespace std;
const int a = 12;

int main()
{
	int inch, foot, exinch;
	
   cout << "Please enter your height by inch: ";
   cin >> inch;
   foot = inch / a;
   exinch = inch % a;
   cout << "Your height " << foot << " foots, " << exinch << " inchs";

   return 0;
}

