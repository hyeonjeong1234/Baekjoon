#include<stdio.h>
#include<stdlib.h>

int main()

{
	int n = 0;
	int tmp = 0;
	int cnt = 0;
	
	int m = 0;
	int num = 0;
	scanf("%d", &n);
	tmp = n;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		cnt++;
	}
	for (int i = n - cnt * 9; i < n; i++)
	{
		
		int sum = 0;
		num = i;
		while (num != 0)
		{
			sum = sum+ (num % 10);
			num = num / 10;
		}
		if (i + sum == n)
		{
			m = i;
			break;
		}
	}
	printf("%d", m);
} 