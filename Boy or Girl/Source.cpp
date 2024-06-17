#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
	string s1;
	cin >> s1;
	vector <char>v;
	v.push_back(s1[0]);
	for (int i = 1; i < s1.size(); i++)
	{
		bool found = false;
		for (int j = 0;  j< v.size(); j++)
		{
			if(v[j] == s1[i])
			found =true;
		}
		if (!found)
		{
			v.push_back(s1[i]);
		}
	}
	if (v.size() % 2 == 1)
	{
		cout << "IGNORE HIM!";
	}
	else
	{
		cout << "CHAT WITH HER!";
	}
	return 0;
}