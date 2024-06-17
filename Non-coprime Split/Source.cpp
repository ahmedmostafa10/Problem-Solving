#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
#include <cmath>
#include<algorithm>
//#include"testlib.h"
#define endl '\n'
#define all(v) v.begin(),v.end()
#define allr(s) s.rbegin(),s.rend()
#define RT(s) return cout<<s,0
#define sz(s)    (int)(s.size())
//#define PI acos(-1)
#define EPS 1e-8
#define watch(x) cout << (#x)<<" = "<<x<<endl
#define mk(x, y) make_pair(x, y)
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
void solve() {
	int q; cin >> q;
	while (q-- > 0)
	{
		double l, r; cin >> l >> r;
		bool found = false;
		int num;
		int factor;
		double x;
		for (double i = l; i <= r; i++)
		{
			for (double j = 2; j <= sqrt(i); j++)
			{
				 x = i / j;
				if (x == static_cast<int> (x) && x > 1)
				{
					num = i;
					factor = j;
					found = true;
					break;
				}
			}
			if (found)
			{
				break;
			}
		}
		if (found)
		{
			int num1 = x / 2;
			int num2 = x - num1;
			cout << factor * num1 << ' '<<factor*num2<<'\n';
		}
		else
		{
			cout << -1 << '\n';
		}
	}

}
int main() {
	file();
	fast();
	solve();
	return 0;
}