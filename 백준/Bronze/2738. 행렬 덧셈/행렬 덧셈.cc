#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;


int main() {
	int n = 0;
	int m = 0;
	cin >> n >> m;
	int** arr_a = new int*[n];
	for (int i = 0; i < n; i++)
	{
		arr_a[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			cin >> arr_a[i][j];
		}

	}
	int** arr_b = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr_b[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			cin >> arr_b[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr_a[i][j] = arr_a[i][j] + arr_b[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr_a[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
		delete[] arr_a[i];

	delete[]arr_a;


	for (int i = 0; i < 3; i++)
		delete[] arr_b[i];

	delete[]arr_b;
	return 0;
} 