#include<iostream>
#include <map>
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
	map<int, int>m;
	for (int i = 0; i < size; i++)
	{
		int x; cin >> x;
		m[x]++;
	}
	int ans=0;
	for ( auto x:m)
	{
		if (x.second >= 2) ans += x.second / 2;
	}
	cout << ans/2;
}
int main()
{
	fast
		solve();
	return 0;
}