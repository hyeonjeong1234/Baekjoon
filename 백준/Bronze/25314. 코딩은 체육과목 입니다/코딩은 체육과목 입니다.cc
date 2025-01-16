#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main() {
    int n = 0;
    string a = "int";
    scanf("%d", &n);
    for (int i = 0; i < int(n/4); i++)
    {
        a = "long " + a;

    }
    cout << a;
    return 0;
} 