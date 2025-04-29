#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N=0, M=0;
    vector<int>nums, finds;
    cin >> N;
    for (int i=0; i < N; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int num;
        cin >> num;
        finds.push_back(num);
    }
    sort(nums.begin(), nums.end());
   // sort(finds.begin(), finds.end());
    for (int i = 0; i < M; i++)
    {
        if(binary_search(nums.begin(), nums.end(),finds[i]))
            cout<<1<<"\n";
        else
            cout<<0<<"\n";
    }
    return 0;
}