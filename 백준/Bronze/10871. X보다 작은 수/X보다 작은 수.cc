#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N,X;
     cin>>N>>X;
    vector<int> A(N);
    for(int i = 0; i<N;i++)
    {
        cin>>A[i];
        if(A[i]<X)
        {
            cout<<A[i]<<" ";
        }
    }
    return 0;
}