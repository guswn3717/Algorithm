#include<iostream>

using namespace std;

int euclid(int x, int y)
{
    // 1. 두 개의 자연수 x, y가 있습니다.
    //    그리고 x를 y로 나눈 나머지를 R이라 합니다
    int R = x % y;

    // 2. R이 0이라면 x와 y의 최대공약수는 y가 됩니다
    if (R == 0)
        return y;

    // 3. R이 0이 아니라면, x와 y의 최대공약수는 y와 R의
    //    최대 공약수와 같기 때문에 x에는 y 그리고 y에는 R
    //    을 대입한 후 1번으로 돌아갑니다.
    else
        euclid(y, R);
}

int main()
{
#pragma region 최대 공약수
    // 2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로 두 수가 서로 
    // 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘 입니다
    int a, b;

    cout << "최대 공약수를 구할 두 수를 입력하시오" << endl;
    cout << "첫 번째 숫자 : ";
    cin >> a;
    cout << "두 번째 숫자 : ";
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
            cout << "최대공약수 : " << i;
            check = true;
            break;   
        }
    }

    if (check = false)
    {
        cout << "최대공약수 : " << 1 << endl;
    }*/

#pragma endregion

    return 0;
}
