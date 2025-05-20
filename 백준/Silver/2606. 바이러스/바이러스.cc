#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    int N, pair,virus = 0;
    cin >> N >> pair;
    vector<vector<int>> arr(N+1);
    vector<bool> visited(N + 1,0);
    queue<int> search;
    vector<int> nodes;
    for (int i = 0; i < pair; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[b].push_back(a);
        arr[a].push_back(b);
    }
    search.push(1);
    visited[1] = 1;
    nodes.push_back(1);
    while (!search.empty())
    {
        int thisnode = search.front();
        if (arr[thisnode].size()!=0)
        {
           
            for (int i = 0; i < arr[thisnode].size(); i++)
            {
               
                if(visited[arr[thisnode][i]]==0){
                    visited[arr[thisnode][i]] = 1;
                    search.push(arr[thisnode][i]);
                    virus++;
                    nodes.push_back(arr[thisnode][i]);
                   
                }
            }
        }
        search.pop();
    }
    cout << virus;
    return 0;
}