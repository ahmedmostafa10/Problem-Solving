#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <algorithm>
#include<vector>
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
const int N = 5005;
vector<int>v(N);
int n;
int dp[N][4];
bool vis[N][4];
int calc(int i, int j)
{
	if (i >= n)
	{
		return 0;
	}
	if (vis[i][j])
	{
		return dp[i][j];
	}
	vis[i][j] = true;
	int ch1 = 0;
	int ch2 = 0;
	/* 
	   j==3 state of rest 
	   j==2 state of harvest
	   j==1 state of plant
	   j==0 state of wait*/
	if (j == 0)
	{
		ch1 = calc(i + 1, 0);
		ch2 =ch2- v[i] + calc(i + 1, 1);
	}
	else if (j == 1)
	{

		ch1 = calc(i + 1, 1);
		ch2 +=v[i]+ calc(i + 1, 2);

	}
	else if(j==2)
	{
		ch1 = calc(i + 1, 3);
	}
	else
	{
		ch1= calc(i + 1, 0);
		ch2=ch2-v[i]+ calc(i + 1, 1);
	}
	return dp[i][j] = max(ch1,ch2);
}
void solve()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int res = calc(0, 0);
	cout << res;

}
int main() {
	file();
	fast();
	solve();
	return 0;
}