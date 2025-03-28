#include <iostream>
#include <vector>

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
        }
    }

    void insert(int u, int v)
    {
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u); // 무방향 그래프인 경우
    }

    void Search(int start)
    {
        visited[start] = true;
        cout << start << " ";

        for (int i = 0; i < adjacencyList[start].size(); i++)
        {
            int next = adjacencyList[start][i];
            if (!visited[next])
            {
                Search(next);
            }
        }
    }
};

int main()
{
#pragma region 깊이 우선 탐색 (Depth First Search)
    Node<int> node;

    node.insert(1, 2);
    node.insert(1, 3);
    node.insert(2, 3);
    node.insert(2, 4);
    node.insert(2, 5);
    node.insert(3, 6);
    node.insert(3, 7);
    node.insert(4, 5);
    node.insert(6, 7);

    cout << "DFS 시작 노드 1: ";
    node.Search(1);
    cout << endl;

#pragma endregion

    return 0;
}
 