#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int size;
	cin >> size;
	vector<vector<char>> v(size);
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			char temp;
			cin >> temp;
			v[i].push_back(temp);
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (v[i][j] != 'x')
			{
				continue;
			}
			else
			{
				int count = 0;
				if (v[i][(j + 1) % size] == 'o' && j != size - 1)
				{
					count++;
				}
				if (v[i][(j - 1 + size) % size] == 'o' && j != 0)
				{
					count++;

				}
				if (v[(i + 1) % size][j] == 'o' && i != size - 1)
				{
					count++;
				}
				if (v[((i - 1 + size) % size)][j] == 'o' && i != 0)
				{
					count++;
				}
				if (count % 2 == 0)
				{
					continue;
				}
				else
				{
					cout << "NO";
					return 0;
				}

			}
		}
	}
	cout << "YES";
	return 0;
}