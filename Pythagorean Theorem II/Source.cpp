#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;
int main()
{
	ll num;
	cin >> num;
   /* vector<int> v = generatePrimes(num);*/
	int count = 0;
    vector<pair<int,int>>temp;
    for (double i = 5.0; i <= num; i++)
    {
        for (double j = 3.0; j < i; j++)
        {
            double number = sqrt(pow(i, 2) - pow(j, 2));
            if (number == static_cast<int>(number))
            {
                bool found = false;
                for (int k = 0; k < temp.size(); k++)
                {
                    if (j == temp[k].second && number == temp[k].first)
                    {
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    temp.push_back(make_pair(j, number));
                    count++;
                }
            }
            
        }
    }
	cout << count;

	return 0;
}