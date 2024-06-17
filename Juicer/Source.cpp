#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main()
{
	int size;
	cin >> size;
	vector<ll> v(size);
	ll b,d;
	cin >> b >> d;
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
	}
	int count = 0;
	int trash = 0;
	for (int i = 0; i < size ; i++)
	{
		if (v[i] <= b)
		{
			trash += v[i];
			if (trash > d)
			{
				count++;
				trash = 0;
			}
		}
		
	}
	v.clear();
	cout << count;

	return 0;
}