#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N;
	priority_queue <int, vector<int>,greater<int>> que;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		
		if (a == 0)
		{
			if (que.size()== 0)
				cout << "0\n";
			else {
				int b = que.top();
				que.pop();
				cout <<b<<"\n";
			}
		}
		else
			que.push(a);

	}
	return 0;
}