#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <cmath>
// #include"testlib.h"
#define endl '\n'
#define all(v) v.begin(), v.end()
#define allr(s) s.rbegin(), s.rend()
#define RT(s) return cout << s, 0
#define sz(s) (int)(s.size())
#define out(n)                   \
	for (int i = 1; i <= n; i++) \
		cout << v[i] << '\n';
// #define PI acos(-1)
#define EPS 1e-8
#define watch(x) cout << (#x) << " = " << x << endl
#define mk(x, y) make_pair(x, y)
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
	// freopen("C:\\Users\\karemo\\source\\repos\\generator\\generator\\out.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);
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
void solve()
{
	int n;
	cin >> n;
	vi a(n);
	int p1 = 0, p2 = n - 1, alice = 0, bob = 0, ta = 0, tb = 0;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	while (p1 <= p2)
	{
		if (a[p1] < a[p2])
		{
			alice++;
			a[p2] -= a[p1];
			ta = 0;
			tb += a[p1];
			p1++;
		}
		else if (a[p1] > a[p2])
		{
			bob++;
			a[p1] -= a[p2];
			tb = 0;
			ta += a[p2];
			p2--;
		}
		else if (a[p1] == a[p2] && p1 != p2)
		{
			alice++;
			bob++;
			p1++;
			p2--;
			tb = 0, ta = 0;
		}
		else if (p1 == p2)
		{
			if (ta >= tb)
			{
				alice++;
				p1++;
			}
			else
			{
				bob++;
				p2--;
			}
		}
	}
	cout << alice << " " << bob;
}
// void solve()
// {

// 	int BarsOfChoclate;
// 	cin >> BarsOfChoclate;
// 	vector<int> v(BarsOfChoclate);
// 	for (int i = 0; i < BarsOfChoclate; i++)
// 	{
// 		cin >> v[i];
// 	}
// 	int p1 = 0, p2 = BarsOfChoclate - 1;
// 	int alice = 0, bob = 0;
// 	while (p2 != p1)
// 	{
// 		if (alice <= bob)
// 		{
// 			alice += v[p1++];
// 		}
// 		else
// 		{
// 			bob += v[p2--];
// 		}
// 	}
// 	if (alice <= bob)
// 	{
// 		cout << p1 + 1 << " " << BarsOfChoclate - p2 - 1;
// 	}
// 	else
// 	{
// 		cout << p2 << " " << BarsOfChoclate - p2;
// 	}
// }
int main()
{
	file();
	fast();
	solve();
	return 0;
}