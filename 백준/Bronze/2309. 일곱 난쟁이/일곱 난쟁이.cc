#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

//입력 9개 출력 7개 합 100;;
int main()
{
	int arr_nine[9];
	int sum = 0;
	vector <int> result;
	for (int i = 0, a = 0; i < 9; i++)
	{
		cin >> arr_nine[i];
		a = arr_nine[i];
		sum += arr_nine[i];
	}
	int n = 0;
	int excep1 =0 , excep2 = 0;
	for (int i = 0; i < 9; i++)
	{
		int calc;
		

		for (int j = 0; j < 9; j++)
		{
			if (j == i)
				continue;
			else
			{

				calc = sum - arr_nine[i] - arr_nine[j];
				if (calc == 100)
				{
					excep1 = i;
					excep2 = j;
					break;
				}

			}


		}


		

	}
	for (int k = 0; k < 9; k++)
	{
		if (k != excep1 && k != excep2)
			result.push_back(arr_nine[k]);
		else
			continue;
	}
	sort(result.begin(), result.end());
	if (result.size() != 0)
	{
		for (int q = 0; q < 7; q++)
		{
			cout << result[q] << endl;
		}
	}
	else return 0;

}