#define SIZE 10

#include <iostream>

using namespace std;

int main()
{
	//�������� ����
	//for������ ������ ��ŭ �ݺ�?
	//1�� ���ڿ� 2�����ڸ� ��
	//2�� ���ڰ� 1�� ���ں��� �� ũ�ٸ� 2���� 1���� �ڸ��� ��ü
	//������ ��ŭ �ݺ�
	//�ϼ�
	
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