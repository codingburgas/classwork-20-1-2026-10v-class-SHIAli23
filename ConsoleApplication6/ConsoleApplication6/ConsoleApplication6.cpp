#include<iostream>
#include "../MathLibrary/calculate.h"
using namespace std;
int main()
{
	int a, b, c, h;
	cin >> a >> b >> c >> h;
	cout << calculatePerimeter(a, b, c) << endl;
	cout << calculatePlot(a, b, c, h);
}