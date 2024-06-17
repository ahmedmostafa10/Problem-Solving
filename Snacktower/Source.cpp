#include <iostream>
#include <queue>
#include <string>
#define ll long long
using namespace std;
int main()
{
	int num;
	cin >> num;
	priority_queue<int>pq;
	int temp = num;
	for (int i = 0; i < num; i++)
	{	
		int x;
		cin >> x;
		if (x == temp)
		{
			cout << temp;
			temp--;
			while (!pq.empty())
			{
				if (pq.top() == temp)
				{
					cout << " " << temp;
					temp--;
					pq.pop();
				}
				else
				{
					break;
					
				}
			}
			cout << endl;
		}
		else
		{
			pq.push(x);
			cout << endl;
		}
	}
	return 0;
}