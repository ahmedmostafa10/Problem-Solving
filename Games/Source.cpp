#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;
struct Pair
{
	int first;
	int second;
};
int main()
{
	int size;
	cin >> size;
	int count = 0;
	
	vector<Pair>v(size);
	for (int i = 0; i < size; i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (v[i].first == v[j].second)
			{
				count++;
			}
		}
	}

	cout << count;

	return 0;
}
