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
	vector<string> v(size);
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (v[i].size() > 10)
		{
			cout << v[i][0] << v[i].size() - 2 << v[i].back() << endl;
		}
		else
		{
			cout << v[i] << endl;
		}
	}

	return 0;
}