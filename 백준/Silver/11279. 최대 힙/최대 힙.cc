#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    priority_queue<int,vector<int>> less_que;
    cin>>N;
    for(int i = 0;i<N;i++)
    {
        int x;
        cin>>x;
        if(x == 0)
        {
            if(less_que.size() == 0)
                cout<<"0\n";
            else
            {
                cout<<less_que.top()<<"\n";
                less_que.pop();
            }
        }
        else
            less_que.push(x);
    }
    return 0;
}