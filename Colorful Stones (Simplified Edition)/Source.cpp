#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	string t;
	int index = 0;
	cin >> s >> t;
	for (int i = 0; i < t.size(); i++)
	{
		if (t[i] == s[index])
		{
			index++;
		}
	}

	cout << index+1;

	return 0;
}