#include <iostream>
#include <vector>
#include <string>
#define ll long long
using namespace std;
int main()
{
	string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char dir;
	string in;
	cin >> dir >> in;
	if (dir == 'R')
	{
		for (size_t i = 0; i < in.size(); i++)
		{
			for (size_t j = 0; j < s.size(); j++)
			{
				if (in[i] == s[j])
				{
					in[i] = s[j - 1];
					break;
				}
			}
		}
	}
	else
	{
		for (size_t i = 0; i < in.size(); i++)
		{
			for (size_t j = 0; j < s.size(); j++)
			{
				if (in[i] == s[j])
				{
					in[i] = s[j + 1];
					break;
				}
			}
		}
	}
	cout << in;
	return 0;
}