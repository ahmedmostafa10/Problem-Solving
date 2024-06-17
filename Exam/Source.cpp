#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int num;
	cin >> num;
	if (num == 2)
	{
		cout << 1 << endl;
		cout << 1;
	}
	else if (num == 3)
	{
		cout << 2 << endl;
		cout << 1<<" "<<3;
	}
	else if (num == 4)
	{
		cout << 4 << endl;
		cout << 2 << " " << 4<<" " <<1<<" "<<3;
	}
	else
	{ 
		cout << num << endl;
		for ( int i = 1;  i <= num; i+=2)
		{
			cout << i << " ";
		}
		for (int i = 2; i <= num; i += 2)
		{
			cout << i << " ";
		}
	}

	return 0;
}