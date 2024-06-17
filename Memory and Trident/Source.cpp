#include <iostream>
#include <string>
#define ll long long
using namespace std;
int main()
{
	string s;
	cin >> s;
	if (s.size() % 2 != 0)
	{
		cout << -1;
		return 0;
	}
	int U = 0;
	int D = 0;
	int R = 0;
	int L = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i]=='U')
		{
			U += 1;
		}
		else if(s[i] == 'D')
		{
			D -= 1;
		}
		else if (s[i] == 'R')
		{
			R += 1;
		}
		else if (s[i] == 'L')
		{
			L -= 1;
		}

	}
	int UD = abs(U + D);
	int RL = abs(R + L);
	int UDRL;
	int count = 0;
	if (UD > RL)
	{
		count += RL;
		UDRL = UD - RL;

	}
	else
	{
		count += UD;
		UDRL = RL-UD;
	}
	count += UDRL / 2;
	cout << count;
	return 0;
}