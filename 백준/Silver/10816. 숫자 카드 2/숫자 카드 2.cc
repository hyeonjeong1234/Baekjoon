#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    vector<long long> sangs;
    vector<long long> gives;
    map<long long, int> results;
    int N, M;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        long long num;
        cin >> num;
        sangs.push_back(num);
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        long long num;
        cin >> num;
        gives.push_back(num);
    }
    vector <long long> gives_copy;
    for (int i = 0; i < M; i++)
    {
        gives_copy.push_back(gives[i]);
    }
    sort(gives_copy.begin(), gives_copy.end());
    for (int i = 0; i < N; i++)
    {
        if (binary_search(gives_copy.begin(), gives_copy.end(), sangs[i]))
        {
            results[sangs[i]]++;
        }
    }
    for (int i = 0; i < M; i++)
    {
        cout << results[gives[i]] << " ";
    }
}