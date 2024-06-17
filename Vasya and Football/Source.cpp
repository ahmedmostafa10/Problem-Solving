#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#define ll long long
using namespace std;
struct quadra
{
	int time;
	char team;
	int num;
	char card;
};
int main()
{
	string home,away;
	cin >> home>> away;
	int size;
	cin >> size;
	vector<quadra>v(size);
	vector<quadra>vf;
	for (int i = 0; i < size; i++)
	{
		cin >> v[i].time >> v[i].team >> v[i].num >> v[i].card;
		int count=0;
		if (i == 0 && v[0].card == 'r')
		{
			vf.push_back(v[i]);
		}
		for (int j = 0; j < i; j++)
		{
			if (v[i].team == v[j].team && v[i].num == v[j].num||v[i].card=='r')
			{
				count++;
			}
		}
		if (count >= 1)
		{
			bool found = 0;
			for (int k = 0; k < vf.size(); k++)
			{
				if (v[i].team == vf[k].team && v[i].num == vf[k].num)
				{
					found = 1;
				}
			}
			if (!found)
			{
				vf.push_back(v[i]);
			}
		}
	}
	for (int i = 0; i < vf.size(); i++)
	{
		if (vf[i].team == 'h')
		{
			cout << home << " " << vf[i].num << " " << vf[i].time<<endl;
		}
		else
		{
			cout << away << " " << vf[i].num << " " << vf[i].time << endl;
		}
	}
	return 0;
}