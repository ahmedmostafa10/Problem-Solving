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
	int count = 0;
	int x = 0;
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
		if (v[i] == -1 && x == 0)
		{
			count++;
		}
		else if (v[i] == -1 && x > 0)
		{
			x--;
		}
		else if (v[i] >= 1)
		{
			x += v[i];
		}
	}
	
	cout << count;

	return 0;
}