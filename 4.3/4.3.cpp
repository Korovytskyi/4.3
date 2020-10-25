// 4.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// < Коровицький Тарас >
// Лабораторна робота № 4.3
//Табуляція функції, заданої формулою: функція з параметрами
// Варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, B, F,b,c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if ((x - 1 < 0) && (b - x != 0))
			B = (a * x * x + b);
		else
			if ((x - 1 > 0) && (b + x == 0))
				B = ((x - a) / x);
			else
				B = x / c;
		F =  B*1;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}