#define SIZE 10

#include<iostream>

using namespace std;

int main()
{
    int arr[SIZE] = { 40, 911, 33, 718, 80, 240, 370, 32, 86, 34 };

    for (int i = 1; i < SIZE; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
