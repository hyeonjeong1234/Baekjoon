#include<iostream>
#include<queue>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   
    int N;
    priority_queue<int, vector<int>, greater<int>> pq;
    cin>>N;
    for(int i = 0;i<N*N;i++)
    {
        int num;
        cin>>num;
        if(i<N)
            pq.push(num);
        else if(num>=pq.top()){
            pq.push(num);
            pq.pop();
        }
    }
    
    cout<<pq.top();
}