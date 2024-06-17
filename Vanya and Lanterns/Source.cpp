#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	double size, length;
	cin >> size >> length;
	vector<double>v(size);
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	double maxdis=0;
	for (int i = 1; i < size; i++)
	{
		double x = (v[i] - v[i - 1])/2;
		if (x > maxdis)
		{
			maxdis = x;
		}
		
	}
	if (v[0] != 0)
	{
		if (size == 1)
		{
			if (v[0] > length - v[0])
			{
				maxdis = v[0];
			}
			else
			{
				maxdis = length - v[0];
			}
		}
		else
		{
			if (v[0] > maxdis)
			{
				maxdis = v[0];
			}

		}
	}
	if (v[size - 1] != length)
	{
		if (length-v[size-1] > maxdis)
		{
			maxdis = length - v[size - 1];
		}

		
	}

	if (maxdis == static_cast<long long>(maxdis))
	{
		cout << static_cast<long long>(maxdis);
	}
	else {
		cout << static_cast<long long>(maxdis) << "." << 5;
	}
	return 0;
}