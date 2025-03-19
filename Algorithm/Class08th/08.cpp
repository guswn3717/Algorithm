#include<iostream>

#define SIZE 10

using namespace std;

int main()
{
	int list[SIZE] = { 1, 1, 3, 1, 2, 3, 4, 4, 2, 5 };

	int  count[5] = { 0, };

	for (int i = 0; i < SIZE; i++)
	{
		count[list[i] - 1]++;
	}

	for (int i = 0; i < 5; i++)
	{
		if (list[i] != 0)
		{
			for (int j = 0; j < count[j]; j++)
			{
				cout << i + 1 << " ";
			}
		}
	}


	return 0;
}