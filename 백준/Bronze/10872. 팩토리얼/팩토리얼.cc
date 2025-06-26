#include<iostream>
using namespace std;
int main()
{
    int N;
    long long result = 1;
    cin>>N;
    if(N == 0)
        cout<<1;
    else{
    for(int i = N;i>0;i--)
    {
        result*=i;
    }
    cout<<result;
    }
}