#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
#include <map>
#include<queue>
#include <iomanip>
#include<algorithm>
#include<cmath>
//#include"testlib.h"
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
using namespace std;
typedef unsigned long long ll;
typedef long double ld;
//typedef unsigned long long ull;
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
bool valid(ll n, ll c, ll mid)
{
	ll sum = 0;
	for (ll i = 0; mid / pow(c, i); i++)
	{
		sum += mid / pow(c, i);
		if (sum >= n)
		{
			return true;
		}
	}
	return false;
}
void solve() {
	ll TC; cin >> TC;
	while (TC--)
	{
		ld n; cin >> n;
		if (n == 0)
		{
			cout << "Y" << " ";
			cout << fixed << setprecision(9) << n <<" " << n << "\n";
			continue;
		}
		ld l = 0, r = n, mid, ans = -1;
		ld error = 0.0000001;
		while ((r - l) > error)
		{
			mid = l + (r - l) / 2;
			ld res = (n / mid) + mid;
			if (res < n + error && (n / mid) + mid > n - error)
			{
				ans = mid;
				break;
			}
			else if ((n / mid) + mid > n)
			{
				r = mid;
			}
			else
				l = mid;
		}
		if (ans != -1)
		{
			cout << "Y" << " " << fixed<<setprecision(9)<<ans << " " << n / ans << "\n";

		}
		else
			cout << "N" << "\n";
	}
}
int main() {
	file();
	fast();
	solve();
	return 0;
}