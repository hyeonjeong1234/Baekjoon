#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    int num;
    cin >> T;
    vector<int> A(1,0);
    A.push_back(1);
    A.push_back(2);
    A.push_back(4);
    for (int i = 4; i < 12; i++)
    {
        A.push_back(A[i - 1] + A[i - 2] + A[i - 3]);
    }
    for (int i = 0; i < T; i++)
    {
        cin >> num;
        cout << A[num]<<'\n';
    }

    return 0;
}