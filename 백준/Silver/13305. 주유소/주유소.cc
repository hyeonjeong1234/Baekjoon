#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n,dis,val,min, result=0;
	vector<int> dis_arr;
	vector<int> val_arr;
	cin >> n;
	for (int i = 0; i < n-1; i++)
	{
		cin>>dis;
		dis_arr.push_back(dis);
	}
	for (int i = 0; i < n; i++)
	{
		cin>>val;
		val_arr.push_back(val);
	}
	for (int i = 0; i < n; i++)//지금노드를 최소값으로 생각하고 앞에 더 가격이싼 노드가 있으면 최소를 바꿈
	{
		min = val_arr[i];
		for (int j = i; j >= 0; j--)
		{
			if (min > val_arr[j])
				min = val_arr[j];
		}
		if (i != n - 1)
		{
			result += min * dis_arr[i];
		}
		
	}
	cout << result;
	return 0;
}