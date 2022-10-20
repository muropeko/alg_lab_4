#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int k, N;
	double S;

	cout << "k = "; cin >> k;
	S = 1;
	N = k;

/*1*/
	while (S <= 19)
		S += ((k - N) / (k + N)) + 1;
	cout << S << endl;
	S = 1;

/*2*/
	do
		S += ((k - N) / (k + N)) + 1;
	while (S <= 19);
	cout << S << endl;
	S = 1;

/*3*/
	for(S = 1; S <= 19; )
		S += ((k - N) / (k + N)) + 1;
	cout << S << endl;






}
