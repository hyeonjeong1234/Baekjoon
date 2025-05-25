#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
    int A, B, C, mul;

    string result;
    cin >> A >> B >> C;
    mul = A * B * C;
    result = to_string(mul);
    vector<int> count(10, 0);
    int i = 0;
    while (i<result.size())
    {
        string num;
        num = result.substr(i++,1);
        count[stoi(num)]++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << count[i] << "\n";
    }
    return 0;
}