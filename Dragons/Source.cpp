#include <iostream>
#include <vector>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
	ll strength,size;
	cin >> strength>>size;
	vector<pair<int,int>> v(size);
	for (int i = 0; i < size; i++)
	{
		cin >> v[i].first >> v[i].second;
		
	}
	sort(v.begin(), v.end(), [](const auto& lhs, const auto& rhs) {
		return lhs.first < rhs.first; });
	for (int i = 0; i < size; i++)
	{
		if (strength > v[i].first)
		{
			strength += v[i].second;
		}
		else
		{
			cout << "NO";
			return 0;
		}

	}
	cout << "YES";

	return 0;
}