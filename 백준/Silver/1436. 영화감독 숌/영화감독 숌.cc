#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int cnt = 0;
	int answer = 0;
	int a = 666;
	while(cnt<3)
	{
		cnt = 0;
		int b = a;
		while (b > 0)
		{
			
			
			if (b % 10 == 6)
			{
				cnt++;
			}
			else
			{
				if (cnt > 0)
				{
					cnt = 0;
				}
			}

			if (cnt == 3)
			{
				answer++;
				cnt = 0;
				break;
			}

			b=b / 10;
		}

		if (answer == n)
		{
			printf("%d", a);
			break;
		}
		a++;
	}
	
	return 0;
}