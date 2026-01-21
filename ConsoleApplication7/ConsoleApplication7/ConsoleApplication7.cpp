#include "../Math/math.h"
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << add(a, b) << " " << subtract(a, b) << " " << multiply(a, b) << " " << divide(a, b);
}