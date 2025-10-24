#include<stdio.h>
int main()
{
    int N, val = 0;
    scanf("%d",&N);
    int *arr = (int*)malloc(sizeof(int)*N);
    for(int i = 0;i<N;i++)
    {
        int num = 0;
        scanf("%d", &num);
        arr[i] = num;
    }
    int v;
    scanf("%d", &v);
    for(int i = 0;i<N;i++)
    {
        if(arr[i] == v)
        {
            val++;
        }
    }
    printf("%d", val);
}