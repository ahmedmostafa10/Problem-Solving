﻿
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <iomanip>
#include <vector>
#include<string>
#include<cstring>
#include<deque>
#include <set>
#include <map>
#include<queue>
#include<algorithm>
#include<cmath>
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
ll min(ll x, ll y)
{
	if (x < y)
	{
		return x;
	}
	else {
		return y;
	}
}
void primes(vector<ll>& prime)
{
	vector<bool>Not_Prime(51, false);
	Not_Prime[0] = Not_Prime[1] = true;
	for (int i = 2; i < 51&&prime.size()<=15; i++)
	{
		if (!Not_Prime[i])
		{
			prime.push_back(i);
		}
		for (int j = 0; j < prime.size() && i * prime[j] < 51; j++)
		{
			Not_Prime[i * prime[j]] = true;
			if (i % prime[j] == 0) break;
		}
	}
}
void solve()
{
	vector<ll>v;
	primes(v);
	for (int i = 1; i < v.size(); i++)
	{
		v[i] *= v[i - 1];
	}
	int TC; cin >> TC;
	while (TC--)
	{
		ll n; cin >> n;
		int ans = upper_bound(v.begin(), v.end(), n) - v.begin();
		cout << ans << "\n";
	}
}
int main() {
	//file();
	fast();
	solve();
	return 0;
}