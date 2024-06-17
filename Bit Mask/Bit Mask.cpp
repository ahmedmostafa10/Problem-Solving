#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
#include <map>
#include<stack>
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
void getbinary(ll n)
{
	vector<int>v;
	while (n)
	{
		v.push_back(n % 2);
		n /= 2;
	}
	auto it = v.rbegin();
	for (it; it != v.rend(); it++)
	{
		cout << *it;
	}
}
bool iseven(ll n)
{
	return (n ^ 1);
}
bool get_bit(ll n, ll i)
{
	return(n & (1ll << i));
}
void set_bit_1(ll& n, ll i)
{
	n = n | (1ll << i);
}
void set_bit_0(ll& n, ll i)
{
	n = n & (~(1ll << i));
}
void flip_bit(ll& n, ll i)
{
	n = n ^ (1ll << i);
}
int count_ones(int n)
{
	int cnt = 0;
	while (n)
	{
		n = n & (n - 1);
		cnt++;
	}
	return cnt;

}
bool ispoweroftwo(ll n)
{
	return ((n & (n - 1)) == 0ll);
}

void sollve() {
	ll l, r; cin >> l >> r;
	ll n = (1ll << 61) - 1;
	int tmp = 60;
	int cnt = 0;
	while (n)
	{
		for (int i = 0; i < tmp; i++)
		{
			ll msk = n;
			set_bit_0(msk, i);
			if (msk>=l&&msk<=r)
			{
				cnt++;
			}
		}
		n = n >> 1;
		tmp--;
	}
	cout << cnt;
}
void solve() {
	int n; cin >> n;
	cout<<ispoweroftwo(n);
}
int main() {
	file();
	fast();
	solve();
	system("pause");
	return 0;
}