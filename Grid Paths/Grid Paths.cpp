
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
string s1, s2;
bool vis[N][N];
ll dp[N][N];
bool visted[N][N];
ll grid[N][N];
ll n;
ll calc(ll i, ll j)
{
	if (i == n - 1 && j == n - 1)
	{
		return 1;
	}
	if (vis[i][j])
	{
		return dp[i][j];
	}
	vis[i][j] = true;
	ll ch = 0;
	if (i < n-1 && !visted[i + 1][j] && grid[i + 1][j])
	{
		visted[i + 1][j] = 1;
		ch += calc(i + 1, j);
		ch %= (1000000000 + 7);
		visted[i + 1][j] = 0;
	}

	if (j < n-1 && !visted[i][j + 1] && grid[i][j + 1])
	{
		visted[i][j + 1] = 1;
		ch += calc(i, j + 1);
		ch %= (1000000000 + 7);
		visted[i][j + 1] = 0;

	}

	return dp[i][j]= ch;
}
void solve()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char x;
		for (int j = 0; j < n; j++)
		{
			cin >> x;
			if (x == '.')
			{
				grid[i][j] = 1;
			}
			else
			{
				grid[i][j] = 0;
			}
		}
	}
	if (!grid[0][0])
	{
		cout << 0;
		return;
	}
	ll res = calc(0, 0);
	cout << res;
}
int main() {
	file();
	fast();
	solve();
	return 0;
}