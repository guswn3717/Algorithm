#include<iostream>

#define SIZE 6

int parent[SIZE];

using namespace std;

//Root Node�� ã�� �Լ�

//�迭�� �ε����� ���� ���ٸ� Root Node �߰�

//�θ� ����� ��ȣ�� �����ϸ鼭, Root Node�� ã�� ������

//��� ȣ���� �ݺ��մϴ�

int find(int x)
{
	if (x == parent[x])
	{
		return x;
	}
	else
	{
		return parent[x] = find(parent[x]);
	}
}

void Union(int x, int y)
{
	x = find(x);
	y = find(y);

	if (x == y) { return; }

	if (x < y)
	{
		parent[y] = x;
	}
	else
	{
		parent[x] = y;
	}
}

int main()
{
#pragma region ���Ͽ� ���ε�
	//���� ��尡 ������ �� � ��尡 �ٸ� ����
	//����Ǿ� �ִ� �� Ȯ���ϴ� �˰��� �Դϴ�.

	//union : Ư���� �� ���� ��带 ���� �������� ��ġ�� �����Դϴ�.

	//find : Ư���� ��尡 ��� ���տ� �ִ��� Ȯ���ϴ� �����Դϴ�.

	int list[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		list[i] = i;
	}

#pragma endregion

	return 0;
}