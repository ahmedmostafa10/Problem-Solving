#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		int num;
		cin >> num;
		bool found = false;
		vector<int>v(num+1);
		for (int j = 0; j < num; j++)
		{
			int x;
			cin >> x;
			v[x]++;
		}
		for (int k = 0; k <= num; k++)
		{
			if (v[k]>=3)
			{
				cout << k << endl;
				found = true;
				break;
			}
		}
		if (!found)
		{
			cout << -1<<endl;
		}
	}
	return 0;
}