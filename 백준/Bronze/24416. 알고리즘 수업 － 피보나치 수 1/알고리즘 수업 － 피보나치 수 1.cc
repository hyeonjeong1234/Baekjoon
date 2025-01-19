#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<int> f;
int result = 0;
int first_n;
int fib(int n) {
    
    if (n == 1 || n == 2)
    {
        return 1;
    }
        
    else
    {
        result++;
        return (fib(n - 1) + fib(n - 2));
    }
}

int fibonacci(int n) {
    f.push_back(0);
    f.push_back(1);
    f.push_back(1);
    for (int i = 2; i < n; i++) 
    {
        f.push_back(0);
        f[i]=f[i - 1] + f[i - 2];
        result++;
    }
    
        return f[n];
}

int main()
{
    int n;
    cin >> n;
    fib(n);
    cout << result+1<<' ';
    result = 0;
    fibonacci(n);
    cout << result;
	return 0;
}