//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include <vector>
//#include <map>
//#include<queue>
//#include<algorithm>
//#include<cmath>
//#include<climits>
////#include"testlib.h"
//#define endl '\n'
//#define all(v) v.begin(),v.end()
//#define allr(s) s.rbegin(),s.rend()
//#define RT(s) return cout<<s,0
//#define sz(s)    (int)(s.size())
//#define out(n)  for(int i = 1; i <= n; i++) cout<<v[i]<<'\n';
////#define PI acos(-1)
//#define EPS 1e-8
//#define watch(x) cout << (#x)<<" = "<<x<<endl
//#define mk(x, y) make_pair(x, y)
//using namespace std;
//typedef long long ll;
//typedef long double ld;
//typedef unsigned long long ull;
//typedef pair<int, int> ii;
//typedef vector<int> vi;
//typedef vector<ii> vii;
//int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
//void file() {
//#ifndef ONLINE_JUDGE
//	freopen("in.txt", "r", stdin);
//	//freopen("C:\\Users\\karemo\\source\\repos\\generator\\generator\\out.txt", "r", stdin);
//	//freopen("out.txt", "w", stdout);
//#else
//	//freopen("gcd.in", "r", stdin);
//	//freopen("out.txt", "w", stdout);
//#endif
//}
//
//void fast() {
//	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
//}
//template<class val>
//istream& operator>>(istream& is, vector<val>& vec) {
//	for (int i = 0; i < vec.size(); i++)
//		is >> vec[i];
//	return is;
//}
//template<class val>
//ostream& operator<<(ostream& os, vector<val>& vec) {
//	for (int i = 0; i < sz(vec); i++) {
//		os << vec[i];
//		if (i + 1 < sz(vec))
//			os << ' ';
//	}
//	return os;
//}
//template<class f, class s>
//istream& operator>>(istream& is, pair<f, s>& p) {
//	is >> p.first >> p.second;
//	return is;
//}
//template<class f, class s>
//ostream& operator<<(ostream& os, pair<f, s>& p) {
//	os << p.first << ' ' << p.second;
//	return os;
//}
//ll max(ll x, ll y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else {
//		return y;
//	}
//}
//void maxSubArraySum(vector<ll>a, int size)
//{
//	ll max_so_far = INT_MIN, max_ending_here = 0,
//		start = 0, end = 0, s = 0;
//
//	for (int i = 0; i < size; i++) {
//		max_ending_here += a[i];
//
//		if (max_so_far < max_ending_here) {
//			max_so_far = max_ending_here;
//			start = s;
//			end = i;
//		}
//
//		if (max_ending_here < 0) {
//			max_ending_here = 0;
//			s = i + 1;
//		}
//	}
//	cout << max_so_far;
//}
//void solve() {
//	
//	int n;
//	cin >> n;
//	vector<ll>v(n);
//	for (auto &x:v)
//	{
//		cin >> x;
//	}
//	maxSubArraySum(v, n);
//		
//}
//int main() {
//	file();
//	fast();
//	solve();
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
#include <map>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
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
ll	max(ll ans, ll x, ll y)
{
	if (ans >= x && ans >= y)
	{
		return ans;
	}
	else if (x >= ans && x >= y)
	{
		return x;
	}
	else if (y >= ans && y >= x)
	{
		return y;
	}
}
void solve() {

	int n;
	cin >> n;
	vector<ll>v(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
		v[i] += v[i - 1];
	}
	ll mini = INT_MAX, ans = INT_MIN;
	for (int r = 1; r <= n; r++)
	{
		ans = max(ans, v[r] - mini, v[r]);
		mini = min(mini, v[r]);
	}
	cout << ans;
}
int main() {
	file();
	fast();
	solve();
	return 0;
}

