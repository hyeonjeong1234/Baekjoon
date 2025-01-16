#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(vector<int>& v1, vector<int>& v2)
{
	if (v1[1] == v2[1])
	{
		return v1[0] < v2[0];
	}
	else return v1[1] < v2[1];
}
int main()
{
	int n,start,end;
	int count = 1;
	cin >> n;

	vector<vector<int>> time;
	for (int i = 0; i < n; i++)
	{
		vector<int> b(2);
		cin >>start>>end;
		b[0] =start;
		b[1]=end;
		time.push_back(b);
	}
	sort(time.begin(), time.end(),cmp);
	int time_calc = time[0][1];
	for (int i = 1; i < time.size(); i++)
	{
		if (time_calc <= time[i][0])
		{
			count++;

			time_calc = time[i][1];

		}
	}
	cout << count;
	return 0;
}