#include <iostream>
#include <vector>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
	int n,m;
	cin >> n>>m;
	vector<pair<string,string>> v1(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> v1[i].first>> v1[i].second;
		v1[i].second.push_back(';');
	}
	vector<pair<string, string>> v2(m);
	for (int i = 0; i < m; i++)
	{
		cin >> v2[i].first >> v2[i].second;
	}
	for (int i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (v2[i].second == v1[j].second)
			{
				cout << v2[i].first << " " << v2[i].second <<" " << "#" << v1[j].first << endl;
				break;
			}

		}
	}

	return 0;
}