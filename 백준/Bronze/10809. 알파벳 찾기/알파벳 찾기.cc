#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr(123, -1);
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (arr[a[i]] == -1)
            arr[a[i]] = i;
    }
    for (int i = 97; i <= 122; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}