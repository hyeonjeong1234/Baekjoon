#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N, M;
    vector<int> nums;
    cin >> N >> M;
    for (int k = 0; k < N; k++)
    {
        int num;
        cin >> num;
        if (k == 0)
        {
            nums.push_back(num);
        }
        else
        {
            nums.push_back(nums[k - 1] + num);
        }
    }
    for (int k = 0; k < M; k++)
    {
        int i, j;
        cin >> i >> j;
        if (i - 2 >= 0)
            cout << nums[j - 1] - nums[i - 2] << "\n";
        else
            cout << nums[j - 1] << "\n";
    }
}
//누적합 알고리즘
// 0~k까지의 누적합을 저장해놓고 0~j-1까지 누적합 - 0~i-1까지 누적합으로 구하기!=>연산한번으로 가능