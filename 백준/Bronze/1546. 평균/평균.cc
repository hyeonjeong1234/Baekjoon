#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int sub[N];
    float newScore[N];
    float sum;
    for(int i = 0;i<N;i++)
    {
        cin>>sub[i];
    }
    sort(sub,sub+N);
    int max = sub[N-1];
    for(int i = 0; i<N;i++)
    {
        newScore[i] = (float)sub[i]/max*100;
        sum+=newScore[i];
    }
    cout<<sum/N;
}