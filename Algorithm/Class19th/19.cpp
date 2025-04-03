#include <iostream>
#include <vector>
#include <algorithm>

#define SIZE 8

using namespace std;

class Kruskal
{
private:
    class Edge
    {
    private:
        int vertexX;
        int vertexY;
        int weight;

    public:
        Edge(int vertexX, int vertexY, int weight)
        {
            this->vertexX = vertexX;
            this->vertexY = vertexY;
            this->weight = weight;
        }

        int vertexX() { return vertexX; }
        int vertexY() { return vertexY; }
        int Weight() { return weight; }

        const bool& operator < (const Edge& edge)
        {
            return weight < edge.weight;
        }
    };

    int cost;
    int parent[SIZE];

    vector<Edge> nodeList;

public:
    Kruskal()
    {
        cost = 0;

        for (int i = 0; i < SIZE; i++)
        {
            parent[i] = i;
        }
    }

    void insert(int vertexX, int vertexY, int weight)
    {
        Edge edge(vertexX, vertexY, weight);

        nodeList.push_back(edge);
    }
    
    void calculate()
    {
        sort(nodeList.begin(), nodeList.end());

        for (int i = 0; i < nodeList.size(); i++)
        {
            if (same(nodeList[i].vertexX(), nodeList[i].vertexY()))
            {
                cost += nodeList[i].Weight();

                Uniton(nodeList[i].vertexX(), nodeList[i].vertexY());
            }
        }

        cout << "Cost : " << cost << endl;
    }
};

int main()
{
#pragma region �ּ� ���� Ʈ��
    // �׷����� ��� ������ �����ϸ鼭 ����Ŭ�� �������� �ʴ� 
    // �κ� �׷�����, �׷����� ��� ������ �ּ� ������� �����ϴ� Ʈ���Դϴ�.

    // �׷����� ������ ���� n���� ��, ������ ���� n-1�� �Դϴ�.

    Kruskal kruskal;

    kruskal.insert(1, 7, 10);
    kruskal.insert(4, 7, 14);

    kruskal.insert(1, 4, 30);
    kruskal.insert(2, 4, 25);

    kruskal.insert(1, 2, 64);
    kruskal.insert(1, 5, 19);

    kruskal.insert(5, 7, 73);
    kruskal.insert(2, 5, 61);

    kruskal.insert(5, 3, 22);
    kruskal.insert(5, 6, 48);
    kruskal.insert(3, 6, 36);

#pragma endregion

    return 0;
}