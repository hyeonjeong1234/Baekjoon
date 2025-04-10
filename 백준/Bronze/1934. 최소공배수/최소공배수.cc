#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int T, A, B;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int val = 0;
		cin >> A >> B;
		if (A == 1 || B == 1)
			cout << A * B << endl;
		else if (A % B == 0)
			cout << A<<endl;
		else if (B % A == 0)
			cout << B<<endl;
		else
		{
			int min;
			if (A < B)
				min = A;
			else
				min = B;
			for (int j = min / 2; j >=1; j--)
			{
				if (A % j == 0 && B % j == 0)
				{
					val = j;
					break;
				}
				else if (j == 1)
				{
					val = 1;
				}
			}
			cout << val * (A / val) * (B / val)<<endl;
		}
	}
    return 0;
}