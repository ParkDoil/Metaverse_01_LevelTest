// 3번문제. 다음의 형태로 * 을 출력하는 코드를 구현 하시오. ( 피라미드형 별찍기)
#include "Header.h"

int main()
{
    // 5층 고정..!
    for (int floor = 0; floor < 5; ++floor)
    {
        // 빈공간 출력
        for (int i = 4; i > 0 + floor; --i)
        {
            cout << " ";
        }

        // 별 출력
        for (int j = 0; j < floor * 2 + 1; ++j)
        {
            cout << "*";
        }

        // 층 나누기
        if (floor + 1 != 5)
        {
            cout << endl;
        }
    }

    return 0;

}