#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
#include <map>
#include<queue>
#include<algorithm>
#include<cmath>
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
void solve() {
	int TC; cin >> TC;
	while (TC-- > 0)
	{
		int n, q;
		cin >> n >> q;
		vector < vector<ll>> v((1001), vector<ll>(1001));
		for (int i = 1; i <= n; i++)
		{
			ll x, y;
			cin >> x >> y;
			v[x][y] += x * y;
		}
		for (int i = 1; i < 1000; i++)
			for (int j = 1; j < 1000; j++)
				v[i][j] += v[i - 1][j];
		for (int i = 1; i < 1000; i++)
			for (int j = 1; j < 1000; j++)
				v[i][j] += v[i][j - 1];
		while (q-- > 0)
		{
			ll h1, h2, w1, w2;
			cin >> h1 >> w1 >> h2 >> w2;
			ll res;
			res = v[h2 - 1][w2 - 1] - v[h1][w2 - 1] - v[h2 - 1][w1] + v[h1][w1];
			cout << res << '\n';
		}
	}
}
int main() {
	file();
	fast();
	solve();
	return 0;
}