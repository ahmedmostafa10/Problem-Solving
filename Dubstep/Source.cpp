#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin >> s;
	if (s.size() == 1)
	{
		cout << s[0];
		return 0;
	}
	vector<string>v;
	string temp;
	int i = 0;
	while ( i < s.size())
	{
		if (i<s.size() - 2)
		{
			if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
			{

				if (temp.size() != 0)
				{
					v.push_back(temp);
					temp = "";
				}
				i += 3;
			}
			else
			{
				temp += s[i];
				i++;
			}
		}
		else
		{
			temp += s[i];
			i++;
			if (i == s.size())
			{
				v.push_back(temp);
			}
		}

	}
	for(auto x:v)
	{
		cout << x<<" ";
	}
	return 0;
}