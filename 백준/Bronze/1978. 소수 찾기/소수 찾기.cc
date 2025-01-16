#include <iostream>
using namespace std;
int main()
{
    int N, n;
    int result = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count ++;
            }
           
        }
       if(count == 2) 
           result++;
    }
    cout<<result;

    return 0;
}