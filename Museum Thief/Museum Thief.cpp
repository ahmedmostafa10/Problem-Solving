
//=============//
//AHMED MOSTAFA//
//=============//
//Keep going..Sometimes you win, Sometimes you learn. >   < .
//                                                     \   U   /
//
/*
			  ||========||
			  || i ♥ u ||
			  ||========||
*/
//// وَقُلْ رَبِّ زِدْنِي عِلْمًا
// سبحان الله وبحمده سبحان الله العظيم
// اللهم صل على سيدنا محمد · "ونؤمن أنك خير الورى، ومسك الحياة، وخير الأنام، تفيض بحبك أرواحُنا، عليك الصلاة وعليك السلام"
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include <iomanip>
#include <vector>
#include<deque>
#include <map>
#include<queue>
#include<algorithm>
#include<cmath>
#define endl '\n'
#define all(v) v.begin(),v.end()
#define allr(s) s.rbegin(),s.rend()
#define RT(s) return cout<<s,0
#define sz(s)    (int)(s.size())
#define in(n)  for(int i = 0; i < n; i++) cin>>v[i];
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
const int N = 1e6 + 5;
const int M = 2e5 + 5;
ll n;
vector<vector<int>>v(2, vector<int>(N + 1));
vector<vector<vector<int>>>dp(2, vector<vector<int>>(N + 1,vector<int>(2,-1)));
ll calc(ll i, ll j, vector<vector<bool>>& vis)
{
	if (j >= n)
	{
		return 0;
	}
	if (i < 0 || i>1)
	{
		return 0;
	}
	if (dp[i][j][0]!=-1)
	{
		return dp[i][j][0];
	}
	vis[i][j] = true;
	ll ch1 = 0;
	if (i == 0 && !vis[i + 1][j])
	{
		ch1 = calc(i + 1, j, vis);
	}
	ll ch2 = 0;
	if (i == 1 && !vis[i - 1][j])
	{
		ch2 = calc(i - 1, j, vis);
	}
	ll ch3 = 0;
	if (!vis[i][j + 1])
	{
		ch3 = calc(i, j + 1, vis);

	}
	ll ch4 = v[i][j];
	if (i == 0 && !vis[i + 1][j + 1])
	{
		vis[i][j + 1] = true;
		vis[i+1][j] = true;
		ch4 += calc(i + 1, j + 1, vis);
		vis[i][j + 1] = false;
		vis[i + 1][j] = false;
	}
	else if(i == 1 && !vis[i - 1][j + 1])
	{
		vis[i][j + 1] = true;
		vis[i - 1][j] = true;
		ch4 += calc(i - 1, j + 1, vis);
		vis[i][j + 1] = false;
		vis[i - 1][j] = false;
	}
	vis[i][j] = false;
	return dp[i][j]=max(max(ch1, ch2), max(ch3, ch4));

}

void solve()
{
	cin >> n;
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> v[i][j];
		}
	}
	vector<vector<bool>>vis(2, vector<bool>(N, false));
	ll res = calc(0, 0, vis);
	cout << res;
}
int main() {
	file();
	fast();
	solve();
	return 0;
}