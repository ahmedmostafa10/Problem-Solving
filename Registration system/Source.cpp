#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
	int size;
	cin >> size;
	vector<pair<string,int>> v;
	for (int i = 0; i < size; i++)
	{
		string s;
		cin >> s;
		bool found = false;
		for (int j = 0;j < v.size()&&v.size()!=0; j++)
		{
			if (s == v[j].first)
			{
				found = true;
				v[j].second++;
				cout << s + to_string(v[j].second)<<endl;
				break;
			}
			
		}
		if (!found)
		{
			cout << "OK" << endl;
			v.push_back(make_pair (s,0));
		}
	}
	return 0;
}