#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool cmp(pair<int,pair<int,string>> a, pair<int,pair<int,string>> b)
{
    if(a.second.first == b.second.first)
    {
        return a.first<b.first;
    }
    else
        return a.second.first<b.second.first;
}
int main()
{
    vector<pair<int,pair<int,string>>> people;
    int N;
    cin>>N;
    for(int i = 0;i<N;i++)
    {
        int age;
        string name;
        pair<int,pair<int,string>> person;
        cin>>age>>name;
        person.first = i;
        person.second = make_pair(age,name);
        people.push_back(person);
    }
    sort(people.begin(),people.end(),cmp);
    for(int i = 0;i<N;i++)
    {
        cout<<people[i].second.first<<" "<<people[i].second.second<<"\n";
    }
    return 0;
}