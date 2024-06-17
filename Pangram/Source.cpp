#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	int size;
	cin >> size;
	string s;
	cin >> s;
	if (size < 26)
	{
		cout << "NO";
		return 0;
	}
	vector<int>v(26);
	for (int i = 0; i < size; i++)
	{
		char temp = tolower(s[i]);
		int x = temp - 'a';
		v[x] = 1;
	}
	for (auto x:v )
	{
		if (x == 0)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";

	return 0;
}