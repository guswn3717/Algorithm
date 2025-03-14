#define SIZE 10

#include <iostream>

using namespace std;

int main()
{
	int arr[SIZE] = { 40, 911, 33, 718, 80, 240, 370, 32, 86, 34 };

	int temp = 0;

    for (int i = 0; i < SIZE - 1; i++) 
    {
        for (int j = 0; j < SIZE - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

	return 0;
}