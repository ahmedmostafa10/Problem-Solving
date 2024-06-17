#include<iostream>
#include<string>
#include <cstring>
#include<vector>
#include<set>
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define el '\n'
#define ll long long
#define ld long double
#define test int test;cin>>test;while(test--)
using namespace std;
void solve()
{
	int width, height;
	cin >> height>> width;
	vector<string>v(height);
	for (int i = 0; i < height; i++)
	{
		cin >> v[i];
	}
	ll min=100000000000000000,max=0;
	set<int> see;
	for (int i = 0; i < height; i++)
	{
		int s, g;
		for (int j = 0; j < width; j++)
		{
			if (v[i][j] == 'S')
			{
				s = j;
				
			}
			if (v[i][j]=='G')
			{
				g = j;
			}
		}
		int x = s - g;
		if (x<0)
		{
			cout << -1;
			return;
		}
		else
		{
			see.insert(x);
		}
	}
	cout << see.size();
}
int main()
{
	fast
		solve();
	return 0;
}