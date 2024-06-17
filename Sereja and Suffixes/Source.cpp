#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <deque>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
	ll n,m;
	cin >> n>>m;
	vector<int> v(n);
	int count = 0;
	for (int i = n-1; i>=0; i--)
	{
		cin >> v[i];
	}
	reverse(v.begin(),v.end());
	int max= *max_element(v.begin(), v.end());
	deque<int>temp(max+1);
	vector<int>tempcounts(n);
	for (int i = n - 1; i >= 0; i--)
	{
		bool found = false;
		if (temp[v[i]] == 1)
		{
			found = true;
		}
		if (!found)
		{
			count++;
			temp[v[i]] = 1;
		}
		tempcounts[i] = count;
	}
	vector<int> v2(m);
	for (int i = 0; i < m; i++)
	{
		cin >> v2[i];
		cout << tempcounts[v2[i]-1] <<endl;
	}
	return 0;
}