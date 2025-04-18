#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int arr[51][51][51];
int w(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 1;
    }
    if (arr[a][b][c])//이미 계산한 값이 있을 때는 계산된 값 이용
    {
        return arr[a][b][c];
    }
    else if (a > 20 || b > 20 || c > 20)
    {
        arr[a][b][c] = w(20, 20, 20);
        return arr[a][b][c];
    }
    else if ((a < b) && (b < c))
    {
        arr[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        return arr[a][b][c];
    }
    else
    {
        arr[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
        return arr[a][b][c];
    }
}

int main()
{
    int a=0,b=0,c=0,result=0;

    while (1)
    {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
            break;
        result = w(a, b, c);
        cout <<"w("<<a<<", "<<b<<", "<<c<<") = " <<result<<"\n";
    }
	return 0;
}