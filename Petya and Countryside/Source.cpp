#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#define ll long long
using namespace std;
int countmax(vector <ll>v,int size)
{
	if (size == 1)
	{
		return 1;
	}
	int x;
	int count=1;
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		x = v[i];
		for (int j = i+1; j < size; j++)
		{
			if (x >= v[j])
			{
				count++;
				x = v[j];
			}
			else
				break;

		}
		x = v[i];
		for (int k = i-1; k >= 0; k--)
		{
			if (x >= v[k])
			{
				count++;
				x = v[k];
			}
			else
				break;

		}
		if (count > max)
		{
			max = count;
		}
		count = 1;
	}
	return max;
}
int main()
{
	ll size;
	cin >> size;
	vector<ll> v(size);
	int count = 1;
	for (auto &x :v)
	{
		cin >> x;
	}
	int max = countmax(v,size);
	cout << max;

	return 0;
}