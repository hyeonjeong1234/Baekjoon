#include<iostream>
using namespace std;

int main()
{
    int N,K,NP=1,KP=1;
    cin>>N>>K;
    for(int i = 0;i<K;i++)
    {
        NP*=N-i;
        KP*=i+1;
    }
    cout<<(NP/KP);
}