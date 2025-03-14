#define SIZE 10

#include <iostream>

using namespace std;

int main()
{
	//오름차순 정렬
	//for문으로 사이즈 만큼 반복?
	//1번 숫자와 2번숫자를 비교
	//2번 숫자가 1번 숫자보다 더 크다면 2번과 1번의 자리를 교체
	//사이즈 만큼 반복
	//완성
	
	int arr[SIZE] = { 40, 911, 33, 718, 80, 240, 370, 32, 86, 34 };

	int temp = 0;

	for (int i = SIZE - 1; i > 0; i--)
	{
		for (int j = SIZE - 1; j > SIZE - 1 - i; j--)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i <= SIZE - 1; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}