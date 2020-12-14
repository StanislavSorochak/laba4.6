// Lab_04_6.cpp
// < Сорочак Станіслав >
// Лабораторна робота № 4.6
// Варіант 24

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double P1, P2, S, S1, S2;
	int n, i;

	S1 = 0;
	n = 1;
	while (n <= 10)
	{
		P1 = 1;
		i = 1;
		while (i <= n)
		{
			P1 *= pow(i, 2);
			i++;
		}
		S1 += P1 / n;
		n++;
	}

	S2 = 0;
	n = 1;
	while (n <= 10)
	{
		P2 = 1;
		i = n;
		while (i <= 10)
		{
			P2 *= pow(i, 2);
			i++;
		}
		S2 += P2 / n;
		n++;
	}

	S = S1 + S2;

	cout << S << endl;

	S1 = 0;
	n = 1;
	do {
		P1 = 1;
		i = 1;
		do {
			P1 *= pow(i, 2);
			i++;
		} while (i <= n);
		S1 += P1 / n;
		n++;
	} while (n <= 10);

	S2 = 0;
	n = 1;
	do {
		P2 = 1;
		i = n;
		do {
			P2 *= pow(i, 2);
			i++;
		} while (i <= 10);
		S2 += P2 / n;
		n++;
	} while (n <= 10);

	S = S1 + S2;

	cout << S << endl;

	S1 = 0;
	for (n = 1; n <= 10; n++)
	{
		P1 = 1;
		for (i = 1; i <= n; i++)
		{
			P1 *= pow(i, 2);
		}
		S1 += P1 / n;
	}

	S2 = 0;
	for (n = 1; n <= 10; n++)
	{
		P2 = 1;
		for (i = n; i <= 10; i++)
		{
			P2 *= pow(i, 2);
		}
		S2 += P2 / n;
	}

	S = S1 + S2;

	cout << S << endl;

	S1 = 0;
	for (n = 10; n >= 1; n--)
	{
		P1 = 1;
		for (i = n; i >= 1; i--)
		{
			P1 *= pow(i, 2);
		}
		S1 += P1 / n;
	}

	S2 = 0;
	for (n = 10; n >= 1; n--)
	{
		P2 = 1;
		for (i = 10; i >= n; i--)
		{
			P2 *= pow(i, 2);
		}
		S2 += P2 / n;
	}

	S = S1 + S2;

	cout << S << endl;

	return 0;
}





