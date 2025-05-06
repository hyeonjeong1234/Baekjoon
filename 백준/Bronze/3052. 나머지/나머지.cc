#include<iostream>
using namespace std;

int main()
{
    int arr[10], same = 0;
    for (int i = 0; i < 10; i++)
    {
        int a;
        cin >> a;
        arr[i] = a % 42;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j<10; j++)
        {
            if (arr[i] == arr[j])
            {
                same++;
                break;
            }
        }
    }
    cout << 10 - same;
}