#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;


int main() {
	int result[6] = {};
	for (int i = 0; i < 6; i++)
	{
		cin >> result[i];
	}
	result[0] = 1-result[0];
	result[1] = 1 - result[1];
	result[2] = 2 - result[2];
	result[3] = 2 - result[3];
	result[4] = 2 - result[4];
	result[5] = 8 - result[5];
	for (int i = 0; i < 6; i++)
	{
		cout<< result[i]<< " ";
	}
	return 0;
} 