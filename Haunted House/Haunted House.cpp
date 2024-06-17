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
	//freopen("output.txt", "w", stdout);
	//freopen("errors.txt", "w", stderr);
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
ll max(ll x, ll y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}
void reverseString(string& s)
{
	int p1 = 0, p2 = s.size() - 1;
	while (p1 < p2)
	{
		char temp = s[p1];
		s[p1] = s[p2];
		s[p2] = temp;
		p1++;
		p2--;
	}
}
bool checkstring(string& s)
{
	int i = 0;
	while (i < s.size())
	{
		if (s[i]=='1')
		{
			return false;
		}
		i++;
	}
	return true;
}

void solve() {

	int TC; cin >> TC;
	while (TC--)
	{
		int n; cin >> n;
		string num; cin >> num;
		bool x = checkstring(num);
		reverseString(num);
		int p1 = 1;
		int p2 = 0;
		int p3 = 0;
		ll swaps = 0;
		//5
		//10101
		while (p1 <= n)
		{
			if (x)
			{
				cout << 0 << " ";
				if (p1 == n)
				{
					cout << endl;
				}
				p1++;
				continue;
			}
			else if (p1 == n)
			{
				cout << -1 << endl;
				break;
			}
			else
			{
				while (p2 < n && p3 < n && p2 < p1)
				{

					if (num[p2] == '0')
					{
						p2++;
						p3++;
					}
					else
					{
						p3++;
						while (p3 < n && p2 < n && p2 < p1)
						{
							if (num[p3] == '0')
							{
								swaps += (p3 - p2);
								num[p3] = '1';
								p2++;
							}
							else
							{
								p3++;

							}

						}
					}
				}

			}
			if (p3 == n && p2 != p1)
			{
				cout << -1 << " ";
			}
			else
			{
				cout << swaps << " ";
			}
			p1++;
		}

	}

}

int main() {
	file();
	fast();
	solve();
	return 0;
}
