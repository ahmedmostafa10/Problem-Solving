#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
#include <map>
#include<string>
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
//int kadane(vector<int>arr, int* start, int* finish, int n)
//{
//	int sum = 0, maxSum = INT_MIN, i;
//	*finish = -1;
//	int local_start = 0;
//
//	for (i = 0; i < n; ++i) {
//		sum += arr[i];
//		if (sum < 0) {
//			sum = 0;
//			local_start = i + 1;
//		}
//		else if (sum > maxSum) {
//			maxSum = sum;
//			*start = local_start;
//			*finish = i;
//		}
//	}
//	if (*finish != -1)
//		return maxSum;
//	maxSum = arr[0];
//	*start = *finish = 0;
//	for (i = 1; i < n; i++) {
//		if (arr[i] > maxSum) {
//			maxSum = arr[i];
//			*start = *finish = i;
//		}
//	}
//	return maxSum;
//}
//
//void solve()
//{
//	int n; cin >> n;
//	vector<vector<int>>v((n),vector<int>(n));
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin>>v[i][j];
//		}
//
//	}
//	int maxSum = INT_MIN, finalLeft, finalRight, finalTop,finalBottom;
//	int left, right, i;
//	int sum, start, finish;
//	for (left = 0; left < n; ++left) {
//		vector<int>temp(n);
//		for (right = left; right < n; ++right) {
//			/*if (right - left == n - 1)
//				break;*/
//			for (i = 0; i < n; ++i)
//				temp[i] += v[i][right];
//			sum = kadane(temp, &start, &finish, n);
//			if (sum > maxSum) {
//				maxSum = sum;
//				finalLeft = left;
//				finalRight = right;
//				finalTop = start;
//				finalBottom = finish;
//			}
//		}
//	}
//
//	cout << maxSum;
//}
void solve()
{
	int a;
	while (cin >> a)
	{
		int n = a;
		vector<vector<int>>v((n + 1), vector<int>(n + 1));
		int left, right, top, bottom;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				cin >> v[i][j];
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				v[i][j] += v[i][j - 1];
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				v[j][i] += v[j - 1][i];
		int ans = INT_MIN;
		for (left = 1; left <= n; left++)
			for (right = left; right <= n; right++)
				for (top = 1; top <= n; top++)
					for (bottom = top; bottom <= n; bottom++)
					{
						ll x = v[bottom][right] - v[top - 1][right] - v[bottom][left - 1] + v[top - 1][left - 1];
						ans = max(ans, x);
					}
		cout << ans<<"\n";
	}
}

int main() {
	file();
	fast();
	solve();
	return 0;
}

