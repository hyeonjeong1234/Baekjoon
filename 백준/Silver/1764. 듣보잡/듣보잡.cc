#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N,M;
    vector<string> nosee,nohear, nolist;
    cin>>N>>M;
    for(int i = 0;i<N;i++)
    {
        string name;
        cin>>name;
        nohear.push_back(name);
    }
    for(int i = 0;i<M;i++)
    {
        string name;
        cin>>name;
        nosee.push_back(name);
    }
    sort(nosee.begin(),nosee.end());
    for(int i = 0;i<nohear.size();i++)
    {
        if(binary_search(nosee.begin(),nosee.end(),nohear[i]))
        {
            nolist.push_back(nohear[i]);
        }
    }
    sort(nolist.begin(),nolist.end());
    cout<<nolist.size()<<"\n";
    for(int i = 0;i<nolist.size();i++)
    {
        cout<<nolist[i]<<"\n";
    }
}