#include <iostream>
#include <vector>
#include <cmath>
#define ll  long long
using namespace std;
int main()
{
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		int x;
		cin >> x;
		bool unsorted=false;
		vector<int>v(x);
		int maxunsorted = 0;
		for (int j = 0; j < x; j++)
		{
			cin >> v[j];
			if (j > 0)
			{
				if (v[j] < v[j - 1]&&maxunsorted<v[j-1])
				{
					unsorted = true;
					maxunsorted = v[j - 1];
				}
			}
		}
		cout << maxunsorted<<endl;
	}
	return 0;
}