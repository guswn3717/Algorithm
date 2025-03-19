#include<iostream>

using namespace std;

int Find(int list[], int left, int right)
{
	if (left == right)
	{
		return list[left];
	}
	else
	{
		int leftMax = Find(list, left, (left + right) / 2);
		int rightMax = Find(list, (left + right) / 2 + 1, right);

		if (leftMax < rightMax)
		{
			return rightMax;
		}
		else
		{
			return leftMax;
		}
	}
}

int main()
{
#pragma region ���� ����
	//�־��� 2�� �̻��� �κ����� ������ ���� �� �� �κ� ������ ���� ���� ��� ȣ����
	// �̿��Ͽ� ����� ����,�� �����κ��� ��ü �����Ǵ��� ����س��� �˰��� �Դϴ�.

	//����(Divide) : �־��� ������ �� �� Ȥ�� �� �̻��� �������� ������

	//����(Conquer) : �������� ������ ��������� �ذ��ؼ� �������� ������ �� �̻� ����� ������ �ʿ���� ������ ��� �����մϴ�

	//����(Combine) : ����� �ذ��� �������� �����ؼ� ���� ������ �ش��� �����մϴ�

	int list[] = { 20, 15, 99, 1 };

	int size = sizeof(list) / sizeof(int);

	cout << Find(list, 0, size - 1);
#pragma endregion

	return 0;
}