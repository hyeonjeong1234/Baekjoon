#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int L, M = 1234567891;
    unsigned long long H = 0, A = 0;
    unsigned long long r = 1;
    string S;
    cin >> L >> S;
    for (int i = 0; i < L; i++)
    {
        H += (S[i] - 96) * r;
        r = (r*31)%M;
    }
    cout << H%M;

}