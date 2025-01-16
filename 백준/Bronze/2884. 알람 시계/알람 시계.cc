#include<iostream>
using namespace std;
int main()
{
    int hour;
    int min;
    int a;
    cin>>hour>>min;
    if(hour!=0)
    {
        a = (hour*60+min)-45;
    }
    else
    {
        a = (24*60+min)-45;
    }
    hour = a/60;
    if (hour == 24)
    hour = 0;
    min = a%60;
    cout<<hour<<" "<<min;
    return 0;
}