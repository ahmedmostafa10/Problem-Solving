
//=============//
//AHMED MOSTAFA//
//=============//
//Keep going..Sometimes you win, Sometimes you learn. >   < .
//                                                     \   U   /
//
/*
			  ||========||
			  || i ♥ u  ||
			  ||========||
			  Dark_Carnage
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
#include <set>
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
	//freopen("C:\\Users\\ahmedmostafa\\source\\repos\\generator\\generator\\out.txt", "r", stdin);
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
int n;
int m;
const int N = 2e3 + 5;
vector<int>v1(N);
vector<int>v2(N);
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
//WELCOMETOCODEFORCESROUNDTHREEHUNDREDANDSEVENTYTWO
int check(string &s,set<char>&st)
{
	int p1 = 0,p2=1;
	
	st.insert(s[0]);
	while (p2<s.size() && p1<s.size() && p2 - p1 + 1 <= 26)
	{
		if (st.count(s[p2])&&s[p2]!='?')
		{
			while (s[p1]!=s[p2])
			{
				st.erase(s[p1]);
				p1++;
			}
			p1++;
		}
		else
		{
			if (s[p2]!='?')
			{
				st.insert(s[p2]);
			}
		}
		p2++;


	}
	if (p2==n)
	{
		return -1;
	}
	else
	{
		return p1;
	}

}
void solve()
{
	string Word;
	cin >> Word;
	string temp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if (Word.size() < 26)
	{
		cout << -1;
		return ;
	}
	set<char>st;
	int x = check(Word,st);
	if (x==-1||x+26>Word.size())
	{
		cout << -1;
		return;
	}
	int p1 = 0;
	while (p1<x)
	{
		if (Word[p1] == '?')
		{
			Word[p1] = 'A';
		}
		p1++;
	}
	p1 = x + 26;
	int size = Word.size();
	while (p1<size)
	{
		if (Word[p1] == '?')
		{
			Word[p1] = 'A';
		}
		p1++;
	}
	p1 = x;
	while (p1<x+26)
	{
		if (Word[p1]=='?')
		{
			for (int i = 0; i < 26; i++)
			{
				if (st.count(temp[i])==0)
				{
					st.insert(temp[i]);
					Word[p1] = temp[i];
					break;
				}
			}
		}
		p1++;
	}
	cout << Word;
}
int main() {
	file();
	fast();
	solve();
	return 0;
}
