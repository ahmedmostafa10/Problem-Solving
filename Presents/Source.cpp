#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
using ll = long long;
int main()
{
	int size;
	cin >> size;
	vector<int>v(size);
	for (int i = 0; i < v.size(); i++)
	{
		int temp;
		cin >> temp;
		v[temp - 1] = i;
	}
	for (auto x:v)
	{
		cout << x+1<<" ";
	}
	return 0;
}