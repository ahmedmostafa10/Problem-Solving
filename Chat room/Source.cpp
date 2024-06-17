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
	string hello = "hello";
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == hello[count])
		{
			count++;
		}
		if(count==5)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";

	return 0;
}