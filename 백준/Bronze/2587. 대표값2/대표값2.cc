#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int sum = 0;
    vector<int> a;
    for(int i = 0;i<5;i++)
    {
        int num;
        cin>>num;
        a.push_back(num);
        sum+=num;
    }
    sort(a.begin(),a.end());
    cout<<sum/5<<"\n";
    cout<<a[2];
}