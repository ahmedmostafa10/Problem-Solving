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
	string s1, s2;
	cin >> s1 >> s2;
	int ans = 0;
	map<char, pair<int, int>>m;
	for (int i = 0; i < s1.size(); i++) m[s1[i]].first++;
	for (int i = 0; i < s2.size(); i++) m[s2[i]].second++;
	for ( auto x:m)
	{
		if (!x.second.first)
		{
			ans = -1;
			break;
		}
		ans += min(x.second.first, x.second.second);
	}
	cout << ans;
}
int main()
{
	fast
		solve();
	return 0;
}