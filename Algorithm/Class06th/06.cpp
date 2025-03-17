#include<iostream>

using namespace std;

int euclid(int x, int y)
{
    // 1. �� ���� �ڿ��� x, y�� �ֽ��ϴ�.
    //    �׸��� x�� y�� ���� �������� R�̶� �մϴ�
    int R = x % y;

    // 2. R�� 0�̶�� x�� y�� �ִ������� y�� �˴ϴ�
    if (R == 0)
        return y;

    // 3. R�� 0�� �ƴ϶��, x�� y�� �ִ������� y�� R��
    //    �ִ� ������� ���� ������ x���� y �׸��� y���� R
    //    �� ������ �� 1������ ���ư��ϴ�.
    else
        euclid(y, R);
}

int main()
{
#pragma region �ִ� �����
    // 2���� �ڿ��� �Ǵ� ������ �ִ� ������� ���ϴ� ������� �� ���� ���� 
    // ���� ���� ����� ���ϴ� ���� ���� �˰��� �Դϴ�
    int a, b;

    cout << "�ִ� ������� ���� �� ���� �Է��Ͻÿ�" << endl;
    cout << "ù ��° ���� : ";
    cin >> a;
    cout << "�� ��° ���� : ";
    cin >> b;

    int gcd = euclid(a, b);

    cout << gcd;

    /*int a = 156;
    int b = 60;

    bool check = false;

    for (int i = a; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << "�ִ����� : " << i;
            check = true;
            break;   
        }
    }

    if (check = false)
    {
        cout << "�ִ����� : " << 1 << endl;
    }*/

#pragma endregion

    return 0;
}
