#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;
int main()
{
	ll size;
	cin >> size;
	vector<ll> v(size);
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
	}
	for (int i = 0; i < size; i++)
	{
		ll max = -10000000000;
		ll min = 10000000000;
		if (i == 0)
		{
			min = v[i + 1] - v[i];
			max = v[v.size() - 1] - v[i];
		}
		else if (i == v.size() - 1)
		{
			min = v[i] - v[i - 1];
			max = v[i] - v[0];
		}
		else
		{
			min = (v[i] - v[i - 1] < v[i + 1] - v[i]) ? v[i] - v[i - 1] : v[i + 1] - v[i];
			max = (v[i] - v[0] > v[v.size() - 1] - v[i]) ? v[i] - v[0] : v[v.size() - 1] - v[i];
		}
		cout << min << " " << max << endl;
	}
	return 0;
}