#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
   map<string, string> note;
   int N,M;
   cin>>N>>M;
    for(int i = 0;i<N;i++)
    {
        string site,pw;
        cin>>site>>pw;
        note.insert({site,pw});
    }
    for(int i = 0;i<M;i++)
    {
        string search;
        cin>>search;
        cout<<note[search]<<"\n";
    }
    return 0;
}