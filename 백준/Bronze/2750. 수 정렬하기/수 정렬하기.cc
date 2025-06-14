#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int N;
    vector<int> b;
    cin>>N;
    for(int i = 0;i<N;i++)
    {
        int a;
        cin>>a;
        b.push_back(a);
    }
    sort(b.begin(),b.end());
    for(int i = 0;i<N;i++)
    {
        cout<<b[i]<<"\n";
    }
    return 0;
}