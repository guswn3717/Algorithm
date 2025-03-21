#define SIZE 6

#include<iostream>

using namespace std;

void QuickSort(int list[], int start, int end)
{
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
}

int main()
{
#pragma region �� ����
	//������ȹ���� ���� �������� �������� �迭�� ������ �� �ʿ��� ���������� ���� ������ 
	// ��ġ�ϰ� �ϰ� �ٸ� �� �ʿ��� ���������� ū ������ ��ġ�ϵ��� �����մϴ�
	
	int list[SIZE] = { 1, 4 ,3, 2, 5, 6 };

	int start = 0;
	int end = 0;

	QuickSort(list, start, end);

	//�������� ���� �迭�� ���� ��������� �� ������ ȣ���Ͽ� ��� �迭�� �⺻ �迭�� �� �� ���� �ݺ��ϸ鼭 �����ϴ� �˰��� �Դϴ�
#pragma endregion

	return 0;
}