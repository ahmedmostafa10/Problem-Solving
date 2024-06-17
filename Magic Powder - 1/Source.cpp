
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
// اللهم صل على سيدنا محمد · "ونؤمن أنك خير الورى، ومسك الحياة، وخير الأنام، تفيض بحبك أرواحُنا، عليك الصلاة وعليك السلام"

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
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
struct third
{
	ll x;
	ll y;
	ll extra;
};
bool cmp(third x, third y)
{
	return x.x < y.x;
}
void solve()
{
	ll n, mg; cin >> n >> mg;
	vector<ll>v1(n + 1);
	vector<ll>v2(n + 1);
	for (int  i = 1; i <=n; i++)
	{
		cin >> v1[i];
	}
	for (int  i = 1; i <=n; i++)
	{
		cin >> v2[i];
	}
	vector<third>v(n + 1);
	ll mini=1e18;
	for (int i = 1; i <=n; i++)
	{
		v[i].x = v2[i] / v1[i];
		v[i].extra = v2[i] - v[i].x*v1[i];
		v[i].y = v1[i];
		mini = min(mini, v[i].x);
	}
	sort(v.begin()+1, v.end(), cmp);
	for (int i = 1; i <= n; i++)
	{
		v[i].y += v[i - 1].y;
		v[i].extra += v[i - 1].extra;
	}
	ll extra = 0;
	while (true)
	{
		ll l = 1, r = n, mid,ans = -1;
		while (l<=r)
		{
			mid = (l + r) / 2;
			if (v[mid].x>mini)
			{
				r = mid - 1;
				ans = mid;
			}
			else
			{
				l = mid + 1;
			}
		}
		if (ans != -1)
		{
			if ((((mg + v[ans - 1].extra - extra) / v[ans - 1].y)) >= v[ans].x - mini)
			{
				mg -= (v[ans].x - mini) * v[ans - 1].y - (v[ans - 1].extra - extra);
				mini = v[ans].x;
				extra += v[ans - 1].extra - extra;
			}
			else
			{
				mini += ((mg+ (v[ans - 1].extra - extra)) / v[ans - 1].y);
				break;
			}
		}
		else
		{
			mini += ((mg + (v[n].extra - extra)) / v[n].y);
			break;
		}
	}
	cout << mini;
}
int main() {
	file();
	fast();
	solve();
	return 0;
}