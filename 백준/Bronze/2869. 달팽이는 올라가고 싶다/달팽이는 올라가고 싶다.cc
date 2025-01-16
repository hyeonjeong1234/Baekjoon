#include<iostream>
using namespace std;
int main()
{
    int A;
    int B;
    int V;
    cin >>A >>B>>V;
    int Day;
    Day = (V-B-1)/(A-B)+1;
    cout<<Day;
    return 0;
}