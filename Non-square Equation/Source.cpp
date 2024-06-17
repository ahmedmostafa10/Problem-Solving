#include <iostream>
#include <cmath>
using namespace std;
#define ll  long long
int SumOfDigits(ll x)
{
	ll sum = 0;
	while (x != 0)
	{
		sum += x % 10;
		x /= 10;
	}
	return sum;
}
int main()
{
	ll num;
	cin >> num;
	ll temp = sqrt(num);
	for (int i = temp; i >= 1; i--)
	{
		if (num / i - i > 90)
		{
			break;
		}
		if (num % i != 0)
		{
			continue;
		}
		ll result = (num /(i)) - i;
		if (result == (SumOfDigits(i)))
		{
			cout << static_cast<int>(i);
			return 0;
		}
	}
	cout << -1<<endl;
	return 0;
}