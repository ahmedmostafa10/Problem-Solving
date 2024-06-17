#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int size;
	cin >> size;
	vector<int> v(size);
	for (auto &x:v)
	{
		cin >> x;
	}
	if (v.back() == 15)
	{
		cout << "DOWN";
	}
	else if (v.back() == 0)
	{
		cout << "UP";
	}
	else if (size == 1)
	{
		cout << -1;
	}
	else if ((v[size - 1] - v[size - 2]) > 0)
	{
		cout << "UP";
	}
	else if ((v[size - 1] - v[size - 2]) < 0)
	{
		cout << "DOWN";
	}
	return 0;
}