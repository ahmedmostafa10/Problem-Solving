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
//void solve() {
//	int n; cin >> n;
//	vector<int>pre(n + 1);
//	for (int i = 1; i <=n; i++)
//	{
//		cin >> pre[i];
//		pre[i] += pre[i - 1];
//	}
//	int q; cin >> q;
//	vector<ll>v(q + 1);
//	priority_queue<int, vector<int>, greater<int>>pq;
//	for (int i = 1; i <= q; i++)
//	{
//		cin >> v[i];
//		pq.push(v[i]);
//	}
//	int it = 1;
//	map<int, int>m;
//	while (pq.size())
//	{
//		int x = pq.top();
//		pq.pop();
//		bool found = false;
//		for (it; it <= n; it++)
//		{
//			if (pre[it] >= x)
//			{
//				m[x] = it;
//				found = true;
//				break;
//			}
//
//		}
//		if (!found)
//		{
//			m[x] = -1;
//			for (int i = 0; i < pq.size(); i++)
//			{
//				x = pq.top();
//				pq.pop();
//				m[x] = -1;
//			}
//		}
//
//	}
//	for (int i = 1; i <= q; i++)
//	{
//		cout << m[v[i]] << '\n';
//	}
//}
void solve() {
	ll n; cin >> n;
	vector<ll>pre(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> pre[i];
		pre[i] += pre[i - 1];
	}
	ll q; cin >> q;
	while (q--)
	{
		ll x; cin >> x;
		ll l = 1, r = n, mid;
		ll ans = 0;
		while (l <= r)
		{
			mid = (l + r) / 2;
			if (pre[mid] >= x)
			{
				r = mid - 1;
				ans = mid;
			}
			else
			{
				l = mid + 1;
			}

		}
		cout << ans << " ";
	}
}
int main() {
	file();
	fast();
	solve();
	return 0;
}