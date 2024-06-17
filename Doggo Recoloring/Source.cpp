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
	if (size == 1)
	{
		cout << "YES";
		return 0;
	}
	vector<int>v1(26);
	for (int i = 0; i < size; i++)
	{
		char ch;
		cin >> ch;
		int num = ch - 'a';
		v1[num]++;
		if(v1[num]>=2)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}