#include <iostream>
using namespace std;

int main()
{
	const int daysAmount = 14;
	double temperatures[daysAmount];

	int amountBelowZero = 0, maxPos = 0;


	cout << "Fill temperatures:" << endl;
	for (int i = 0; i < daysAmount; i++)
	{
		cout << i + 1 << ") ";
		cin >> temperatures[i];
		if (temperatures[i] > 0)
		{
			amountBelowZero++;
		}
		if (temperatures[i] > temperatures[maxPos])
		{
			maxPos = i;
		}
	}
	cout << endl << "Max temperature: " << temperatures[maxPos] << endl <<
		"Amount of days,where the temperature was below zero: " << amountBelowZero;
	return 0;
}
