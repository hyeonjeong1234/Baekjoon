#include<iostream>
#include<string>
using namespace std;

int main()
{
    string full = "";
    for(int i = 0;i<8;i++)
    {
        string a;
        cin>>a;
        full+=a;
    }
        if(full == "12345678")
            cout<<"ascending";
        else if(full == "87654321")
            cout<<"descending";
        else
            cout<<"mixed";
    return 0;
}