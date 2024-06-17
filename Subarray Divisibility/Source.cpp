
//=============//
//AHMED MOSTAFA//
//=============//
//Keep going..Sometimes you win, Sometimes you learn. >   < .
//                                                     \   U   /
//
/*
			  ||========||
			  || i <3 u ||
			  ||========||
			(\__/) || (\__/)
			(•ㅅ•) || (•ㅅ•)
			/ 　 つ   /> ❤<\
				 君が好き
*/
//وَكَانَ فَضْلُ اللَّهِ عَلَيْكَ عَظِيمًا♡
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<fstream>
#include<cstdlib>
#include<cmath>
#include<ctime>
#include <algorithm>
#include<cstring>
#include <cctype>
#include<vector>
#include<array>
#include<deque>
#include<stack>
#include<queue>
#include<list>
#include<utility>
#include<set>
#include<iterator>
#include<map>
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
	ll n;
	cin >> n;
	vector<ll> a(n + 1);
	vector<ll>pre(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}
	for (int i = 0; i <= n; i++)
		pre[i] = a[i] % n;
	map<int, int>mp;
	mp[0]++;
	ll count = 0;
	int p = 1;
	while (p <= n)
	{
		count += (mp[pre[p]]);
		if (pre[p] > 0)
			count += (mp[pre[p] - n]);
		else if (pre[p] < 0)
			count += (mp[pre[p] + n]);
		mp[pre[p++]]++;
	}
	cout << count;

}
int main() {
	file();
	fast();
	solve();
	return 0;
}