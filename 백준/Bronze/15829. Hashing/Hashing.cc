#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int L, r = 31, M = 1234567891, H = 0;
    string S;
    cin >> L >> S;
    for (int i = 0; i < L; i++)
    {
        H += (S[i]-96) * pow(r, i);
    }
    cout << H % M;
}