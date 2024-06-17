
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
bool cmp(pair<int, int>x, pair<int, int>y)
{
	return x.first > y.first;
}
void solve()
{
	int TC; cin >> TC;
	while (TC--)
	{
		int n; cin >> n;
		vector<pair<int, int>>a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i].first;
			a[i].second = i;
		}
		vector<pair<int, int>>b(n);
		for (int i = 0; i < n; i++)
		{
			cin >> b[i].first;
			b[i].second = i;
		}
		vector<pair<int, int>>c(n);
		for (int i = 0; i < n; i++)
		{
			cin >> c[i].first;
			c[i].second = i;
		}
		sort(a.begin(), a.end(), cmp);
		sort(b.begin(), b.end(), cmp);
		sort(c.begin(), c.end(), cmp);
		int mx = 0;
		if (n < 4)
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					for (int k = 0; k < 3; k++)
					{
						int x = a[i].first + b[j].first + c[k].first;
						if (x > mx && a[i].second != b[j].second && b[j].second != c[k].second && a[i].second != c[k].second)
						{
							mx = x;
						}
					}
				}
			}
		}
		else
		{
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					for (int k = 0; k < 4; k++)
					{
						int x = a[i].first + b[j].first + c[k].first;
						if (x > mx && a[i].second != b[j].second && b[j].second != c[k].second && a[i].second != c[k].second)
						{
							mx = x;
						}
					}
				}
			}
		}
		cout << mx << "\n";
	}
}
int main() {
	file();
	fast();
	solve();
	return 0;
}