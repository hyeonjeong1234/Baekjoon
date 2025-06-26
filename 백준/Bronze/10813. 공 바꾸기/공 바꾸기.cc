#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int N, M;
    cin>>N>>M;
    vector<int> basket;
    for(int i = 0;i<N;i++)
    {
        basket.push_back(i+1);
    }
    for(int k = 0;k<M;k++)
    {
        int i, j;
        cin>>i>>j;
        int tmp;
        tmp = basket[i-1];
        basket[i-1] = basket[j-1];
        basket[j-1] = tmp;
    }
    for(int i = 0;i<N;i++)
    {
        cout<<basket[i]<<" ";
    }
}