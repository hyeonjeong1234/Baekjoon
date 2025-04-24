#include<iostream>
using namespace std;
int main()
{
    long long N,max = -100000000,min = 10000000000;
    cin>>N;
    for(int i = 0; i<N; i++)
    {
        int num;
        cin>>num;
        if(num>=max)
            max = num;
        if(num<=min)
            min = num;
    }
    cout<<min<<' '<<max;
}