#include <iostream>
using namespace std;
int main()
{
	int n,t,k,d;
	cin >> n>>t>>k>>d;
	int temp = n;
	float Time1oven = 0;
	float Time2oven = 0;
	int t1=0;
	int t2=-d;
	while (temp>0)
	{
		t1++;
		t2++;
		Time2oven++;
		if (t1 == t)
		{
			temp -= k;
			t1 = 0;
		}
		if (t2 == t)
		{
			temp-= k;
			t2 = 0;
		}
	}
	t1 = 0;
	while (n>0)
	{
		t1++;
		Time1oven++;
		if (t1 == t)
		{
			n -= k;
			t1 = 0;
		}
		
	}
	if (Time2oven < Time1oven)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}