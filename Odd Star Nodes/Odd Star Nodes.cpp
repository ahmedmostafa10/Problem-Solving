#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
#include <set>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
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

struct Node
{
	int data;
	Node* left = NULL;
	Node* right = NULL;
	Node(int val) : data(val), left(NULL), right(NULL) {};
};
//void insert(Node* Head, char direction, int rootind, int ind, vector<int>& v,int z)
//{
//	stack<int>st;
//	int m = ind;
//	m = (m - 1) / 2;
//	while (m != 0)
//	{
//		st.push(m);
//		m = (m - 1) / 2;
//	}
//	Node* x = new Node;
//	x->data = v[z];
//	x->index = ind;
//	Node* temp = Head;
//	while (st.size())
//	{
//		int tmp = st.top();
//		st.pop();
//		if (tmp % 2 == 0)
//		{
//			temp = temp->right;
//		}
//		else
//		{
//			temp=temp->left;
//		}
//	}
//	if (ind % 2 == 0)
//	{
//		temp->right = x;
//	}
//	else
//	{
//		temp->left = x;
//	}
//
//}
void CountOddStarNodes(Node* root, multiset<int>& st, int& ans)
{
	if (root == NULL)
	{
		return;
	}
	st.emplace(root->data);
	if (st.size() % 2 == 1)
	{
		auto it = st.begin();
		for (int i = 0; i < st.size() / 2; i++)
		{
			it++;
		}
		if (*it == root->data)
		{
			ans++;
		}
	}
	if (root->left)
	{
		CountOddStarNodes(root->left, st, ans);
		st.erase(st.find(root->left->data));

	}
	if (root->right)
	{
		CountOddStarNodes(root->right, st, ans);
		st.erase(st.find(root->right->data));

	}

}
void solve()
{
	int n; cin >> n;
	vector<Node*>v(n);
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		v[i] = new Node(x);
	}
	vector<Node*>temp;
	int k; cin >> k;
	for (int i = 0; i < k; i++)
	{
		char loc;
		int parentindex, childindex;
		cin >> loc >> parentindex >> childindex;
		if (loc=='L')
		{
			v[parentindex]->left = v[childindex];
		}
		else
		{
			v[parentindex]->right = v[childindex];
		}
	}
	int ans = 0;
	multiset<int>st;
	CountOddStarNodes(v[0], st, ans);
	cout << ans;
}
int main() {
	//file();
	fast();
	solve();
	return 0;
}