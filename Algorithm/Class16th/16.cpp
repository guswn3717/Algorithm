#include<iostream>
#include<vector>
#include<queue>

#define SIZE 8

using namespace std;

class Node
{
private:
	queue<int> queue;
	
	bool visited[SIZE];
	vector<int> adjacencyList[SIZE];

public:
	Node()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}

	void insert(int i, int j)
	{
		adjacencyList[i].push_back(j);
		adjacencyList[j].push_back(i);
	}

	void search(int start)
	{
		queue.push(start);

		visited[start] = true;

		while (queue.empty() == false)
		{
			int x = queue.front();

			queue.pop();

			cout << x << " ";

			for (int i = 0; i < adjacencyList[x].size(); i++)
			{
				int next = adjacencyList[x][i];

				if (visited[next] = true)
				{
					queue.push(next);

					visited[next] = true;
				}
			}
		}
	}
};

int main()
{
#pragma region �ʺ� �켱 Ž��(Breadth First Search)
	//���� ������ �湮�� �� ���� ������ ������ ��� �������� �켱 �湮�ϴ� ����Դϴ�

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

	//�� �̻� �湮���� ���� ������ ���� ������ �湮���� ���� ��� �����鿡 ���ؼ��� �ʺ� �켱 Ž���� �����մϴ�
#pragma endregion
	return 0;
}