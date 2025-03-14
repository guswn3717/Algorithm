#define SIZE 10

#include<iostream>

using namespace std;

int main()
{
	int arr[SIZE] = { 40, 911, 33, 718, 80, 240, 370, 32, 86, 34 };

	int key = 0;
    

    for (int i = 0; i < SIZE - 1; i++)
    {
        if (arr[i + 1] <= arr[i])
        {
            key = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = key;
        }
        
        if(key > arr[i + 1]);

    }
    //»ğÀÔÁ¤·Ä
    
	return 0;
}