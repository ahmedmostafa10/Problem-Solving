#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int yakko, wakko;
	cin >> yakko >> wakko;
	int max =(yakko > wakko) ? yakko : wakko;
	max--;
	if (max == 0)
	{
		cout << 1 << "/" << 1;
		return 0;
	}
	int numerator=6-max;
	int denominator=6;
	if (numerator % 2 == 0 && denominator % 2 == 0)
	{
		numerator /= 2;
		denominator /= 2;
	}
	else if (numerator % 3 == 0 && denominator % 3 == 0)
	{
		numerator /= 3;
		denominator /= 3;
	}
	cout << numerator << "/" << denominator;
	
	return 0;
}