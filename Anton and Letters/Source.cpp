#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	vector<int> v(26);
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (isalpha(s[i]))
		{
			if (v[s[i] - 'a'] != 1)
			{
				v[s[i] - 'a'] = 1;
				count++;
			}
		}
	}

	cout << count;

	return 0;
}