#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
#include <map>
#include<string>
#include<cstring>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
//#include"testlib.h"
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
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
void file() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	//freopen("C:\\Users\\karemo\\source\\repos\\generator\\generator\\out.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#else
	//freopen("gcd.in", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
}

void fast() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
}
template<class val>
istream& operator>>(istream& is, vector<val>& vec) {
	for (int i = 0; i < vec.size(); i++)
		is >> vec[i];
	return is;
}
template<class val>
ostream& operator<<(ostream& os, vector<val>& vec) {
	for (int i = 0; i < sz(vec); i++) {
		os << vec[i];
		if (i + 1 < sz(vec))
			os << ' ';
	}
	return os;
}
template<class f, class s>
istream& operator>>(istream& is, pair<f, s>& p) {
	is >> p.first >> p.second;
	return is;
}
template<class f, class s>
ostream& operator<<(ostream& os, pair<f, s>& p) {
	os << p.first << ' ' << p.second;
	return os;
}
ll max(ll x, ll y)
{
	if (x > y)
	{
		return x;
	}
	else {
		return y;
	}
}
ll	max(ll ans, ll x, ll y)
{
	if (ans >= x && ans >= y)
	{
		return ans;
	}
	else if (x >= ans && x >= y)
	{
		return x;
	}
	else if (y >= ans && y >= x)
	{
		return y;
	}
}
void solve() {
	int n, m; cin >> n >> m; vector<vector<int>>v((n+1), vector<int>(m+1));
	vector<pair<int,int>>ind;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			cin >> v[i][j];

		}
	vector<vector<int>>rows((n+1), vector<int>(m+1));
	vector<vector<int>>columns((n+1), vector<int>(m+1));
	
	for (int i = 1; i <=n ; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			rows[i][j] += rows[i][j - 1] + v[i][j];
		}
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			columns[j][i] += columns[j-1][i] + v[j][i];
		}
	}
	int it = -1;
	ll ans = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (v[i][j]==1)
			{
				continue;
			}
			if (rows[i][j] > rows[i][0])
				ans++;
			if (rows[i][m] > rows[i][j])
				ans++;
			if (columns[i][j] > columns[0][j])
				ans++;
			if (columns[n][j] > columns[i][j])
				ans++;
		}

	}
	cout << ans;
}
int main() {
	file();
	fast();
	solve();
	return 0;
}

