#include<iostream>
using namespace std;

int gcd(int big, int small)
{
    if (small == 0) {
        cout << big << "\n";
        return big;
    }
    else
    {
        return gcd(small, big % small);
    }
}
int main()
{
    int num1, num2,gcd_re;
    cin >> num1 >> num2;
    gcd_re = gcd(num1, num2);
    cout << (num1 / gcd_re) * gcd_re * (num2 / gcd_re);
}