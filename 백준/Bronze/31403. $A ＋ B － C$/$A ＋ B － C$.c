#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n[3];
    char* str[3];
    char a_b[11];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", n + i);
    }
    sprintf(a_b, "%d%d", n[0], n[1]);
    int a = atoi(a_b);

    printf("%d\n", n[0] + n[1] - n[2]);
    printf("%d", a - n[2]);

}