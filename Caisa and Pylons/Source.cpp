#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
	int size;
	cin >> size;
	vector<int>v(size+1);
	int energy = 0;
	int cost = 0;
	v[0] = 0;
	for (int i = 1; i <= size; i++)
	{
		cin >> v[i];
	}
	
	for (int i = 1; i <= size; i++)
	{
		int temp = v[i] - v[i - 1];
		if (temp>0)
		{
			if (energy >= temp)
			{
				energy -= temp;
			}
			else
			{
				temp -= energy;
				energy = 0;
				cost += temp;
			}
		}
		else if(temp==0)
		{
			continue;
		}
		else if(temp<0)
		{
			energy += abs(temp);
		}

	}

	cout << cost;

	return 0;
}
