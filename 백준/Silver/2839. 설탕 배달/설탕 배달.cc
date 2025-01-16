#include<stdio.h>
#include<stdlib.h>

int main()

{
	int n = 0;
	int cnt = 5000;
	int mat = 0; 
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i * 5 + j * 3 == n)
			{
				if (cnt > i + j) 
				{
					cnt = i + j;
				}
				
			}
				
		}
		if (i == n - 1 && cnt == 5000)
			cnt = -1;
	}
	printf("%d", cnt);
	return 0;
}
