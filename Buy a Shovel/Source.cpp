#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	ll price;
	cin >> price;
	int count ;
	int brul;
	cin >> brul;
	for (int i = 1; i < 10; i++)
	{
		if (((((price*i)%10) - brul) == 0)|| ((price * i) % 10)==0)
		{
			count = i;
			break;
		}
		
	}

	cout << count;

	return 0;
}