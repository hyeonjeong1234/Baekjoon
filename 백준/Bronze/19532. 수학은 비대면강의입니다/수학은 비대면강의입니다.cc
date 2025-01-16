#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()

{
	int arr[6];
	int x = 0;
	int y = 0;

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = -999; i < 1000;i++)
	{
		x = i;
		for (int j = -999; j < 1000; j++)
		{
			y = j;
			if ((arr[0] * x + arr[1] * y == arr[2]) && (arr[3] * x + arr[4] * y == arr[5]))
			{
				printf("%d %d", x, y);
				break;
			}
		}
	}

	
	return 0;
}
