
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
const int N = 205;
const int M = 2e5 + 5;
ll n;
vector<pair<int,int>>v(N);
vector<vector<int>>dp(N,vector<int>(N,-1));
vector<int>ans;
ll knapsack(ll i,ll w)
{
	if (i==n)
	{
		return 0;
	}
	if (dp[i][w]!=-1)
	{
		return dp[i][w];
	}
	ll ch1 = knapsack(i + 1, w );
	ll ch2 = 0;
	if (w-v[i].first>=0)
	{
		ch2 = v[i].second + knapsack(i + 1, w - v[i].first);
	}

	return dp[i][w] = max(ch1, ch2);
	
}
void buildpath(ll i, ll w)
{
	if (i == n)
	{
		return ;
	}
	ll ret = knapsack(i, w);
	ll ch1 = knapsack(i + 1, w);
	ll ch2 = 0;
	if (w - v[i].first >= 0)
	{
		ch2 = v[i].second +knapsack(i + 1, w - v[i].first);
	}
	if (ret==ch2)
	{
		ans.push_back(v[i].first);
		buildpath(i + 1, w - v[i].first);
	}
	else
	{
		buildpath(i + 1, w);
	}
}
void solve()
{
	int w;
	cin >> n>>w;
	for (ll i = 0; i < n; i++)
	{
		cin >> v[i].first>>v[i].second;
	}
	ll res = knapsack(0,w);
	buildpath(0, w);
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
}
int main() {
	file();
	fast();
	solve();
	return 0;
}