#include <iostream>

using namespace std;

int main()
{
#pragma region 완전 탐색
	//가능한 모든 경우의 수를 탐색하면서 결과를 찾아내는 알고리즘입니다.

	int pin[3] = { 7, 1, 8 };
	
	
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				if (pin[0] == i && pin[1] == j && pin[2] == k)
				{
					cout << "[" << i << "]" << "[" << j << "]" << "[" << k << "]" << "\t완료!" << endl;
					return 0;
				}
				else
				{
					cout << "[" << i << "]" << "[" << j << "]" << "[" << k << "]" << "\t틀림!" << endl;
				}
			}
		}
	}

#pragma endregion
}