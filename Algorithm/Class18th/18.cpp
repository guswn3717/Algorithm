#include<iostream>

#define SIZE 6

int parent[SIZE];

using namespace std;

//Root Node를 찾는 함수

//배열의 인덱스와 값이 같다면 Root Node 발견

//부모 노드이 번호를 전달하면서, Root Node를 찾을 때까지

//재귀 호출을 반복합니다

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
#pragma region 유니온 파인드
	//여러 노드가 존재할 때 어떤 노드가 다른 노드와
	//연결되어 있는 지 확인하는 알고리즘 입니다.

	//union : 특정한 두 개의 노드를 같은 집합으로 합치는 연산입니다.

	//find : 특정한 노드가 어느 집합에 있는지 확인하는 연산입니다.

	int list[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		list[i] = i;
	}

#pragma endregion

	return 0;
}