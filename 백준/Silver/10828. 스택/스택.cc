#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int> stack;
void push(int n)
{
    stack.push_back(n);
}
int pop()
{
    int pop_num;
    if (stack.size() == 0)
        return -1;
    else {
        pop_num = stack.back();
        stack.erase(stack.begin()+stack.size()-1);
        return pop_num;
    }
}
int size()
{
    return stack.size();
}
bool empty()
{
    if (stack.size() == 0)
        return true;
    else
        return false;
}
int top()
{
    if (stack.size() == 0)
        return -1;
    else
        return stack.back();
}
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string str, func, num;
        cin >> func;
        // getline(cin, str);
         //func = str.substr(0,str.find(" "));
         //if(str.find(" ")!=str.end())
         //{
           //  num = str.substr(str.find(" ")+1,str.length());
         //}
         //number = stoi(num);
           if (func == "push")
        {
            int number;
            cin >> number;
            push(number);
        }
        else if (func == "pop")
        {
            cout << pop()<<"\n";
        }
        else if (func == "size")
        {
            cout << size()<<'\n';
        }
        else if (func == "empty")
        {
            cout << empty()<<"\n";
        }
        else if (func == "top")
        {
            cout << top()<<'\n';
        }

    }
    return 0;
}