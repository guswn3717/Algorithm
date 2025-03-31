#include <iostream>
#include <vector>
#include <queue>

#define SIZE 8  

using namespace std;

class Graph
{
private:
	int degree[SIZE];
	queue<int> queue;
	vector<int> adjacencyList[SIZE];

public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			degree[i] = 0;
		}
	}

	void insert(int vertex, int edge)
	{
		adjacencyList[vertex].push_back(edge);

		degree[edge]++;
	}

	void sort()
	{
		for (int i = 1; i < SIZE; i++)
		{
			if (degree[i] == 0)
			{
				queue.push(i);
			}
		}
	}
};

int main()
{
#pragma region ���� ����
	//������ �׷����� �����ϴ� �� �������� ���� ������ ��Ű��, ��� ������ ���ʴ�� �����ϴ� �˰����Դϴ�.

	//����Ŭ�� �ٻ��ϴ� ��� ���� ������ ������ �� �����ϴ�.

	//DAG(Diected Acylic Graph) : ����Ŭ�� �������� �ʴ� �׷���

	//�ð� ���⵵ o(V + E)

	//���� �����ϴ� ���

	//1.���� ������ 0�� ������ Queue�� �����մϴ�
	
	//2. Queue���� ���Ҹ� ���� ����� ��� ������ �����մϴ�

	//3. ���� ���� ���Ŀ� ���� ���� 0�� �� ������ Queue�� �����մϴ�

	//4. Queue�� ������� ������ 2�� ~ 3�� �۾��� �ݺ� �����մϴ�  

	Graph graph;

	graph.insert(1, 2);
	graph.insert(1, 5);

	graph.insert(2, 3);
	graph.insert(3, 4);

	graph.insert(4, 6);

	graph.insert(5, 6);

	graph.insert(6, 7);
	
#pragma endregion

	return 0;
}