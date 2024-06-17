#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		int x, y;
		cin >> x >> y;
		if (x % y == 0)
		{
			cout << 0 << endl;
		}
		else
		{
			int result = ((((x / y) + 1) * y) - x);
			cout << result<<endl;
		}

	}
	return 0;
}