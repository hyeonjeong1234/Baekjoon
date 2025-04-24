#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
    int n,sum = 0;
    string num;
    cin>>n;
    cin>>num;
    for(int i=0;i<num.size();i++)
    {
        sum += (num[i]-'0');
    }
    cout<<sum;
}