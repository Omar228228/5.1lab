// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double f(const double x, const double y, const double z); // прототип
int main()
{
	double t, s;

	cout << "t = "; cin >> t;
	cout << "s = "; cin >> s;
	double c = (f(t, s, 2) + f(1, s + t, t - s)) /(1 + (f(1,1,pow(t, 2)+pow(s, 2)) * f(1, 1, pow(t, 2) + pow(s, 2))));
	cout << "c = " << c << endl;
	return 0;
}
double f(const double a, const double b, const double c) // визначення
{
	return (a + b + c) / (sin(a * b) * sin(a * b) + pow(c, 2));
}