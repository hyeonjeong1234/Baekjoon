#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> people;
    for(int i = 0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        people.push_back(make_pair(x,y));
    }
    for(int i = 0;i<n;i++)
    {
        int rank = 1;
        for(int j =0;j<n;j++)
        {
            if(people[i].first<people[j].first&&people[i].second<people[j].second)
                rank++;
        }
        cout<<rank<<"\n";
    }
    return 0;
}
// 다 배열에 넣고 1~끝까지 비교하면서 i번째 애가 j번째 애보다 작을때마다 rank증가-> i 한번 끝날때마다 rank초기화