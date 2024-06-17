#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
#include<algorithm>
#include<unordered_map>
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
	int TC; cin >> TC;
	while (TC--)
	{
		int n; cin >> n;
		int fd=INT_MAX;
		vector<int>v(n);
		unordered_map<int, int>mp;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
			mp[v[i]]++;
			int tmp = mp[v[i]];
			if (tmp>1&&tmp<fd)
			{
				fd = tmp;
			}
		}
		sort(v.begin(), v.end());
		int count = 0;
		if (fd!=INT_MAX)
		{
			cout << fd << " ";
			for (int i = 0; i <n; i++)
			{
				if (v[i]==fd&&count!=2)
				{
					count++;
					continue;
				}
				else if(v[i]<fd)
				{
					continue;
				}
				else
				{
					if (v[i]==fd)
					{
						count++;
					}
					cout << v[i] << " ";
				}
			}
			count =2-count ;
			for (int i = 0; i < n; i++)
			{
				if (v[i]==fd&&count!=2)
				{
					count++;
					continue;
				}
				else if(v[i]>fd)
				{
					break;
				}
				else
				{
					cout << v[i] << " ";
				}
			}
			cout << fd << "\n";
		}
		else
		{
			int start = v[0];
			int end = v[1];
			cout << start << " ";
			for (int i = 2; i < n; i++)
			{
				cout << v[i]<<" ";
			}
			cout << end << "\n";
		}

	}
}
int main() {
	file();
	fast();
	solve();
	return 0;
}