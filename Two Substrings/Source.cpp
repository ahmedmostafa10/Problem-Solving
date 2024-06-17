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
	int i = s.size() - 1;
	bool AB = false;
	bool BA = false;
	bool A = false;
	bool B = false;
	while (i > 0)
	{
		if (s[i] == 'A' && s[i -1] == 'B')
		{
			if (AB)
			{
				i--;
			}
			else
			{
				AB = true;
				i -= 2;
			}
		}
		else if (s[i] == 'B' && s[i - 1] == 'A')
		{
			if (BA)
			{
				i--;
			}
			else
			{
				BA = true;
				i -= 2;
			}
		}
		else
		{
			i--;
		}
	}
	if (AB && BA)
	{
		A = true;
	}
	BA = false;
	AB = false;
	i = 0;
	while (i <s.size()-1)
	{
		if (s[i] == 'A' && s[i + 1] == 'B')
		{
			if (AB)
			{
				i++;
			}
			else
			{
				AB = true;
				i += 2;
			}
		}
		else if (s[i] == 'B' && s[i + 1] == 'A')
		{
			if (BA)
			{
				i++;
			}
			else
			{
				BA = true;
				i += 2;
			}
		}
		else
		{
			i++;
		}
	}
	if (AB && BA)
	{
		B = true;
	}
	if (A || B)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}