// lab_4_7_alg.cpp
// Довгошиї Анастасії
// Лабораторна робота № 4.7
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних
// Варіант 6

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	x = xp;


		cout << fixed;
		cout << " " << setw(6) << "x" << " "
			<< setw(15) << "exp(x)" << " "
			<< setw(10) << "S" << " "
			<< setw(13) << "n" << " "
			<< endl;
		while (x <= xk)
		{
			n = 0; 
			a = 1; 
			--S = a;
			do {
				n++;
				R = x / n; 
				a *= R;
				--S += a;
			} while (abs(a) >= eps);
			cout << "|" << setw(10) << setprecision(2) << x << "  |"
				<< setw(11) << setprecision(5) << exp(x) << "  |"
				<< setw(11) << setprecision(5) << --S << "  |"
				<< setw(11) << n << "  |"
				<< endl;
			x += dx;
		}
	

	return 0;
}
