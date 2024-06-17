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
	vector<char>v(size);
	vector<int>v2(size);
	ll packs;
	cin >> packs;
	int DistressedKids = 0;
	for (int i = 0; i < size; i++)
	{
		char x;
		int y;
		cin >>x>>y;
		v[i]=x;
		v2[i]=y;
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == '+')
		{
			packs += v2[i] ;
		}
		else if(v[i] == '-'&&(packs-v2[i])>=0)
		{
			packs -= (v2[i]);
		}
		else if (v[i] == '-' && (packs - v2[i]) < 0)
		{
			DistressedKids++;
		}

	}

	cout << packs<<" "<< DistressedKids;

	return 0;
}