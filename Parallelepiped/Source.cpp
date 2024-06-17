#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
int main()
{
	ll area1,area2,area3;
	cin >> area1 >> area2 >> area3;
	ll volume = sqrt(area1 * area2 * area3);
	ll a = volume / area1;
	ll b = volume / area2;
	ll c = volume / area3;
	cout << 4 * (a + b + c);
	return 0;
}