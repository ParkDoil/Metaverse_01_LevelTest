// 3������. ������ ���·� * �� ����ϴ� �ڵ带 ���� �Ͻÿ�. ( �Ƕ�̵��� �����)
#include "Header.h"

int main()
{
    // 5�� ����..!
    for (int floor = 0; floor < 5; ++floor)
    {
        // ����� ���
        for (int i = 4; i > 0 + floor; --i)
        {
            cout << " ";
        }

        // �� ���
        for (int j = 0; j < floor * 2 + 1; ++j)
        {
            cout << "*";
        }

        // �� ������
        if (floor + 1 != 5)
        {
            cout << endl;
        }
    }

    return 0;

}