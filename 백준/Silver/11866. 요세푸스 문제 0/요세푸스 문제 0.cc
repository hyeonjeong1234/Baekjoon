#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N, K;
    int start = 0;
    vector<int> circle, remove;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        circle.push_back(i + 1);
    }
    while (circle.size() != 0)
    {
        if (circle.size() == 1)
        {
            remove.push_back(circle[0]);
            circle.erase(circle.begin());
            break;
        }
        else if (start > circle.size() - 1)
            start = 0;
        
        for (int i = 1; i < K; i++)
        {
            if (((start + 1) > circle.size() - 1))
            {
                    start = 0;
            }
            else
                start++;

       }
        remove.push_back(circle[start]);
        circle.erase(circle.begin() + start);
    }
    cout << "<";
    for (int i = 0; i < N; i++)
    {
        cout << remove[i];
        if(i!=N-1)
            cout << ", ";
    }
    cout << ">";
    return 0;
}