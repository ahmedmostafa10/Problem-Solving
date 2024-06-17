#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int num;
	cin >> num;
	vector<int>v(num);
	
	for (auto &x:v)
	{
		cin >> x;
	}
	int count = 0;
	for (int i=0;i<v.size();i++)
	{
		if (v[i] == 0)
		{
			if (i == 0)
			{
				continue;
			}
			else if (i == v.size() - 1)
			{
				continue;
			}
			else if (v[i - 1] == 1 && v[i + 1] == 1)
			{
				count++;
			}

		}
		else
		{
			count++;
		}

	}

	cout << count;

	return 0;
}