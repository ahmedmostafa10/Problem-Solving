#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
	ll size;
	cin >> size;
	vector<ll> v(size);
	int m;
	cin >> m;
	for (auto &x:v)
	{
		cin >> x;
	}
	int money_earned = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < m; i++)
	{
		if (v[i] < 0)
		{
			money_earned += v[i];
		}
		else
		{
			break;
		}
	}
	cout << -money_earned;
	return 0;
}