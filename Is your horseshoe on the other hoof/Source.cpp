#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	vector<ll> v(4);
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> v[i];
		for (size_t j = 0; j < i; j++)
		{
			if (v[i] == v[j])
			{
				v[j] = -1;
				count++;
			}
		}
	}
	cout << count;

	return 0;
}