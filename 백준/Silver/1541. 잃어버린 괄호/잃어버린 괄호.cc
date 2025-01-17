#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string problem;
	string num = "";
	int minus=0,result=0;
	//int num = 0,sub=0;

	cin >> problem;
	for (int i = 0; i <= problem.size(); i++)
	{	
		if (problem[i]=='-'||problem[i]=='+'||i==problem.size())
		{
			if (minus == 0)
			{
				if (problem[i] == '-')
					minus = 1;
				result += stoi(num);
				num = "";
			}
			else
			{
				result -= stoi(num);
				num = "";
			}

		}	
		else
			num += problem[i];
		
	}
	cout << result;
	return 0;
}