#include<iostream>
#include<string>
using namespace std;

int main()
{
   int T;
    cin>>T;
    for(int i = 0; i<T;i++)
    {
        int count = 1, sum = 0;
        string a;
        cin>>a;
        for(int i = 0;i<a.size();i++)
        {
            if(a[i]=='O')
            {
                sum+=count++;
            }
            else if(count !=1 && a[i] == 'X')
            {
                count = 1;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}