#include<iostream>
using namespace std;

int n;
int num[11];
int math[4] = { 0, };
int max_value = -1000000000;
int min_value = 1000000000;

void findNum(int value, int where)
{
    if (where == n)
    {
        if (value > max_value)
        {
            max_value = value;
        }
        if (value < min_value)
        {
            min_value = value;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (math[i] > 0)
        {
            math[i]--;
            if (i == 0)
            {
                findNum(value + num[where], where + 1);
            }
            else if (i == 1)
            {
                findNum(value - num[where], where + 1);
            }
            else if (i == 2)
            {
                findNum(value * num[where], where + 1);
            }
            else if (i == 3)
            {
                findNum(value / num[where], where + 1);
            }
            math[i]++;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> math[i];
    }

    findNum(num[0], 1);

    cout << max_value << endl;
    cout << min_value << endl;

    return 0;
}