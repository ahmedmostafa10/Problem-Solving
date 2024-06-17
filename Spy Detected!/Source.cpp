#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int size;
		cin >> size;
		int num1=-1,num2=-1;
		int count1=0, index = 0;
		vector<int>v(size);
		for (int j = 0; j <size ; j++)
		{
			cin >> v[j];
			if (j == 0)
			{
				num1 = v[j];
			}
			if (num1!=v[j])
			{
				num2 = v[j];
				index = j + 1;
			}
			else {
				count1++;
			}

		}
		if (count1 > 1)
		{
			cout << index<<endl;
		}
		else {
			cout << 1 << endl;
		}
		
	}
	return 0;
}