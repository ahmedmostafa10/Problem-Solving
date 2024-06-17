#include <iostream>
#include <vector>
#include <set>
#define ll  long long
using namespace std;
int main()
{
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		int num;
		cin >> num;
		vector<int>v(size);
		multiset<int>s;
		ll sum = 0;
		for (int j = 0; j < num; j++)
		{
			cin >> v[i];
			s.insert(v[i]);
			sum += v[i];
		}
		int maxnumofrepeation = 1;
		for (int k = 0; k < num; k++)
		{
			if (s.count(v[k]) > maxnumofrepeation)
			{
				maxnumofrepeation = s.count(v[k]);
			}

		}
		if (num == 1)
		{
			cout << "NO" << endl;
			continue;
		}
		if ( num - maxnumofrepeation >=maxnumofrepeation)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		
	}
	return 0;
}