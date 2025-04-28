#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(pair<int,int>a, pair<int,int>b)
{
    if(a.first==b.first)
        return a.second<b.second;
    else
        return a.first<b.first;
}
int main()
{
    vector<pair<int,int>> positions; 
    int N;
    cin>>N;
    for(int i = 0;i<N;i++)
    {
        pair<int,int> position;
        cin>>position.first>>position.second;
        positions.push_back(position);
    }
    sort(positions.begin(),positions.end(),cmp);
    for(int i = 0;i<N;i++)
    {
        cout<< positions[i].first<<' '<<positions[i].second<<'\n';
    }
    return 0;
}