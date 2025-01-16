#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int T, N, M;
    cin >> T;
	int a = 0;
   int num = 1;
   
   while(1) {

	   if (a == T)
	   {
		   break;
	   }
		cin >> N >> M;
		int cnt = 1;
		for (int i = M; i > M-N; i--)
		{
			num = num * i;

			 num = num / cnt++;
		}

		cout << num<<'\n';
		num = 1;
		a++;

	}
	return 0;
}