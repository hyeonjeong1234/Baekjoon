#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
using namespace std;

struct compare{
    bool operator()(int a, int b)
{
   if(abs(a) == abs(b))
      return a>b;
   else
      return abs(a)>abs(b);
    }
};

int main()
{
    priority_queue<int, vector<int>,compare> pq;
    vector<int> result;
    int N;
    cin>>N;
    for(int i = 0;i<N;i++)
    {
        int num;
        cin>>num;
        if(num == 0)
        {
            if(pq.empty())
                 cout<<"0"<<"\n";
            else{
               cout<<pq.top()<<"\n";
                pq.pop();
            }
        }
        else
        {
           pq.push(num);
        }
    }
    return 0;
}
