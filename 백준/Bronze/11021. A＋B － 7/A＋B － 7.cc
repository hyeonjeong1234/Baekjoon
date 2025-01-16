#include<iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    int A;
    int B;
     cin>>N;
    for(int i = 0; i<N;i++)
    {
        cin>>A>>B;
        cout<<"Case #"<<i+1<<": "<<A+B<<"\n";
    }
    return 0;
}