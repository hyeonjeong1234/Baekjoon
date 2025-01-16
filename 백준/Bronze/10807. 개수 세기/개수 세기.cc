#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main() {
    int n = 0;
    int v = 0;
    int count = 0;
    scanf("%d", &n);
    int* list = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    scanf("%d", &v);

    for (int i = 0; i < n; i++)
    {
        if (list[i] == v)
            count += 1;
    }

    printf("%d", count);
    free(list);
    return 0;
} 