// 2������. 1000�̸��� 3�� �¼��� ���ʴ�� ����ϴ� �ڵ带 ���� �Ͻÿ�.
#include "Header.h"

int main()
{
	int N = 3;
	int check = 1; // ���� 3�� ���������� Ȯ���ϴ� ����
	while (N < 1000)
	{
		cout << "3�� " << check << "���� : " << N << endl;
		N *= 3; // 3�� �¼��̹Ƿ� *3
		++check; // �������� 1�� �����ؾ� �ϹǷ�
	}

	return 0;
}