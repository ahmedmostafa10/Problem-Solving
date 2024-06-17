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
	vector <string>v(size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			char num;
			cin >> num;
			v[i] += to_string(num);
		}
		
	}
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		int count = 1;
		for (int j = 0; j < size; j++)
		{
			if (j==i)
			{
				continue;
			}
			else if (v[i]==v[j])
			{
				count++;
			}
		}
		if (count>max)
		{
			max = count;
		}
		
	}
	cout << max;
	return 0;
}