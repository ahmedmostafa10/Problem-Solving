#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	int size=s1.size();
	int x = 0;
	int y=0;
	for (int i = 0; i < size; i++)
	{
		x = tolower(s1[i]);
		y = tolower(s2[i]);

		if (x < y)
		{
			cout << -1;
			return 0;
		}
		if(x>y)
		{
			cout << 1;
			return 0;
		}
	}
		cout << "0";
	return 0;
}