#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	ll size;
	cin >> size;
	vector<int>v1(26);
	vector<int>v2(26);
	for ( int i = 0; i < size; i++)
	{
		char ch;
		cin >> ch;
		v1[ch - 'a']++;
	}
	for (int i = 0; i < size; i++)
	{
		char ch;
		cin >> ch;
		v2[ch - 'a']++;
	}
	int count = 0;
	for (int i = 0; i < 26; i++)
	{
		count += abs(v1[i] - v2[i]);
	}
	cout << count / 2;
	return 0;
}