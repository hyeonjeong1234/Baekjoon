#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;


int main() {
	int x = 0;
	int num = 0;
	int line = 1;
	int mom = 1;
	int son = 1;
	cin >> x;
	while (x > 0)
	{
		num = 0;
		for (int i = 0; i < line; i++)
		{
			if (x == 0)
				break;
			else
				x = x - 1;
			num++;

		}
		if (x == 0)
			break;
		else
			line++;
	}
	if (line % 2 == 0)
	{
		son = 1;
		mom = line;
		if (num == 1)
			cout << "1/" << line;
		else
		{
			for (int i = 0; i < num - 1; i++)
			{
				son += 1;
				mom -= 1;
			}
			cout << son << "/" << mom;
		}

	}
	else if (line == 1)
	{
		cout << "1/1";
	}
	else
	{
		son = line;
		mom = 1;
		if (num == 1)
			cout << line << "/1";
		else
		{
			for (int i = 0; i < num - 1; i++)
			{
				son -= 1;
				mom += 1;
			}
			cout << son << "/" << mom;
		}
	}
	return 0;
} 