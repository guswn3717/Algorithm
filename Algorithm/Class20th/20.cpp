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
#pragma region 다익스트라 알고리즘
	//시작점으로부터 모든 노드까지의 최초 거리를 구하는알고리즙 입니다

	//1. 거리 배열에 weight[시작노드]의 값들로 초기화 합니다

	//2. 시작점을 방문 처리합니다

	//3. 거리 배열에서 최소 비용 노드를 찾고 방문 처리합니다

	//4.최소 비용 노드를 거쳐갈 지 고민해서 고리 배열을 갱신합니다
	//단 이미 방문한 노드는 제외합니다

	//5. 모든 노드를 방문할 때 까지 3~4번 반복합니다

	//방문하지 않는 노드 중에서 가장 작은 거리를 가진 노드를 방문하고,
	// 그 노드와 연결된 다른 노드까지의 거리를 계산합니다
#pragma endregion

	return 0;
}