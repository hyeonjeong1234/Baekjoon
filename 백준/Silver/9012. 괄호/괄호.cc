#include<iostream>
#include<string>
#include<vector>
using namespace std;

void check_vp(string test)
{
	int left=0;
	string origin = test;
	int j = 0;
	for (int i = 0; i < test.size(); i++)
	{
		if (origin[0] == ')') {
			cout << "NO" << "\n";
			return;
		}
		else if (origin[j] == '(')
		{
			j++;
		}
		else {
				if (origin[j - 1] == '(') {
					origin.erase(origin.begin() + j - 1);
					origin.erase(origin.begin() + j - 1);
					j -= 1;
				}
				
			}
		
	}
	if (origin.size() != 0)
		cout << "NO" << "\n";
	else
		cout << "YES" << "\n";
}

int main()
{
	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string test;
		cin >> test;
		check_vp(test);
	}
	return 0;
}