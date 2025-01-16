#include<iostream>
#include<string>
using namespace std;
int main()
{
    int A;
    string B;
    int i_B[3];
    cin >> A>>B;
    for(int i = 0; i<3;i++)
    {
        i_B[i] = B[i]-48;
    }
    cout<<A*i_B[2]<<endl;
    cout<<A*i_B[1]<<endl;
    cout<<A*i_B[0]<<endl;
    cout<<A*i_B[2]+A*i_B[1]*10+A*i_B[0]*100<<endl;
    return 0;
}