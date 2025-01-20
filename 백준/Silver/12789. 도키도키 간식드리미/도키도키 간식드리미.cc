#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	vector<int> stack;
	vector<int> line;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		int flag = 0;
		if (line.size()+1 == arr[i])
		{
			line.push_back(arr[i]);
			flag = 1;
		}
		if (stack.size()>0&& stack.back() == line.size() + 1)
		{
			while (1) {
				
				if (arr[i] == line.size() + 1)
					line.push_back(arr[i]);
				else if (stack.size() == 0||stack.back() != line.size() + 1 )
					break;
				else
				{
					
						line.push_back(stack.back());
						stack.pop_back();
					
					//stack.push_back(arr[i]);

				}
			}
			
		}
		else
		{
			if(flag!=1)
				stack.push_back(arr[i]);
		}

	}

	if (line.size() == n)
		cout << "Nice";
	else
		cout << "Sad";
	return 0;
}