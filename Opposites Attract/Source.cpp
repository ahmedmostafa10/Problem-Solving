#include <iostream>
#include <vector>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
	int size;
	cin >> size;
	vector<ll> v(size);
	vector<ll> v2(21);
	for (ll i = 0; i < size; i++)
	{
		cin >> v[i];
		v2[v[i] + 10]++;

	}
	ll sum = 0;
	for (int i = 0; i <= 10; i++)
	{
		if (i == 10)
		{
			sum += ((v2[i] * (v2[i] -1)) / 2);
		}
		else
		{
			sum += (v2[i] * v2[20 - i]);
		}
	}
	cout << sum;

	return 0;
}