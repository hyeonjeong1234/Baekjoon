#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int N;
    vector<int>nums;
    cin>>N;
    for(int i = 0; i<N;i++)
    {
        int num;
        cin>>num;
        nums.push_back(num);
    }
    sort(nums.begin(),nums.end());
    for(int i = 0;i<N;i++)
    {
        cout<<nums[i]<<"\n";
    }
    return 0;
}