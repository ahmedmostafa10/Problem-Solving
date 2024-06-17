#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	vector<string>v(3);
	for (auto& x : v)
	{
		cin >> x;
	}
	int a = 0;
	int b = 0;
	int c = 0;
	for (int i = 0; i < 3; i++)
	{
		if (v[i] == "A>B"|| v[i] == "B<A")
		{
			a++;
			b--;
		}
		if (v[i] == "A>C" || v[i] == "C<A")
		{
			a++;
			c--;
		}
		if (v[i] == "B>A" || v[i] == "A<B")
		{
			b++;
			a--;
		}
		if (v[i] == "B>C" || v[i] == "C<B")
		{
			b++;
			c--;
		}
		if (v[i] == "C>A" || v[i] == "A<C")
		{
			c++;
			a--;
		}
		if (v[i] == "C>B" || v[i] == "B<C")
		{
			c++;
			b--;
		}

	}
	if (a == 2 && b == 0 && c == -2)
	{
		cout << "CBA";
	}
	else if (a == 2 && c == 0 && b == -2)
	{
		cout << "BCA";
	}
	else if (b ==2  && a == 0 && c == -2)
	{
		cout << "CAB";
	}
	else if (b == 2 && c == 0 && a == -2)
	{
		cout << "ACB";
	}
	else if (c == 2 && a == 0 && b == -2)
	{
		cout << "BAC";
	}
	else if (c == 2 && b == 0 && a == -2)
	{
		cout << "ABC";
	}
	else
	{
		cout << "Impossible";
	}

	return 0;
}