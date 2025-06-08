#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    queue<int> a;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        string x;
        cin>>x;
        if(x == "push")
        {  int b;
           cin>>b;
            a.push(b);
        }
        else if(x == "pop")
        {
             if(a.empty())
                cout<<-1<<"\n";
            else{
                cout<<a.front()<<"\n";
                a.pop();
            }
        }
        else if(x == "size")
        {
            cout<<a.size()<<"\n";
        }
        else if(x == "empty")
        {
            cout<<a.empty()<<"\n";
        }
        else if(x == "front")
        {
            if(a.empty())
                cout<<-1<<"\n";
            else
                cout<<a.front()<<"\n";
        }
        else if(x == "back")
        {
             if(a.empty())
                cout<<-1<<"\n";
            else
                cout<<a.back()<<"\n";
        }
    }
}