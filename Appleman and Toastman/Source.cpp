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
	for (ll i = 0; i < size; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ll sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			sum += (i + 1) * v[i];
		}
		else
		{
			sum += ((i + 2) * v[i]);
		}
	}
	cout << sum;

	return 0;
}