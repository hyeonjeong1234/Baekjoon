#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void add(int x, vector<int>& S)
{
    if (!binary_search(S.begin(), S.end(), x))
    {
        S.push_back(x);
    }
}
void remove(int x, vector<int>& S)
{
    if(binary_search(S.begin(), S.end(), x))
        S.erase(find(S.begin(), S.end(), x));
}
void check(int x, vector<int>& S)
{
    if (binary_search(S.begin(), S.end(), x))
    {
        cout << 1 << "\n";
    }
    else
        cout << 0 << "\n";
}
void toggle(int x, vector<int>& S)
{
    if (binary_search(S.begin(), S.end(), x))
    {
        S.erase(find(S.begin(), S.end(), x));
    }
    else {
        S.push_back(x);
    }
}
void all(vector<int>& S)
{
    S.clear();
    for (int i = 0; i < 20; i++)
    {
        S.push_back(i + 1);
    }
}
void empty(vector<int>& S)
{
    S.clear();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    vector<int>S;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string func;
        cin >> func;
        if (func == "add")
        {
            int x;
            cin >> x;
            add(x, S);
        }
        else if (func == "remove")
        {
            int x;
            cin >> x;
            remove(x, S);
        }
        else if (func == "check")
        {
            int x;
            cin >> x;
            check(x, S);
        }
        else if (func == "toggle")
        {
            int x;
            cin >> x;
            toggle(x, S);
        }
        else if (func == "all")
        {
            all(S);
        }
        else
            empty(S);
    }
    return 0;
}