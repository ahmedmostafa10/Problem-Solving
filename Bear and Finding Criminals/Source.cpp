#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	ll size;
	cin >> size;
	int x;
	cin >> x;
	x--;
	vector<ll> v(size);
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
	}
	int count = 0;
	if (v[x] == 1)
		count++;
	int i = 1;
	while ((i + x) < size || (x - i) >= 0)
	{
		if ((x - i) < 0)
		{
			if (v[x + i] == 1)
			{
				count++;
			}
		}
		else if ((i + x) >= size)
		{
			if (v[x - i] == 1)
			{
				count++;
			}
		}
		else if ((i + x) < size && (x - i) >= 0)
		{
			if (v[x + i] == 1 && v[x - i] == 1)
			{
				count += 2;
			}
		}
		i++;

	}

	cout << count;

	return 0;
}