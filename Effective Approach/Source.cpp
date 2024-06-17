#include <iostream>
#include <map>
#define ll long long
using namespace std;
int main()
{
	ll size;
	cin >> size;
	int count1 = 0;
	int count2 = 0;
	map<ll,ll>m;
	for (int i=0;i<size;i++)
	{
		int y;
		cin >> y;
		m.insert({ y,i});
	}
	ll x ;
	cin >> x;
	for (int i=0;i<x;i++)
	{
		ll temp;
		cin >> temp;
		count1 += m[x] + 1;
		count2 += m.size()-m[x];
	}
	cout << count1 <<" "<<count2;

	return 0;
}