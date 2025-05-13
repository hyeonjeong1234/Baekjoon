#include<stdio.h>
#include<stdlib.h>

int main()
{
    int result = 0;
    for(int i = 0;i<5;i++)
    {
        int n;
        scanf("%d",&n);
        result += n*n;
    }
    printf("%d",result%10);
    return 0;
}