#include<iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
     cin>>N;
    for(int i = 0; i<N;i++)
    {
        for(int j = 1; j<N-i;j++)
        {
            cout<<" ";
        }
        for(int j =0 ; j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}