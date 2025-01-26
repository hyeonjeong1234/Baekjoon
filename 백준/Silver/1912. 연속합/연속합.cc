#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	
	long long max = 0;
	cin >> n;
	vector<long long> sum(n,0);

	for (int i = 0; i < n; i++)
	{
		int num = 0;
		cin >> num;

		if (i != 0)
		{
			int calc = 0;
			calc = sum[i - 1] + num;
			if (calc< num)
			{
				sum[i] = num;
				if (sum[i] > max)
					max = sum[i];
			}
			else {
				sum[i] = calc;
				if (sum[i] > max)
					max = sum[i];
			}
		}
		else {
			sum[i] = num;
			max = sum[i];
		}
	}
	cout << max;
}