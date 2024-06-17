#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <algorithm>
#include<vector>
#include<deque>
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
const int N = 305;
ll dp[N][N];
bool vis[N][N];
deque<int>v;
ll n;
ll calc(ll l, ll r)
{
	if (l > r)
	{
		return 0;
	}
	if (vis[l][r])
	{
		return dp[l][r];
	}
	vis[l][r] = true;
	ll count = 0;
	ll res = 0;
	for (int i = l; i <= r; i++)
	{
		count = (v[l - 1] * v[i] * v[r + 1]);
		count+= calc(l, i - 1) + calc(i + 1, r);
		res =max(count, res);
	}
	return dp[l][r]=res;
}

void solve()
{
	cin >> n;
	ll temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	v.push_back(1);
	v.push_front(1);
	ll res = calc(1, n);
	cout << res;
}
int main() {
	//file();
	fast();
	solve();
	return 0;
}