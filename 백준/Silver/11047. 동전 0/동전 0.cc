#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, k;
	vector<int> coin;
	int val;
	int sum = 0;
	int calc = 0;
	int count = 0;
	int result=0;
	cin >> n >> k;
	calc = k;
	for (int i = 0; i < n; i++)
	{
		cin >> val;
		coin.push_back(val);

	}
	for (int i = n - 1; i >= 0; i--)
	{
		count += calc / coin[i];
		calc = calc % coin[i];
		if (calc == 0)
			break;
	}
	cout <<count;
	return 0;
}