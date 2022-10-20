// lab_4_5_alg.cpp
// Довгошиї Анастасії
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру
// Варіант 6

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;


		if ((y >= -R + sqrt(pow(R, 2) - pow((x + R), 2)) && y <= 0) ||
			(y <= sqrt(pow(R, 2) - pow((x - R), 2))))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	

		for (int i = 0; i < 5; i++)
		{
			x = 2*R * rand() / RAND_MAX - 2*R;
			y = 2*R * rand() / RAND_MAX - 2*R;
			if ((y >= 1 && y <= 3 && x >= -1 && x <= 1) ||
				(x * x + y * y <= 1) ||
				(y >= -2 && y <= x - 1 && y <= -x - 1))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
		
	return 0;
}