#include<iostream>
#include<stack>
#include<vector>
using namespace std;
//1~n까지 숫자를 스택에 푸시 팝 하면서 입력으로 주어진 배열 만들기
int main()
{
    stack<int> stack;
    int n,j=0;
    vector<int>a;
    vector<char> result;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int num;
        cin>>num;
        a.push_back(num);
    }
    for(int i = 0;i<n;i++)
    {
        
        for(j;j<a[i];j++)
        {
            stack.push(j+1);
            result.push_back('+');
        }
        if(stack.top() == a[i])
        {
            stack.pop();
            result.push_back('-');
        }
        else{
            result[0] = 'N';
            cout<<"NO";
            break;
        }    
    }
    if(result[0]!='N'){
        for(int i = 0;i<result.size();i++)
        {
            cout<<result[i]<<"\n";
        }
    }
    return 0;
}