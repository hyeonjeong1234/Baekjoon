#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include <ctime>
using namespace std;
bool cmp(string a, string b)
{
    if (a.size() == b.size())
        return a < b;//여기에 비교기준 => a와 b의 사전순을 비교해서 < a->b내림차순(작은게 앞에오게) 정렬하시오
    return a.size() < b.size();//a의 크기와 b의 크기를 비교해서 a.size()<b.size()작은거에서 큰거순으로 정렬하시오
}


int main()
{

    clock_t start, finish;
    double duration;

    start = clock();

    /*실행 시간을 측정하고 싶은 코드*/

    int N;
    cin >> N;
    //string words[N];
    vector<string>words;
    //int length[N];
    vector<string>length;
    for (int i = 0; i < N; i++)
    {
        string word;
        cin >> word;
        words.push_back(word);
    }
    sort(words.begin(), words.end(),cmp);
    for (int i = 0; i < N; i++)
    {
        if (i != 0 && words[i] == words[i - 1])
            continue;
        else
            cout << words[i] << "\n";
    }
    
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
   // cout << duration << "초" << endl;
}