#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int>A(N);
	vector<int>B(N);
	int D = 0;
	int min = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < N; i++)
	{
		cin >> B[i];
	}

	for (int i = 1; i < N; i++)
	{

		for (int j = 0; j < i; j++)
		{
			int temp = 0;
			if (A[j] < A[i])
			{

				temp = A[j];
				A[j] = A[i];
				A[i] = temp;
			}
		}
	}
	for (int i = 1; i < N; i++)
	{

		for (int j = 0; j < i; j++)
		{
			int temp = 0;
			if (B[j] > B[i])
			{

				temp = B[j];
				B[j] = B[i];
				B[i] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		D += A[i] * B[i];
	}
	cout << D;
	return 0;
}