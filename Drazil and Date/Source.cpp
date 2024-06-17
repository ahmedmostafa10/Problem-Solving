#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	ll a,b;
	cin >> a>>b;
	ll steps;
	cin >> steps;
	ll steps_needed = abs(a) + abs(b);
	if (steps < steps_needed||(steps-steps_needed)%2!=0)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}

	return 0;
}