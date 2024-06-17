#include<iostream>
#include<iomanip>
using namespace std;
#define pi 3.14159
#define ll long long
#define ld long double
signed main()
{
	double a, b;
	cin >> a>>b;
	ld peri = 2 * b + a*(1 + 0.5*pi);
	cout <<fixed<<setprecision(6)<< peri;
	return 0;

}
