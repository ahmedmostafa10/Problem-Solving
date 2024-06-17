#include <iostream>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	ll size;
	cin >> size;
	vector<ll> v(size);
	for (auto &x :v)
	{
		cin >> x;
	}
	for (int i = 0; i < size; i++)
	{
		ll sum = 0;
		ll sum2=0;
		sum = (v[i] * (v[i] + 1)) / 2;
		
		int index = 0;
		while (pow(2, index)<=v[i])
		{
			sum2 += (2 * (pow(2, index)));
			index++;
		}
		cout << sum-sum2<<endl;
	}

	return 0;
}