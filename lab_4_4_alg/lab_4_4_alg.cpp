// lab_4_4_alg.cpp
// Довгошиї Анастасії
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 6


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xk, dx, R, y;
	cout << "x = "; cin >> x;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "y" << "    |" << endl;
	cout << "----------------------" << endl;
	while (x <= xk)
	{
		if (x <= -5)
			y = -3; //+
		else
			if (-5 < x && x <= -R)
				y = (3 * R + 3 * x) / (-R + 5); //+
			else
				if (-R < x && x <= R)
					y = sqrt(pow(R, 2) - pow(x, 2)); //+
				else
					if (R < x && x <= 8)
						y = (R * x - pow(R, 2)) / (8 - R); //+
					else
						y = R;  //+

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}
