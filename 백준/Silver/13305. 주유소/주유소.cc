#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n,dis,val, result=0;
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
	for (int i = 0; i < n; i++)
	{
		if (i != n-1)
		{
			result += val_arr[i] * dis_arr[i];
		}
	}
	cout << result;
	return 0;
}