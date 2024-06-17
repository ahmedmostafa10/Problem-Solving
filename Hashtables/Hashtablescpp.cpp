#include<iostream>
#include <vector>
#include <unordered_map>
#include<algorithm>
using namespace std;
typedef long long ll;
int main() {
	int size, d, m; cin >> size >> d >> m;
	vector<int >v(size);
	unordered_map<int, int>mapp;
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
		mapp[v[i]]++;
	}
	ll res = 0;
	if (m == 2)
	{
		for (ll i = 0; i < size; i++)
		{
			res += mapp[v[i] + d];
			mapp[v[i]]--;
		}

	}
	else
	{
		unordered_map<int, int>tmp;
		for (int i = 0; i < size; i++)
		{
			res += mapp[v[i] - d] * tmp[v[i] + d];
			mapp[v[i]]--;
			tmp[v[i]]++;
		}
	}
	cout << res;
	return 0;
}