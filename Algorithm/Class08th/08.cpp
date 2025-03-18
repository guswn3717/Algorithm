#include<iostream>

#define SIZE 10

using namespace std;

int main()
{
	int arr[SIZE] = { 1, 1, 3, 1, 2, 3, 4, 4, 2, 5 }; //1112233445

	int a = 0;


	for (int i = 0; i <= SIZE; i++)
	{
		if (arr[i] >= a)
		{
			a = arr[i];
			cout << a;
		}
		else if (arr[i] <= a)
		{
			cout << arr[i];
		}
	}
	


	return 0;
}