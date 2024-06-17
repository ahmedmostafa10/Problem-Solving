#include <iostream>
#include <set>
#define ll long long
using namespace std;
int main()
{
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		set<float>s;
		float num1,num2;
		cin >> num1 >> num2;
		s.insert(num1+num2);
		s.insert(num1-num2);
		s.insert(num2-num1);
		s.insert(num1*num2);
		s.insert(num1/num2);
		s.insert(num2/num1);
		cout << s.size()<<endl;
	}

	return 0;
}
