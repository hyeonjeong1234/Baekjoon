#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<long long> calc(101,0);
    calc[0] = 0;
    calc[1] = 1;
    calc[2] = 1;
    calc[3] = 1;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        for (int j = 1; j <= n; j++)
        {
            if (calc[j]) {
                continue;
            }
            else
            {
                calc[j] = calc[j - 3] + calc[j - 2];
            }


        }
        cout << calc[n] << endl;
    }

}