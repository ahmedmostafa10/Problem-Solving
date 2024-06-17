#include<iostream>
#include <vector>
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define el '\n'
#define ll long long
#define ld long double
#define test int test;cin>>test;while(test--)
using namespace std;
void solve()
{
	int size;
	cin >> size;
	vector<int>v(size);
	for (int i = 0; i < size; i++) cin >> v[i];
	ll min = 1000000000000000000;
	for (int i = 0; i < size; i++)
	{
		int count=0;
		for (int j = 0; j < v[i]; j++)
		{
			int x;
			cin >> x;
			count += x * 5;
		}
		count += v[i] * 15;
		if (count<min)
		{
			min = count;
		}
	}
	cout << min;
}
int main()
{
	fast
		solve();
	return 0;
}