#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin >> s;
	int count = 0;
	int n = abs(abs('a' - s[0]));
	if (n < abs(n - 26))
	{
		count +=n;
	}
	else
	{
		count += abs(n - 26);
	}
	for (int i = 0; i < s.size() - 1; i++)
	{
		int x = abs(s[i] - s[i + 1]);
		if (x < abs(x - 26))
		{
			count +=x ;
		}
		else
		{
			count += abs(x - 26);
		}
	}

	cout << count;

	return 0;
}