#include<iostream>
#include<string>
using namespace std;

int main()
{
    int indx, num;
    for(int i = 0;i<3;i++)
    {
        string a;
        cin>>a;
        if(a != "FizzBuzz"&&a!="Fizz"&&a!="Buzz")
        {
            indx = i;
            num = stoi(a);
        }
    }
    if(indx==0)
    {
        if((num+3)%5 == 0 && (num+3)%3 ==0 )
            cout<<"FizzBuzz";
        else if((num+3)%3 == 0)
            cout<<"Fizz";
        else if((num+3)%5 == 0)
            cout<<"Buzz";
        else
            cout<<num+3;
    }
    else if(indx==1)
    {
        if((num+2)%5 == 0 && (num+2)%3 ==0 )
            cout<<"FizzBuzz";
        else if((num+2)%3 == 0)
            cout<<"Fizz";
        else if((num+2)%5 == 0)
            cout<<"Buzz";
        else
            cout<<num+2;
    }
    if(indx==2)
    {
        if((num+1)%5 == 0 && (num+1)%3 ==0 )
            cout<<"FizzBuzz";
        else if((num+1)%3 == 0)
            cout<<"Fizz";
        else if((num+1)%5 == 0)
            cout<<"Buzz";
        else
            cout<<num+1;
    }
    return 0;
}