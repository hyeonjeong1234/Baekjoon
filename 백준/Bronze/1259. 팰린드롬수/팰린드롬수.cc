#include<iostream>
#include<string>
using namespace std;
int main()
{
    while(1){
        string S,S_rev;
        cin>>S;
        if(S == "0")
            break;
        for(int i = S.size()-1;i>=0;i--)
        {
            S_rev+=S[i];
        }
        if(S == S_rev)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}