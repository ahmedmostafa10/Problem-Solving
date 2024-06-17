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
//void solve() {
//	int n, mx;
//	cin >> n >> mx;
//	vi v(n);
//	int p1 = 0, p2 = 0, sum = 0, books = 0;
//	for (int i = 0; i < n; i++)
//		cin >> v[i];
//	while (p1 < n) {
//		if (p2 < n && sum < mx)
//		{
//			sum += v[p2];
//			p2++;
//		}
//		else
//		{
//			sum -= v[p1];
//			p1++;
//		}
//		if (sum <= mx)
//		{
//			books = max(books, p2 - p1);
//		}
//	}
//	cout << books;
//}
void solve()
{
	int n, t; cin >> n >> t;
	vi v(n+1);
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
		v[i] += v[i - 1];
	}
	int it = 0;
	int res = 0;
	while (++it<=n)
	{
		int l = 1, r = n, mid,ans=-1;
		while (l<=r)
		{
			mid = l + (r - l) / 2;
			if (v[mid]-v[it-1]<=t)
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
int main() {
	file();
	fast();
	solve();
	return 0;
}