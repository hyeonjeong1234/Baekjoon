#include<iostream>
#include<algorithm>
#include<deque>
#include<vector>
using namespace std;
int main()
{
    int N;
    deque<pair<int,int>> dq;
    cin>>N;
    for(int i = 0;i<N;i++)
    {
        int paper;
        cin>>paper;
        dq.push_back(make_pair(i+1,paper));
    }
    while(1)
    {
        int paper = dq.front().second;
        cout<<dq.front().first<<" ";
        dq.pop_front();
        if(dq.empty())
            break;
        if(paper >0)
        {
            for(int i = 0;i<paper-1;i++)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else
        {
            for(int i = 0;i<-paper;i++)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    return 0;
}