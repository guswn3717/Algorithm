#include <iostream>

#define SIZE 8

using namespace std;

template <typename T>
class Node
{
private:
	bool visited[SIZE];
	vector<T> adjacencyList[SIZE];

public:
	Node()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
			adjacencyList[i] = NULL;
		}
	}

	void Search(int start)
	{

	}
};

int main()
{
#pragma region ���� �켱 Ž�� (Depth First Search)
	// root ��忡������ ���� �б�� �Ѿ�� ���� �ش� �б⸦ �Ϻ��ϰ� Ž���ϴ� ����Դϴ�
	
	// ���� �ּ� Ž���� �ڷ� ���� (Stack)�� Ȱ���մϴ�

	// 1. ���� ��带 ���ÿ� �ְ� �湮 ó���� �մϴ�.

	// 2. ������ �ֻ�� ��忡 �湮���� ���� ���� ��尡 ������ �� ��带 ���ÿ� �ְ� �湮 ó���մϴ�

	// 3. �湮���� ���� ���� ��尡 ������ ���ÿ��� �ֻ�ܿ� �ִ� ��带 �����ϴ�

	//4. ���̻� 2���� ������ ������ �� ���� ������ �ݺ��մϴ�

	Node node;

	node.insert(1, 2);
	node.insert(1, 3);

	node.insert(2, 3);
	node.insert(2, 4);
	node.insert(2, 5);

	node.insert(3, 6);
	node.insert(3, 7);

	node.insert(4, 5);
	node.insert(6, 7);


#pragma endregion

	return 0;
}