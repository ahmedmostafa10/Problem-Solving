#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	ll size;
	cin >> size;
	vector<ll> v(size);
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
	}
	int x = 0;
	int y = 0;
	bool z = true;
	while (v.size())
	{
		if (v.back() > v.front())
		{
			if (z)
			{
				x += v.back();
				v.erase(v.end()-1);
				z = false;
			}
			else
			{
				y+= v.back();
				v.erase(v.end()-1);
				z = true;
			}
		}
		else
		{
			if (z)
			{
				x += v.front();
				v.erase(v.begin());
				z = false;
			}
			else
			{
				y += v.front();
				v.erase(v.begin());
				z = true;
			}
		}
	}


	cout << x <<" "<<y;

	return 0;
}