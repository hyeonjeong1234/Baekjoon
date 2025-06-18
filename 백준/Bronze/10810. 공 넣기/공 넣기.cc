#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> baskets(N + 1, 0);
    for (int a = 0; a < M; a++)
    {
        int i, j, k;
        cin >> i >> j >> k;
        for (int z = i; z <= j; z++)
        {
            baskets[z] = k;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        cout << baskets[i] << " ";
    }
    return 0;
}