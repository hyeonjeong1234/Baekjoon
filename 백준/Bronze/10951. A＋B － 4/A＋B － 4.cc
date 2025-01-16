#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int A, B;
    
    while (!(cin >> A >> B).eof())
    {
        //cin >> A >> B;

        if (A == 0 && B == 0)
        {
            break;
        }
        else
            cout << A + B << '\n';
    }
    return 0;
}
