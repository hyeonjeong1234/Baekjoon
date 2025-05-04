#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, card_size, start_indx=0;

    vector<int> cards;
    cin >> N;
    card_size = N;
    for (int i = 0; i < N; i++)
    {
        cards.push_back(i + 1);
    }

    while (card_size != 1)
    {
        card_size--;
        cards.push_back(cards[start_indx+1]);
        start_indx++;
        start_indx++;
    }

    cout << cards[start_indx];
}