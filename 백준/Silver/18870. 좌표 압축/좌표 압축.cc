#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int a;
    vector<int> nums,origin;
    cin>>a;
    for(int i = 0;i<a;i++)
    {
        int num;
        cin>>num;
        origin.push_back(num);
        nums.push_back(num);
    }
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    for(int i = 0;i<a;i++)
    {
        vector<int>::iterator it = lower_bound(nums.begin(),nums.end(),origin[i]);
        cout<<it-nums.begin()<<" ";
    }
    return 0;
}