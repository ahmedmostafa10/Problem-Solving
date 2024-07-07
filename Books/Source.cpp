//=============//
// AHMED MOSTAFA//
//=============//
// Keep going..Sometimes you win, Sometimes you learn. >   < .
//                                                     \   U   /
//
/*
			  ||========||
			  || i ♥ u  ||
			  ||========||
			  Dark_Carnage
*/
//// وَقُلْ رَبِّ زِدْنِي عِلْمًا
// سبحان الله وبحمده سبحان الله العظيم
// اللهم صل على سيدنا محمد · "ونؤمن أنك خير الورى، ومسك الحياة، وخير الأنام، تفيض بحبك أرواحُنا، عليك الصلاة وعليك السلام"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>

#define endl '\n'
#define all(v) v.begin(), v.end()
#define allr(s) s.rbegin(), s.rend()
#define RT(s) return cout << s, 0
#define sz(s) (int)(s.size())
#define in(n)                   \
	for (int i = 0; i < n; i++) \
		cin >> v[i];
#define out(n)                   \
	for (int i = 1; i <= n; i++) \
		cout << v[i] << '\n';
// #define PI acos(-1)
#define EPS 1e-8
#define watch(x) cout << (#x) << " = " << x << endl
#define mk(x, y) make_pair(x, y)
#define No cout << "No\n"
#define Yes cout << "Yes\n"
#define no cout << "no\n"
#define yes cout << "yes\n"
#define NO cout << "NO\n"
#define YES cout << "YES\n"
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};

void file()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// freopen("errors.txt", "w", stderr);
#else
	// freopen("gcd.in", "r", stdin);
	// freopen("out.txt", "w", stdout);
#endif
}

void fast()
{
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
}

template <class val>
istream &operator>>(istream &is, vector<val> &vec)
{
	for (int i = 0; i < vec.size(); i++)
		is >> vec[i];
	return is;
}

template <class val>
ostream &operator<<(ostream &os, vector<val> &vec)
{
	for (int i = 0; i < sz(vec); i++)
	{
		os << vec[i];
		if (i + 1 < sz(vec))
			os << ' ';
	}
	return os;
}

template <class f, class s>
istream &operator>>(istream &is, pair<f, s> &p)
{
	is >> p.first >> p.second;
	return is;
}

template <class f, class s>
ostream &operator<<(ostream &os, pair<f, s> &p)
{
	os << p.first << ' ' << p.second;
	return os;
}
ll max(ll x, ll y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
// void solve() {
//	int numofbooks, minutes; cin >> numofbooks >> minutes;
//  vector<int>v(numofbooks);
//  for (int i = 0; i < numofbooks; i++)
//  {
//  	cin >> v[i];
//  }
//  int p1 = 0, p2 = 0;
//  int count = 0;
//  while (p2<numofbooks&&p1<numofbooks)
//  {
//  	if (minutes>=v[p2])
//  	{
//  		count = max(count, p2 - p1+1);
//  		minutes -= v[p2++];
//  	}
//  	else
//  	{
//  		minutes += v[p1++];
//  	}
//  }
//  cout << count;
// }
void solve()
{
	int n, t;
	cin >> n >> t;
	vi v(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
		v[i] += v[i - 1];
	}
	int it = 0;
	int res = 0;
	while (++it <= n)
	{
		int l = 1, r = n, mid, ans = -1;
		while (l <= r)
		{
			mid = l + (r - l) / 2;
			if (v[mid] - v[it - 1] <= t)
			{
				l = mid + 1;
				ans = mid - it + 1;
			}
			else
			{
				r = mid - 1;
			}
		}
		res = max(res, ans);
	}
	cout << res;
}
int main()
{
	file();
	fast();
	solve();
	return 0;
}