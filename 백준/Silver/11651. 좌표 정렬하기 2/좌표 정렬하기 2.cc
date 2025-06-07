#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int, int> a, pair<int,int> b)
{
    if(a.second == b.second)
       return a.first<b.first;
    else
        return a.second<b.second;
}
int main()
{
    int N;
    vector<pair<int,int>> arr;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int x, y;
        cin>>x>>y;
        arr.push_back(make_pair(x,y));
    }
    sort(arr.begin(),arr.end(),compare);
    for(int i=0;i<N;i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }
    return 0;
}