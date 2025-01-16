#include<iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int A;
    int B;
    int N;
    cin>>N;

    for(int i = 0; i<N;i++)
    {
            cin>>A>>B;
        cout<<A+B<<"\n";
    }
    return 0;
}