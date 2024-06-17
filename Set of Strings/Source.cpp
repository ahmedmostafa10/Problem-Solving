#include <iostream>
#include <string>
#include <cstring>
#include <set>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	ll size;
	cin >> size;
	string s;
	cin >> s;
	set<char>st;
	if (size==1)
	{
		cout << "YES" << endl<<s;
		return 0;
	}
	for (int i = 0; i < s.size(); i++)
	{
		st.insert(s[i]);
	}
	
	if (st.size()<size)
	{
		cout << "NO";
	}
	else
	{
		vector<char>v;
		cout << "YES" << endl;
		int count = 1;
		for (int i = 0; i < s.size(); i++)
		{
			if (i==0)
			{
				cout << s[i];
				v.push_back(s[i]);
			}
			else {
				bool found = false;
				for (int j = 0; j < v.size(); j++)
				{
					if (s[i] == v[j])
					{
						found = true;
						cout << s[i];
						break;
					}
				}
				if (!found)
				{
					cout << endl << s[i];
					v.push_back(s[i]);
					count++;
					
				}
				if (count == size)
				{
					i++;
					for (; i < s.size(); i++)
					{
						cout << s[i];
					}
				}
			}
		}
	}

	return 0;
}