//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//typedef struct 
//{
//	int val;
//	int distance;
//}node;
//int main()
//{
//	int V;
//	int max_dis=0;
//	int max_val = 0;
//	cin >> V;
//	vector<node> nodes;
//	vector<vector<node>>tree(V + 1, nodes);
//	vector<int> parent(V + 1,0);
//	vector<bool> visit(V + 1, false);
//
//	for (int i = 0; i < V; i++)
//	{
//		int n;
//		cin >> n;
//		while (1)
//		{
//			node relate;
//			cin >> relate.val;
//			if (relate.val == -1)
//				break;
//			else
//			{
//				cin >> relate.distance;
//			}
//			tree[n].push_back(relate);
//		}
//	}
//	queue<int> q;
//	q.push(1);
//	parent[1] = 1;
//	while (!q.empty())
//	{
//		int this_node = q.front();
//		int max = 0;
//		max_val = 0;
//		for (int i = 0; i < tree[this_node].size(); i++)
//		{
//			if (parent[tree[this_node][i].val] == 0)
//			{
//				if (parent[this_node] != tree[this_node][i].val)
//				{
//					parent[tree[this_node][i].val] = this_node;
//					if (max < tree[this_node][i].distance)
//					{
//						max = tree[this_node][i].distance;
//						max_val = tree[this_node][i].val;
//						q.push(max_val);
//					}
//				}
//			}
//			
//			else
//				continue;
//		}
//		
//		q.pop();
//		max_dis += max;
//	}
//
//	cout << max_dis;
//	return 0;
//}
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
typedef struct 
{
	char val;
	int count;
	char right;
	char left;
}node;

void presearch(vector<node>tree, node i)
{
	cout << i.val;
	if (i.left !='.')
		presearch(tree,tree[i.left-64]);
	if (i.right != '.') {
		presearch(tree,tree[i.right - 64]);
	}

}
void insearch(vector<node>tree, node i)
{
	
	if (i.left != '.')
	{
		insearch(tree, tree[i.left - 64]);
	}
	cout << i.val;
	if (i.right != '.')
	{
		insearch(tree, tree[i.right - 64]);
	}
	
}
void postsearch(vector<node> tree, node i)
{
	if (i.left != '.')
	{
		postsearch(tree, tree[i.left - 64]);
	}
	if (i.right != '.')
	{
		postsearch(tree, tree[i.right - 64]);
	}
	cout << i.val;

}
int main()
{
	int N;	
	cin >> N;
	vector<bool> visit(N + 1, false);
	vector<node> tree(N+1);
	for (int i = 1; i <= N; i++)
	{
		node this_node;
		cin >> this_node.val >> this_node.left >> this_node.right;
		this_node.count = this_node.val-64;

		tree[this_node.count] = this_node;
	}
	presearch(tree,tree[1]);
	cout << "\n";
	insearch(tree, tree[1]);
	cout << "\n";
	postsearch(tree, tree[1]);
    return 0;
}