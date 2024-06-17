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
	}
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] - '0' == 1)
			count += v[0];
		else if (s[i] - '0' == 2)
			count += v[1];
		else if (s[i] - '0' == 3)
			count += v[2];
		else if (s[i] - '0' == 4)
			count += v[3];
	}
	cout << count;

	return 0;
}