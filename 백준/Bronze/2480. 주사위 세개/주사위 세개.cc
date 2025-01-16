#include<iostream>
using namespace std;

int main()
{
     int A ;
        int B;
        int C;
        cin >> A >> B >> C;
        if (A == B&&A == C&&B == C)
            cout << 10000 + (A * 1000);
        else if (A == B || A == C || B == C)
        {
            if (A == B || A == C)
                cout << 1000 + (A * 100);
            else
                cout << 1000 + (B * 100);
        }
        else
        {
            int Max;
            if (A > B) {
                if (A > C)
                    Max = A;
                else
                    Max = C;
            }
            else
            {
                if (B > C)
                    Max = B;
                else
                    Max = C;
            }
            cout << Max * 100;
        }
    return 0;
}