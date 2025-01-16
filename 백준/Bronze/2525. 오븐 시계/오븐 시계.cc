#include<iostream>
using namespace std;
int main()
{
    int H;
    int M;
    int C;
    cin >> H>>M;
    cin>>C;
    int a;
    a = 60*H+M+C;
    H = a/60;
    if(H >=24)
        H = H-24;
    M = a%60;
    cout << H << " "<<M;
    return 0;
}