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
Node* insertNode(Node*&root, pair<int, int>&p)
{
	if (root==NULL)
	{
		Node* root = new Node(p.second);
		return root;
	}
	if (p.second>root->data)
	{
		root->right=insertNode(root->right, p);
	}
	else
	{
		root->left=insertNode(root->left, p);
	}
	return root;
}
struct BST
{
	int classid=-1;
	Node* Head=NULL;
	BST* right=NULL;
	BST* left=NULL;
};
void insert(BST *B,pair<int,int>p)
{
	if (B->classid==-1)
	{
		B->classid = p.first;
		B->Head=insertNode(B->Head,p);
		return;
	}
	BST* temp = B;
	BST* prev = temp;
	while (temp!=NULL&&temp->classid!=p.first)
	{
		prev = temp;
		if (p.first > temp->classid)
		{
			temp = temp->right;
		}
		else 
		{
			temp = temp->left;
		}
	}
	if (temp==NULL)
	{
		temp = new BST;
		temp->classid = p.first;
		temp->Head=insertNode(temp->Head, p);
		if (temp->classid>prev->classid)
		{
			prev->right = temp;
		}
		else
		{
			prev->left = temp;
		}
	}
	else
	{
		temp->Head=insertNode(temp->Head, p);
	}
}
bool search(BST*B,int &steps,pair<int,int>&p)
{
	BST* temp = B;
	while (temp!=NULL)
	{
		steps += 1;
		if (temp->classid==p.first)
		{
			break;
		}
		else if (p.first > temp->classid)
		{
			temp = temp->right;
		}
		else
		{
			temp = temp->left;
		}
	}
	if (temp==NULL)
	{
		return false;
	}
	else
	{
		Node* x = temp->Head;
		while (x)
		{
			steps += 1;
			if (x->data == p.second)
			{
				return true;
			}
			else if (p.second>x->data)
			{
				x = x->right;
			}
			else
			{
				x = x->left;
			}
		}
		return false;
	}

}
void solve()
{
	int n, TC; cin >> n >> TC;
	vector<pair<int, int>>v(n);
	BST* B=new BST;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
		insert(B, v[i]);
	}
	while (TC--)
	{
		pair<int, int>p;
		cin >> p.first >> p.second;
		int steps = 0;
		bool found = search(B, steps,p);
		cout << steps << " " << found << "\n";
	}
}
int main() {
	//file();
	fast();
	solve();
	return 0;
}