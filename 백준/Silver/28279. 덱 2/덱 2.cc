#include<iostream>
#include<deque>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    deque<int> dq;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int dir, x;
        cin >> dir;
        switch (dir)
        {
        case 1:
            cin >> x;
            dq.push_front(x);
            break;
        case 2:
            cin >> x;
            dq.push_back(x);
            break;
        case 3:
            if (!dq.empty()) {
                cout << dq[0] << "\n";
                dq.pop_front();
            }
            else
                cout << -1 << "\n";
            break;
        case 4:
            if (!dq.empty()) {
                cout << dq[dq.size()-1] << "\n";
                dq.pop_back();
            }
            else
                cout << -1 << "\n";
            break;
        case 5:
            cout << dq.size() << "\n";
            break;
        case 6:
            cout << dq.empty() << "\n";
            break;
        case 7:
            if (!dq.empty()) {
                cout << dq[0] << "\n";
            }
            else
                cout << -1 << "\n";
            break;
        case 8:
            if (!dq.empty()) {
                cout << dq[dq.size()-1] << "\n";
            }
            else
                cout << -1 << "\n";
            break;

        }

    }
    return 0;
}