#include <iostream>

using namespace std;

int Fibonacci(int n)
{
	if (n <= 1)
	{
		return n;
	}

	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
#pragma region ���� ��ȹ��
	//Ư�� ���������� ���� ���ϱ� ���� �װͰ� �ٸ� ���������� ���� �̿��ؼ� ȿ�������� ���� ���ϴ� �˰����Դϴ�

	//(Overlapping Subproblems) ��ġ�� �κ� ����
	//������ ���� �������� �ݺ��Ͽ� ��Ÿ���� ��츦 �ǹ��մϴ�

	//(Optimal Substructure) ���� �κ� ����
	//�κ� ������ ������ ������� ����Ͽ� ��ü ������ ����ȭ

	//�޸������̼� (Memoization)
	// ���α׷��� ������ ����� �ݺ��ؾ��� ��, ������ ����� ���� �޸𸮿� ���������ν� ������ �����
	// �ݺ� �����ϴ� �۾��� �����Ͽ� ���α׷��� ���� �ӵ��� ����Ű�� ����Դϴ�

	int n = 0;
	cout << "�Ǻ���ġ ���° ���� ���ұ��? : " ;
	cin >> n;

	cout << "F(" << n << ") = " << Fibonacci(n) << endl;
#pragma endregion

	return 0;
}