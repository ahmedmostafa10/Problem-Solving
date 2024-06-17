
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
void primes(set<int>& st)
{
	vector<bool>Not_Prime(3001, false);
	Not_Prime[0] = Not_Prime[1] = true;
	for (int i = 2; i < 2001; i++)
	{
		if (!Not_Prime[i])
		{
			st.insert(i);
			for (int j = 2 * i; j < 3001; j += i)
				Not_Prime[j] = true;
		}
	}
}
void solve()
{
	int TC; cin >> TC;
	set<int>st;
	primes(st);
	int i = 1;
	while (TC--)
	{
		string s; cin >> s;
		map<char, int>mp;
		string tmp = "";
		for (int i = 0; i < s.size(); i++)
		{
			mp[s[i]]++;
		}
		for (auto x:mp)
		{
			if (st.count(x.second))
			{
				tmp.push_back(x.first);
			}
		}
		if (tmp.size())
		{
		cout << "Case " << i++ << ": " << tmp<<"\n";
		}
		else
		{
			cout << "Case " << i++ << ": " << "empty" << "\n";
		}

	}
}
int main() {
	file();
	fast();
	solve();
	return 0;
}