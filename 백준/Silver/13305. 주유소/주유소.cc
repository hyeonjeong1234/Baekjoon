#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	long long n,dis,val,min, result=0;
	vector<long long> dis_arr;
	vector<long long> val_arr;
	cin >> n;
	for( long long i = 0; i < n-1; i++)
	{
		cin>>dis;
		dis_arr.push_back(dis);
	}
	for (long long i = 0; i < n; i++)
	{
		cin>>val;
		val_arr.push_back(val);
	}
	min = val_arr[0];
	for (long long i = 0; i < n; i++)//0번노드를 최소값으로 생각하고 앞에 더 가격이싼 노드가 있으면 최소를 바꿈
	{
		if (min > val_arr[i])
		{
			min = val_arr[i];
		}
		if (i != n - 1)
		{
			result += min * dis_arr[i];
		}
		
	}
	cout << result;
	return 0;
}