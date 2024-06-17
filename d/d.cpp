
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
	#include <set>
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
	int gcd(int a, int b) {
		if (a == 0 || b == 0)
			return 0;
		else if (a == 1 || b == 1)
			return 1;
		else if (a == b)
			return a;
		else if (a > b)
			return gcd(a - b, b);
		else return gcd(a, b - a);
	}
	bool checkdecreasing(vector<int>& v, int loc, vector<int>& z)
	{
		vector<int>g(v.size() - 2);
		for (int i = 0; i < g.size(); i++)
		{
			if (i == loc - 1)
			{
				if (i+2>=v.size())
				{
					continue;
				}
				g[i] = gcd(v[i], v[i + 2]);
			}
			else if (i == loc)
			{
				if (i + 2 >= v.size())
				{
					continue;
				}
				g[i] = gcd(v[i+1], v[i + 2]);

			}
			else
			{
				g[i] = z[i];
			}
		}
		int decreasing = 0;
		for (int i = 0; i < g.size() - 1; i++)
		{
			if (g[i + 1] < g[i])
			{
				decreasing++;
			}
		}
		if (decreasing != 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	void solve()
	{
		int TC; cin >> TC;
		while (TC--)
		{
			int size; cin >> size;
			vector<int>v(size);
			for (int i = 0; i < size; i++)
			{
				cin >> v[i];
			}
			vector<int>g(v.size() - 1);
			for (int i = 0; i < g.size(); i++)
			{
				g[i] = gcd(v[i], v[i + 1]);
			}
			int decreasing = 0;
			int loc = 0;
			for (int i = 0; i < g.size() - 1; i++)
			{
				if (g[i + 1] < g[i])
				{
					decreasing++;
					loc = i;
				}
			}
			if (decreasing == 0)
			{
				cout << "YES\n";
			}
			else
			{
				if (loc == 0 || loc == g.size() - 2 && decreasing == 1)
				{
					cout << "YES\n";
				}
				else
				{
					if (checkdecreasing(v, loc,g) || checkdecreasing(v, loc + 1,g) || checkdecreasing(v, loc + 2,g))
					{
						cout << "YES\n";
					}
					else
					{
						cout << "NO\n";
					}

				}
			}
		}

	}
	int main() {
		file();
		fast();
		solve();
		return 0;
	}