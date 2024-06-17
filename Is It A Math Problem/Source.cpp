#include <iostream>
#include <vector>
#include <cmath>
#define ll  long long
using namespace std;
int main()
{
	ll num;
	cin >> num;
	double temp = sqrt(num);
	int count=0;
	bool sqroot = false;
	if (temp == static_cast<int>(temp))
	{
		sqroot = true;
	}
	for (int i = 1; i < temp; i++)
	{
		if (num % i == 0)
		{
			count++;
		}
	}
	int result;
	if (sqroot)
	{
		result = count * 2 + 1;
		cout << static_cast<int>(temp) << " " << result;
	}
	else
	{
		cout << num << " " <<count;
	}
	return 0;
}