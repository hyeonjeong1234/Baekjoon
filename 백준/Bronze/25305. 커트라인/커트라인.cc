#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a, int b)
{
    return a>b;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> rank;
    for(int i = 0;i<n;i++)
    {
        int score;
        cin>>score;
        rank.push_back(score);
    }
    sort(rank.begin(),rank.end(),compare);
    cout<<rank[k-1];
}