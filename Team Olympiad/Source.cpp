#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;
using namespace std;
int main()
{
	ll size;
	cin >> size;
	vector<vector<ll>> v(3);
	int count = 0;
	int tot1 = 0;
	int tot2 = 0;
	int tot3 = 0;
	for (int i = 0; i < size; i++)
	{
		int x;
		cin >> x;
		if (x == 1)
		{
			v[0].push_back(i);
			tot1++;
		}
		else if (x == 2)
		{
			v[1].push_back(i);
			tot2++;
		}
		else if (x == 3)
		{
			v[2].push_back(i);
			tot3++;
		}
	}
	count = min({v[0].size(), v[1].size(), v[2].size()});
	cout << count<<endl;
	while (count)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << v[i][count-1]+1<<" ";
		}
		cout << endl;
		count--;
	}
	return 0;
}