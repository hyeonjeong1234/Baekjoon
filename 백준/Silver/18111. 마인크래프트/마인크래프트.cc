#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, m, b;
	int remove = 2, add = 1, time = 0, min = 0, max = 0;
	cin >> n >> m >> b;
	vector<vector<int>> ground;
	
	int min_time = 2e9, max_height = 0;
	for (int i = 0; i < n; i++)
	{
		vector<int> line;
		ground.push_back(line);
		for (int j = 0; j < m; j++)
		{
			int height;
			cin >> height;
			ground[i].push_back(height);
			if (i == 0 && j == 0)
			{
				min = height;
				max = height;
			}
			else if (height > max)
				max = height;
			else if (height < min)
				min = height;
		}
	}
	//cout << "min : " << min << ", max: " << max<<endl;

	for (int i = min; i <= max; i++)
	{
		int gap = 0;
		int inventory = b;

		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				if (i > ground[j][k])
				{

					 gap += i - ground[j][k];

					//time += gap * add;
				}
				else if (i < ground[j][k])
				{
					inventory += (ground[j][k] - i);
					time += (ground[j][k] - i) * remove;
				}
			}
		}
		if (inventory >= gap)
		{
			time += gap;
			//cout<<"height : "<< i << "inv : " << inventory << "gap : " << gap << "time : " << time << endl;
		}
		else
		{
			time = 2e9;
		}

		if (time < min_time)
		{
			max_height = i;
			min_time = time;
		}
		else if (time == min_time)
		{
			if (i > max_height)
				max_height = i;
		}
		time = 0;
	}
	cout << min_time << " " << max_height;
	return 0;
}