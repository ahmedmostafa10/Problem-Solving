#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
#include <set>
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
	ll n, k;
	cin >> n >> k;
	vector<ll> a(n+1);
	vector<ll> tmp(n+1);
	multiset<ll>st;
	for (ll i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if (k == 0 || n < k)
	{
		return;
	}
	if (k==1)
	{
		for (int i = 1; i <= n; i++)
			cout << 0 << " ";
		return;

	}
	else if (k==2)
	{
		for (int i = 2; i <= n; i++)
			cout << abs(a[i] - a[i - 1])<<" ";
		return;
	}
	
	for (int i = 1; i <= n; i++)
	{
		tmp[i] = a[i] + tmp[i - 1];
	}
	ll p1 = 1, p2 = k;
	for (int i = 1; i <= k; i++)
	{
		st.insert(a[i]);
	}
	while (p2 <= n)
	{
		int sum = tmp[p2] - *st.rbegin() - *st.begin()-tmp[p1-1];
		int num = sum / (k - 2);
		ll count = (sum - num * (k-2) + abs(*st.begin()-num) + abs(*st.rbegin()-num));
		cout << count << " ";
		p2++;
		if (p2<=n)
		{
			st.insert(a[p2]);
		}
		st.erase(st.find(a[p1]));
		p1++;
	}

}
signed main() {
	file();
	fast();
	solve();
	return 0;
}