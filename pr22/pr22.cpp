#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	//double z1; // результат обчислення 1-го виразу
	double z2;  // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	// z1 = (cos(x) + sin(x)) / (cos(x) - sin(x));
	z2 = (tan(2 * x) + (1 / cos(2 * x)));
	cout << '\n';
	// cout << "z1 = " << z1 << '\n';
	cout << "z2 = " << z2 << '\n';
	cin.get();
	return 0;
}