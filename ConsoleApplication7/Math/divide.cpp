#include<iostream>
#include"divide.h"
using namespace std;
double divide(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}
	else {
		return a / b;
	}
}