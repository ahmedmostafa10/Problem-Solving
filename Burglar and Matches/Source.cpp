#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;
struct Pair
{
	int first;
	int second;
};
int main()
{
	int num;
	cin >> num;
	int size;
	cin >> size;
	int count = 0;
	vector<Pair>v(size);
	int max=0;
	int index;
	for (int i = 0; i < size; i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end(), [](const auto& left, const auto& right) {
		return left.second > right.second;
		});
	while (num != 0)
	{
		if (num >= v[0].first)
		{
			count += (v[0].first) * v[0].second;
			num -= v[0].first;
			v.erase(v.begin());
			if (v.size() == 0)
			{
				break;
			}

		}
		else
		{
			count += num * v[index].second;
			break;
		}

	}

	cout << count;

	return 0;
}
