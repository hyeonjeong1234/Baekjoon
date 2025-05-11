#include<iostream>
#include<vector>
using namespace std;
int fibonacci(int n)
{
  //재귀로 구현시 시간초과! 규칙찾아서 DP로 해결
  // DP[N] = DP[N-1]+DP[N-2]
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin>>T;
    pair<int,int> p,q;
    p.first = 1;
    p.second = 0;
    q.first = 0;
    q.second = 1;
    pair<int,int> dp[41]={p,q};
    for(int i = 2;i<41;i++)
    {
        pair<int,int> p;
        p = make_pair(dp[i-1].first+dp[i-2].first,dp[i-2].second+dp[i-1].second);
        dp[i] = p;
    }
    for(int i = 0; i<T;i++)
    {
        int num;
        cin>>num;
        if(num == 0)
            cout<<"1 0"<<'\n';
        else if(num == 1)
            cout<<"0 1"<<'\n';
        else
            cout<<dp[num].first<<" "<<dp[num].second<<'\n';
    }
}
