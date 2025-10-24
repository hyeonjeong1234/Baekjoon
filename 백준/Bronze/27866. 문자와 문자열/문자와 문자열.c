#include<stdio.h>

int main()
{
    char * line = (char*)malloc(1001);
    int a;
    scanf("%s", line);
    scanf("%d", &a);
    printf("%c", line[a-1]);
}