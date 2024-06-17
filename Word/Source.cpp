#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
	string s1;
	cin >> s1;
	int lower = 0;
	int upper = 0;
	vector<char> v;
	for (int i = 0; i < s1.size(); i++)
	{
		if (islower(s1[i]))
		{
			lower++;
		}
		else
		{
			upper++;
		}
	}
	if (lower>=upper)
	{
		for (int i = 0; i < s1.size(); i++)
		{
			v.push_back(tolower(s1[i]));
		}
	}
	else
	{
		for (int i = 0; i < s1.size(); i++)
		{
			v.push_back(toupper(s1[i]));
		}
	}
	for (auto x : v)
	{
		cout << x;
	}
	return 0;
}