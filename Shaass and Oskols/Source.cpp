#include <iostream>
#include <vector>
#include<utility>
using namespace std;
int main()
{
	int size;
	cin >> size;
	vector<int> v(size);
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
	}
	int shots;
	cin >> shots;
	vector<pair<int, int>> v2(shots);
	for ( auto &x:v2)
	{
		cin >> x.first >> x.second;
	}
	for (size_t i = 0; i < shots; i++)
	{
		if (((v2[i].first) ) < size)
		{
			v[((v2[i].first))] += (v[(v2[i].first)-1] - v2[i].second);
		}
		if (((v2[i].first) - 2) >= 0)
		{-
			v[((v2[i].first) -2)] += ( v2[i].second-1);
		}
		v[((v2[i].first)-1)] = 0;

	}
	for ( auto x:v)
	{
		cout << x<<endl;
	}
	v.clear();
	v2.clear();
	return 0;
}