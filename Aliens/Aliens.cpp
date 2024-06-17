#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stack>
#include <unordered_set>

using namespace std;
void file() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    //freopen("C:\\Users\\karemo\\source\\repos\\generator\\generator\\out.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
#else
    //freopen("gcd.in", "r", stdin);
    //freopen("out.txt", "w", stdout);
#endif
}

void fast() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
}

void dfsFirstPass(const vector<vector<int>>& graph, int vertex, vector<bool>& visited, stack<int>& Stack) {
    visited[vertex] = true;
    for (int neighbor : graph[vertex]) {
        if (!visited[neighbor]) {
            dfsFirstPass(graph, neighbor, visited, Stack);
        }
    }
    Stack.push(vertex);
}

void dfsSecondPass(const vector<vector<int>>& graph, int vertex, vector<bool>& visited, unordered_set<int>& component) {
    visited[vertex] = true;
    component.insert(vertex);
    for (int neighbor : graph[vertex]) {
        if (!visited[neighbor]) {
            dfsSecondPass(graph, neighbor, visited, component);
        }
    }
}

vector<vector<int>> transposeGraph(const vector<vector<int>>& graph, int V) {
    vector<vector<int>> transposed(V);
    for (int i = 0; i < V; ++i) {
        for (int j : graph[i]) {
            transposed[j].push_back(i);
        }
    }
    return transposed;
}

int kosaraju(const vector<vector<int>>& graph, int V) {
    vector<bool> visited(V, false);
    stack<int> Stack;
    for (int i = 0; i < V; ++i) {
        if (!visited[i]) {
            dfsFirstPass(graph, i, visited, Stack);
        }
    }
    vector<vector<int>> transposed = transposeGraph(graph, V);
    fill(visited.begin(), visited.end(), false);

    int minPlanets = 0;
    while (!Stack.empty()) {
        int v = Stack.top();
        Stack.pop();
        if (!visited[v]) {
            unordered_set<int> component;
            dfsSecondPass(transposed, v, visited, component);
            minPlanets++;
        }
    }
    return minPlanets;
}

int main() {
    file();
    int N, M;
    cin >> N >> M;

    vector<vector<int>> graph(N);
    for (int i = 0; i < M; ++i) {
        int start, end;
        cin >> start >> end;
        graph[start].push_back(end);
    }

    int minPlanets = kosaraju(graph, N);
    cout << minPlanets << endl;

    return 0;
}
