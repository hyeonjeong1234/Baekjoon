#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int people, time,result=0;
	vector<int>time_arr;
	cin >> people;
	for (int i = 0; i < people; i++)
	{
		cin >> time;
		time_arr.push_back(time);
	}
	sort(time_arr.begin(), time_arr.end());

	for (int i = 0; i < people; i++)
	{
			for (int j = i; j >= 0; j--)
			{
				result += time_arr[j];
			}
	
	}
	cout << result;

	return 0;
}