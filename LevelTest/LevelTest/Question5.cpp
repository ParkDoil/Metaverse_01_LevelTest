//5������. �ζ� ��ȣ �����⸦ ���� �Ͻÿ�
//�ִ밪�� ���� ���� �Է��ϸ� �ߺ����� �ʴ� ���ڸ� ���� ���� ���� ��ŭ ���

// �� ���� �ؾ� �� �� : �ʹ� �������������� �����ϰ� �־ ��ü���������� �����ϰ� �����غ���
#include "Header.h"

int main()
{
	srand(time(NULL));
	int maxNum;
	int numCount;
	int countCheck = 0;

	cout << "�ִ� ��ȣ �� : ";
	cin >> maxNum;
	cout << "���� ���� �� : ";
	cin >> numCount;

	int Lotto[10000] = { 0, };

	while (countCheck < numCount) // �迭�� ���� ���� ��ŭ ���� ����ִ� �ݺ���
	{
		int randomNum = rand() % maxNum + 1;
		for (int i = 0; i < countCheck;)
		{
			if (Lotto[i] == randomNum) // ���� �̹� �ִ� ���ڶ�� �ٽ� ���� ����
			{
				randomNum = rand() % maxNum + 1;
				i = 0;
			}
			else // �ִ� ���ڰ� �ƴϸ� �ݺ��� ���� �ϳ� ����
			{
				++i;
			}
		}
		Lotto[countCheck] = randomNum;
		++countCheck;
	}

	// ���
	for (int i = 0; i < numCount; ++i)
	{
		cout << Lotto[i] << "\t";
		if (i + 1 % 10 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
	

	return 0;
}