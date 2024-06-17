
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
			(•?•) || (•?•)
			/ ? ?   /> ?<\
				 ????
*/
//// وَقُلْ رَبِّ زِدْنِي عِلْمًا
// سبحان الله وبحمده سبحان الله العظيم
// اللهم صل على سيدنا محمد · "ونؤمن أنك خير الورى، ومسك الحياة، وخير الأنام، تفيض بحبك أرواحُنا، عليك الصلاة وعليك السلام"
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>
#include<unordered_map>
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
ll max(int x, int y, int z)
{
	if (x > y)
	{
		if (x > z)
		{
			return x;
		}
		else
			return z;
	}
	else {
		if (y > z)
		{
			return y;
		}
		else
		{
			return z;

		}
	}
}
const int N = 1005;
ll n;
ll maxweight;
vector<pair<ll, ll>>v(55);
ll calc(ll i, ll r, vector<vector<bool>>&vis, vector<vector<int>>&dp)
{
	if (i == n)
	{
		return 0;
	}
	if (vis[i][r])
	{
		return dp[i][r];
	}
	vis[i][r] = true;
	ll ch1 = calc(i+1, r,vis,dp);
	ll ch2 = 0;
	if (r >= v[i].first)
	{
		ch2 = v[i].second + calc(i + 1, r - v[i].first,vis,dp);
	}
	return dp[i][r]=max(ch1, ch2);
}
void solve()
{
	int TC; cin >> TC;
	while (TC--)
	{
		cin >> maxweight >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i].first >> v[i].second;
		}
		vector<vector<int>>dp(n+1, vector<int>(maxweight+1, 0));
		vector<vector<bool>>vis(n+1, vector<bool>(maxweight+1, 0));

		int res = calc(0, maxweight,vis,dp);
		cout << "Hey stupid robber, you can get " << res << "." << "\n";
	}
}
int main() {
	file();
	fast();
	solve();
	return 0;
}