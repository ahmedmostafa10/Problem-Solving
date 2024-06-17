#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>

using namespace std;
void solve()
{
	int TC; cin >> TC;
	while (TC--)
	{
		int n; cin >> n;
		int t; cin >> t;
		string s; cin >> s;
		int temp = 0;
		map<int, int>m;
		for (int i = 65; i < 72; i++)
		{
			m[i] = t;
		}
		for (int i = 0; i < n; i++)
		{
			if (m[s[i]])
				m[s[i]]--;
		}
		for (int i = 65; i < 72; i++)
		{
			if (m[i])
				temp += m[i];
		}
		cout << temp << "\n";
	}

}



int main() {
	solve();

	return 0;
}
