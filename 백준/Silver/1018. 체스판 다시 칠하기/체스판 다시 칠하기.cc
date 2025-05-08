#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> wb = { "WBWBWBWB","BWBWBWBW" };
vector<string> bw = { "BWBWBWBW","WBWBWBWB" };
int check_wb(vector<string> board,int x, int y)
{
	int result = 0;
	string check;
	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
		{
			check = wb[0];
		}
		else
			check = wb[1];
		for (int j = 0; j < 8; j++)
		{
			if (board[x+i][y+j] != check[j])
			{
				result++;
			}
		}
	}
	return result;
}
int check_bw(vector<string> board, int x, int y)
{
	int result = 0;
	char front;
	string check;
	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
		{
			check = bw[0];
		}
		else
			check = bw[1];
		for (int j = 0; j < 8; j++)
		{
			if (board[x+i][y+j] != check[j])
			{
				result++;
			}
		}
	}
	return result;
}
int main()
{
	int N, M,answer=1000000;
	vector<string> board;
	int min_re;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		string line;
		cin >> line;
		board.push_back(line);
	}
	for (int i = 0; i + 7 <= N-1 ; i++)
	{
		for (int j = 0; j + 7 <= M-1; j++)
		{
			int a;

			a = min(check_bw(board, i, j), check_wb(board, i, j));
			if (answer > a)
				answer = a;
		}
	}
	cout << answer;
}