#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int size,dr;
	cin >> size>>dr;
	for (int i = 0; i < size; i++)
	{
		if (size > 1 && dr == 0)
		{
			cout << "No solution";
			return 0;
		}
		if (i == 0)
		{
			cout << dr;
		}
		else
		{
			cout << 0;
		}
	}
	return 0;
}