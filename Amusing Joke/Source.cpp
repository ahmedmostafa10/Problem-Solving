#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	string s1,s2,letters;
	cin >> s1 >> s2 >> letters;
	s1 += s2;
	int num = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		for (int j = 0; j < letters.size(); j++)
		{
			if (s1[i] == letters[j])
			{
				num++;
				letters.erase(letters.begin() + j);
				break;
			}
		}
	}
	if (num != s1.size() || letters.size() != 0)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}

	return 0;
}