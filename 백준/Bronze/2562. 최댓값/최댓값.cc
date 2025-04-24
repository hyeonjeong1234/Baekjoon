#include<iostream>
using namespace std;
int main()
{
    int max = 0;
    int max_indx = 0;
    for(int i = 0;i<9;i++)
    {
        int v;
        cin>>v;
        if(v>=max){
            max = v;
            max_indx = i;
        }
    }
    cout<<max<<'\n';
    cout<<max_indx+1;
}