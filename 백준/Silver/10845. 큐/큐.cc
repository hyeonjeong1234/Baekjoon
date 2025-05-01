#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int>queue;
void push(int a)
{
    queue.push_back(a);
}
void pop()
{
    if(queue.size() == 0)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<queue.front()<<"\n";
        queue.erase(queue.begin());
    }        
}
void size()
{
    cout<<queue.size()<<"\n";
}
void empty()
{
    if(queue.size() == 0)
        cout<<1<<"\n";
    else
        cout<<0<<"\n";
}
void front()
{
    if(queue.size() == 0)
        cout<<-1<<"\n";
    else
        cout<<queue.front()<<"\n";
}
void back()
{
    if(queue.size() == 0)
        cout<<-1<<"\n";
    else
        cout<<queue.back()<<"\n";
}



int main()
{
    int N;
    cin>>N;
    for(int i = 0;i<N;i++)
    {
        string func;
        int num;
        cin>>func;
        if(func == "push")
        {
            cin>>num;
            push(num);
        }
        else if(func == "pop")
            pop();
        else if(func == "size")
            size();
        else if(func == "empty")
            empty();
        else if(func == "front")
            front();
        else if(func == "back")
            back();
    }
    return 0;
}