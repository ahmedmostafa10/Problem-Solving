#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <unordered_set>

using namespace std;

void file() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#else
	// freopen("gcd.in", "r", stdin);
#endif
}

void fast() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

struct Road {
	int x1;
	int x2;
	int cost;
};

struct path {
	int j;
	int k;
};

int findpath(vector<path>& paths, int vertex) {
	if (paths[vertex].j != vertex)
		paths[vertex].j = findpath(paths, paths[vertex].j);
	return paths[vertex].j;
}

void mergepaths(vector<path>& paths, int x, int y) {
	int xRoot = findpath(paths, x);
	int yRoot = findpath(paths, y);

	if (paths[xRoot].k < paths[yRoot].k)
		paths[xRoot].j = yRoot;
	else if (paths[xRoot].k > paths[yRoot].k)
		paths[yRoot].j = xRoot;
	else {
		paths[yRoot].j = xRoot;
		paths[xRoot].k++;
	}
}

int minimumCost(int n, int numRoads, int hospitalCost, vector<Road>& roads) {
	sort(roads.begin(), roads.end(), [](const Road& a, const Road& b) { return a.cost < b.cost; });
	vector<path> paths(n);
	for (int i = 0; i < n; ++i)
		paths[i].j = i, paths[i].k = 0;

	int totalCost = 0, hospitals = 0;
	for (const auto& road : roads) {
		int x = findpath(paths, road.x1);
		int y = findpath(paths, road.x2);
		if (x != y) {
			totalCost += road.cost;
			mergepaths(paths, x, y);
		}
	}

	for (int i = 0; i < n; ++i)
		if (paths[i].j == i)
			hospitals++;
	return totalCost + hospitals * hospitalCost;
}

void solve() {
	int n, numRoads, hospitalCost;
	cin >> n >> numRoads >> hospitalCost;

	vector<Road> roads(numRoads);
	for (int i = 0; i < numRoads; ++i) {
		int x1, x2, cost;
		cin >> x1 >> x2 >> cost;
		roads[i] = { x1 - 1, x2 - 1, cost };
	}

	int minCost = minimumCost(n, numRoads, hospitalCost, roads);
	int hospitals = 0;
	vector<path> paths(n);
	for (int i = 0; i < n; ++i) {
		paths[i].j = i;
		paths[i].k = 0;
	}

	for (const auto& road : roads) {
		if (findpath(paths, road.x1) != findpath(paths, road.x2)) {
			mergepaths(paths, findpath(paths, road.x1), findpath(paths, road.x2));
		}
	}

	for (int i = 0; i < n; ++i) {
		if (paths[i].j == i) {
			hospitals++;
		}
	}

	cout << minCost << " " << hospitals << endl;
}

int main() {
	//file();
	fast();
	solve();
	return 0;
}
