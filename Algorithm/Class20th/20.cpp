#include<iostream>

using namespace std;

#define SIZE 6
#define INFINITY 10000000

class Dijkstra
{
private:
	int node[SIZE][SIZE] =
	{
		{0,2,5,1,INFINITY,INFINITY},
		{2,0,3,2,INFINITY,INFINITY},
		{5,3,0,3,1,5},
		{1,2,3,0,1,INFINITY},
		{INFINITY,INFINITY,1,1,0,2},
		{INFINITY,INFINITY,5,INFINITY,2,0},
	};

public:
	Dijkstra()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
			distance[i] = 0;
		}

		void calculate(int start)
		{

		}
	}
};

int main()
{
#pragma region ���ͽ�Ʈ�� �˰���
	//���������κ��� ��� �������� ���� �Ÿ��� ���ϴ¾˰��� �Դϴ�

	//1. �Ÿ� �迭�� weight[���۳��]�� ����� �ʱ�ȭ �մϴ�

	//2. �������� �湮 ó���մϴ�

	//3. �Ÿ� �迭���� �ּ� ��� ��带 ã�� �湮 ó���մϴ�

	//4.�ּ� ��� ��带 ���İ� �� ����ؼ� �� �迭�� �����մϴ�
	//�� �̹� �湮�� ���� �����մϴ�

	//5. ��� ��带 �湮�� �� ���� 3~4�� �ݺ��մϴ�

	//�湮���� �ʴ� ��� �߿��� ���� ���� �Ÿ��� ���� ��带 �湮�ϰ�,
	// �� ���� ����� �ٸ� �������� �Ÿ��� ����մϴ�
#pragma endregion

	return 0;
}