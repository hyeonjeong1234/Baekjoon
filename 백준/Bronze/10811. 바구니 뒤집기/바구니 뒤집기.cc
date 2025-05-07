#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool sort_down(int a, int b) {
    return a > b;
}
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> baskets;
    for (int i = 0; i < N; i++)
    {
        baskets.push_back(i + 1);
    }
    for (int k = 0; k < M; k++)
    {
        int start, end;
        cin >> start >> end;
        vector<int> reverse;
        for (int i = end-1;i>=start-1;i--)
        {
            reverse.push_back(baskets[i]);
        }
        for (int i = start - 1,j = 0; i < end; i++,j++)
        {
            baskets[i] = reverse[j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << baskets[i] << " ";
    }
}