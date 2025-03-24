#define SIZE 6

#include<iostream>

using namespace std;

void quick_sort(int list[], int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int pivot = start;

	int left = start + 1;

	int right = end;

	while (left <= right)
	{
		//left�� end���� �۰ų� ���� list[left]��
		//list[pivot]���� �۰ų� ���� ������ �ݺ��մϴ�
		while (left <= end && list[pivot] >= list[left])
		{
			left++;
		}

		while (right > start && list[pivot] <= list[right])
		{
			right--;
		}

		if (left > right)
		{
			std::swap(list[pivot], list[right]);
		}
		else
		{
			std::swap(list[left], list[right]);
		}
	}


	quick_sort(list, start, right - 1);
	quick_sort(list, right + 1, end);
}

int main()
{
#pragma region �� ����
	//������ȹ���� ���� �������� �������� �迭�� ������ �� �ʿ��� ���������� ���� ������ 
	// ��ġ�ϰ� �ϰ� �ٸ� �� �ʿ��� ���������� ū ������ ��ġ�ϵ��� �����մϴ�
	
	int list[SIZE] = { 5,4,6,2,1,3 };

	quick_sort(list, 0, SIZE - 1);

	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}

	//�������� ���� �迭�� ���� ��������� �� ������ ȣ���Ͽ� ��� �迭�� �⺻ �迭�� �� �� ���� �ݺ��ϸ鼭 �����ϴ� �˰��� �Դϴ�
#pragma endregion

	return 0;
}