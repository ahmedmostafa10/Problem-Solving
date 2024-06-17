#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	ll Num_Words, words;
	cin >> Num_Words;
	cin >> words;
	vector<pair<string, string>> v(words);
	vector< string> v2(Num_Words);
	for (int i = 0; i < words; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		v[i] = (s1.length() > s2.length()) ? (make_pair(s2, s1)) : (make_pair(s1, s2));
	}
	for (int i = 0; i < Num_Words; i++)
	{
		cin >> v2[i];
	}
	for (int i = 0; i < Num_Words; i++)
	{
		for (int j = 0; j < words; j++)
		{
			if (v2[i] == v[j].first || v2[i] == v[j].second)
			{
				v2[i] = v[j].first;
				break;
			}

		}

	}
	for (int i = 0; i < Num_Words; i++)
	{
		cout << v2[i] << " ";
	}
	return 0;
}