#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool compare(char a, char b)
{
    return a>b;
}
int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end(),compare);
    cout<<a;
    return 0;
}