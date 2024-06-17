#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
#include <map>
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
	int n, k; cin >> n >> k;
	map<int, int>mp;
	int p1=1, p2=1;
	vector<int>v(n+1);
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	int ans = 0;
	int l=1, r=1;
	while (p2<=n)
	{
		if (mp.size()<k)
		{
			mp[v[p2++]]++;
		}
		else if (mp.size()==k)
		{
			if (mp[v[p2]] == 0)
			{
				mp.erase(v[p2]);
				if (--mp[v[p1]] == 0)
					mp.erase(v[p1++]);
				else p1++;
			}
			else
			{
				mp[v[p2++]]++;
			}

		}
		else
		{
			if (--mp[v[p1]] == 0)
				mp.erase(v[p1++]);
			else p1++;
		}
		if (p2-p1+1>ans)
		{
			l = p1;
			r = p2-1;
			ans = max(ans, r -l  + 1);
		}
 	}
	cout << l<<" " << r;
}
int main() {
	file();
	fast();
	solve();
	return 0;
}

