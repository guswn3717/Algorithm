#include <iostream>

using namespace std;

int main()
{
#pragma region ���� Ž��
	//������ ��� ����� ���� Ž���ϸ鼭 ����� ã�Ƴ��� �˰����Դϴ�.

	int pin[3] = { 7, 1, 8 };
	
	
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				if (pin[0] == i && pin[1] == j && pin[2] == k)
				{
					cout << "[" << i << "]" << "[" << j << "]" << "[" << k << "]" << "\t�Ϸ�!" << endl;
					return 0;
				}
				else
				{
					cout << "[" << i << "]" << "[" << j << "]" << "[" << k << "]" << "\tƲ��!" << endl;
				}
			}
		}
	}

#pragma endregion
}