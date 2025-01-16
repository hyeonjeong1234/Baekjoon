#include<stdio.h>
#include<stdlib.h>


int find_max(int n,int m)
{
	int amt = 0;
	int comp = 0;
	int i = 0;
	int* arr = (int*)malloc(sizeof(int) * n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	if (i > 2)
	{
		for (int j = 0; j < i-2; j++)
		{
			for (int k = j+1; k < i-1; k++)
			{
				for (int q = k+1; q <i; q++)
				{
					comp = arr[j] + arr[k] + arr[q];
					if (amt<comp&&comp<=m)
						amt = comp;
				}
			}
		}
	}

	free(arr);
	return amt;
}
int main() {
	int n = 0;
	int m = 0;
	int result = 0;
	scanf("%d %d", &n, &m);
	result = find_max(n,m);
	printf("%d", result);
	return 0;
}
