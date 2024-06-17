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
	vector<char>v;
	for (int i = 0; i < s.size(); i++)
	{
		char x = tolower(s[i]);
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y')
		{
			continue;
		}
		else
		{
			v.push_back(x);
		}
	}

	 for(auto x:v)
	{
		 cout << "." << x;
	}

	return 0;
}