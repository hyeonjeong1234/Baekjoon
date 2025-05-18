#include<stdlib.h>
#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int max = 0;
    int count[10001] = {0,};
    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        count[num]++;
        if (max < num)
        {
            max = num;
        }
    }

    for (int i = 1; i < max + 1; i++)
    {
        for (int j = 0; j < count[i]; j++) {
            printf("%d\n", i);
        }
    }
}