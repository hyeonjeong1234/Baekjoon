#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	int N;
	queue<int>que;
	cin >> N;
	vector<bool> visit(N+1,false);
	vector<int> parent(N+1,0);
	vector<int> nodes;
	vector<vector<int>> tree(N+1,nodes);
	for (int i = 1; i <= N - 1; i++)
	{
		int num1, num2;
		cin >> num1>> num2;
		tree[num1].push_back(num2);
		tree[num2].push_back(num1);
	}
	parent[1] = 1;
	que.push(1);
	while (!que.empty())
	{
		if (visit[que.front()] == true)
			continue;
		int num = que.front();
		for (int i = 0; i < tree[num].size(); i++)
		{
			if (tree[num][i] != parent[num])
			{
				if (parent[tree[num][i]] == 0)
				{
					parent[tree[num][i]] = num;
				}
				que.push(tree[num][i]);
			}
			
		}
		visit[num] = true;
		que.pop();
	}
	for (int i = 2; i < parent.size(); i++)
	{
		cout << parent[i] << "\n";
	}
	return 0;
}