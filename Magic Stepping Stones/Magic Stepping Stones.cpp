#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <algorithm>
#include<vector>
#define endl '\n'
#define all(v) v.begin(),v.end()
#define allr(s) s.rbegin(),s.rend()
#define RT(s) return cout<<s,0
#define sz(s)    (int)(s.size())
#define out(n)  for(int i = 1; i <= n; i++) cout<<v[i]<<'\n';
//#define PI acos(-1)
#define EPS 1e-8
#define watch(x) cout << (#x)<<" = "<<x<<endl
#define mk(x, y) make_pair(x, y)
#define No      cout<<"No\n"
#define Yes     cout<<"Yes\n"
#define no      cout<<"no\n"
#define yes     cout<<"yes\n"
#define NO      cout<<"NO\n"
#define YES     cout<<"YES\n"
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

void fast() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
}
void solve()
{
	int n; cin >> n;
	vector<pair<int,int>>v(n + 1);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first;
	}
	for (int i = n-2; i >= 0; i--)
	{
		int mn = 1e9;
		for (int j = i+1; j <= i+v[i].first&&j<=n; j++)
		{
			mn = min(mn, v[j].second);
		}
		v[i].second = mn + 1;
	}
	cout << v[0].second;
}
int main() {
	//file();
	fast();
	solve();
	return 0;
}