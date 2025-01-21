#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int n,count = 0;
	cin >> n;
	vector<int>arr(n+1);
	int result;
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <=n; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2])%15746;
	}
	result = arr[n];
	cout<<result;
	return 0;
}