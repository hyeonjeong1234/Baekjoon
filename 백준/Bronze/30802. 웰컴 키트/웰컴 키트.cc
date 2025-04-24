#include<iostream>
using namespace std;
int main()
{
    unsigned int N;
    unsigned int T_size[6];
    unsigned P, T, T_buy = 0;
    cin >> N;
    for (int i = 0; i < 6; i++)
    {
        cin >> T_size[i];
    }
    cin >> T >> P;
    unsigned int pen_buy_b, pen_buy_p;
    pen_buy_b = N / P;
    pen_buy_p = N % P;
    for (int i = 0; i < 6; i++)
    {
        if (T_size[i] == 0)
            continue;
        else if (T_size[i] / T == 0)
            T_buy++;
        else if (T_size[i] % T == 0)
            T_buy += T_size[i] / T;
        else
            T_buy += (T_size[i] / T) + 1;

    }
    cout << T_buy << "\n" << pen_buy_b << " " << pen_buy_p;
}