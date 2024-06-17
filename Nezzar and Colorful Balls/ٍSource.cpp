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
	for (int i = 0; i < size; i++)
	{
		int x; cin >> x;
		map<int, int>m;
		for (int j = 0; j < x; j++)
		{
			int num; cin >> num;
			m[num]++;
		}
		int ans = 1;
		for (auto c : m)
		{
			ans = c.second > ans ? c.second : ans;
		}
		cout << ans << endl;
	}
}
int main()
{
	fast
		solve();
	return 0;
}