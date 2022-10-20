// lab_4_3_alg.cpp
// Довгошиї Анастасії
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 6

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, F, a, b, c;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << "x = "; cin >> x;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "F" << "    |" << endl;
	cout << "----------------------" << endl;

	while (x <= xk)
	{
		if (c < 0 && b != 0)
			F = a * pow(x, 2) + pow(b, 2) * x;
		else if (c > 0 && b == 0)
			F = (x + a) / (x + c);
		else
			F = x / c;


		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;

	}
	cout << "----------------------" << endl;
	return 0;
}