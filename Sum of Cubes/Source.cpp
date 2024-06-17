
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
void fact(ll n, map<ll, ll>& mp)
{
	while (n % 2 == 0)
	{
		mp[2]++;
		n /= 2;
	}
	for (ll i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			mp[i]++;
			n /= i;
		}
	}
	if (n != 1)
	{
		mp[n]++;
	}
}
int sum;
ll mx(map<ll, ll>& mp)
{
	sum = 0;
	int x = 0;
	for (auto y : mp)
	{
		sum += y.second;
		if (y.second > x)
		{
			x = y.second;
		}
	}
	return x;
}
void solve()
{
	ll TC; cin >> TC;
	while (TC--)
	{
		ll x; cin >> x;
		bool found = false;
		for (ll i = 1; i <= 1e4; i++)
		{
			ll tmp = x - (ll)(i * i * i);
			if (tmp<0)
			{
				break;
			}
			ll l = 1, r = min(x,1e4), mid;
			while (l <= r)
			{
				mid = (l + r) / 2;
				ll y = mid * mid * mid;
				if (y == tmp)
				{
					found = true;
					break;
				}
				else if (y < tmp)
				{
					l = mid + 1;
				}
				else if (y > tmp)
				{
					r = mid - 1;
				}
			}
			if (found)
				break;
		}
		if (found)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}

}
int main() {
	file();
	fast();
	solve();
	return 0;
}