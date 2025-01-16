#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;


int main() {
	int n = 0;
	int count = 0;
	int white[100][100] = { 0 };
	cin >> n;
	int** arr = new int* [n];
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[2];
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}	
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 100-arr[i][1]-10; j < 100-arr[i][1]; j++)
		{
			for (int k = arr[i][0]; k < arr[i][0]+10; k++)
			{
				if (white[j][k] == 0)
					white[j][k] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (white[i][j] == 1)
			{
				count++;
			}
		}
	}
	cout << count;
	for (int i = 0; i < 2; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
} 