//DP로 풀이
// 1~8까지 손으로 계산해보면
// 2,3으로 나눠지지 않는 경우 N을 1로 만드는 횟수 = N-1을 1로 만드는 횟수 +1
// 2,3으로 나누어지는경우 N-1을 1로 만든경우에 +1 , 2로 나누는 경우,3,으로 나누는 경우 중 가장 작은거 선택
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int dp[1000001];
int main()
{
    int N;
    int i = 2;
   
    cin >> N;
    
    while(i <= N)
{
  dp[i] = dp[i-1]+1;
  if(i%2 == 0)
    dp[i] = min(dp[i], dp[i/2]+1);
  if(i%3 == 0)
    dp[i] = min(dp[i], dp[i/3]+1);
        i++;
}
    cout << dp[N];
    return 0;
}