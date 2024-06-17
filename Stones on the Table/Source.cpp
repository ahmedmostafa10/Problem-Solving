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
	vector<char> v(size);
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
	}
	
	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v[i] == v[i + 1])
		{
			count++;
		}

	}

	cout << count;

	return 0;
}