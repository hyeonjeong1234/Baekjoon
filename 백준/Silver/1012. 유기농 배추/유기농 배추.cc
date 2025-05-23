#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void BFS(vector<vector<int>>& ground, int y_first, int x_first, int N, int M)
{
    queue<pair<int,int>> que;
    que.push(make_pair(y_first, x_first));
    while (!que.empty()) {
        ground[que.front().first][que.front().second] = 0;
        int x = que.front().second;
        int y = que.front().first;
        if (y - 1 >= 0)
        {
            
            if (ground[y - 1][x] == 1)
            {
                que.push(make_pair(y-1, x));
                ground[y - 1][x] = 0;
            }
           
        }
        if (x - 1 >= 0)
        {
            if (ground[y][x - 1] == 1)
            {
                que.push(make_pair(y, x - 1));
                ground[y][x - 1] = 0;
            }
        }
        if (x+1 < M)
        {
            if (ground[y][x + 1] == 1)
            {
                que.push(make_pair(y, x + 1));
                ground[y][x + 1] = 0;
            }
        }
        if (y + 1 < N)
        {
            if (ground[y+1][x] == 1)
            {
                que.push(make_pair(y+1, x));
                ground[y+1][x] = 0;
            }
        }
        que.pop();
    }
    
}

int main()
{
    int T, M, N, K;
    cin >> T;
    for (int test_case = 0; test_case < T; test_case++)
    {
        int count = 0;
        cin >> M >> N >> K;
        vector<int> line(M, 0);
        vector<vector<int>> ground(N, line);
        for (int i = 0; i < K; i++)
        {
            int x, y;
            cin >> x >> y;
            ground[y][x] = 1;
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (ground[i][j] == 1) {
                    BFS(ground, i, j, N, M);
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}