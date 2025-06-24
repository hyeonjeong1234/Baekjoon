#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int min=0, next=0;
    vector<int> a(31,0);
    for(int i = 1;i<29;i++)
    {
        int num;
        cin>>num;
        a[num] = 1;
    }
    for(int i = 1;i<31;i++)
    {
        if(a[i] == 0)
        {
            if(min==0)
            {
                cout<<i<<"\n";
                 min = i;
            }
            else{
                 cout<<i;
                break;
            }
               
        }
    }
    
        return 0;
}