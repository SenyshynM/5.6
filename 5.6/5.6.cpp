// Lab 5.6
#include <iostream>
#include <cmath>
using namespace std;
double f(const double a, const double b, const double c); // прототип

int main()
{
	double t, s;

	cout << "t = "; cin >> t;
	cout << "s = "; cin >> s;

	double m = (f(t, s, 2) + f(1, s + t, t - s)) / (1 + pow(f(1, 1, t * t + s * s), 2));

	cout << "m = " << m << endl;
	return 0;
}

double f(const double a, const double b, const double c) // визначення
{
	return (a + b + c) / (pow(sin(a * b), 2) + c * c);
}
