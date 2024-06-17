
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
const int N = 5e5 + 5;

vector<int>adj[N];
vector<bool>vis(N);
bool ans = true;
void dfs(int node, int parent)
{
	vis[node] = true;
	for (auto child : adj[node])
	{
		if (child == parent)
		{
			continue;
		}
		else if (vis[child])
		{
			ans = false;
		}
		else
		{
			dfs(child, node);
		}
	}

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
void solve()
{
	int n, e; cin >> n >> e;
	bool bus = true;
	bool star = true;
	bool ring = true;
	adj->resize(n + 5);
	vis.resize(n + 5);
	int nodemax = 0;
	int u, v; cin >> u >> v;
	adj[u].push_back(v);
	adj[v].push_back(u);
	int first = u;
	bool f = true;
	int second = v;
	bool s = true;
	for (int i = 1; i < e; i++)
	{
		u, v; cin >> u >> v;
		if ((u!=first&& v != second)&&(v!=first&&u!=second))
		{
			f = false;
		}
		adj[u].push_back(v);
		adj[v].push_back(u);
		nodemax = max( max(adj[u].size(),adj[v].size()),nodemax);
	}
	star = f;
	if (nodemax!=2)
	{
		ring = false;
		bus = false;
	}
	if (n!=e)
	{
		ring = false;
	}
	else
	{
		bus = false;
		star = false;
	}
	if (bus&&!star&&!ring)
	{
		cout << "bus topology";
	}
	else if (!bus && star && !ring)
	{
		cout << "star topology";
	}
	else if(!bus && !star && ring)
	{
		cout << "ring topology";
	}
	else
	{
		cout << "unknown topology";
	}


}
int main() {
	file();
	fast();
	solve();
	return 0;
}