//���� 8��. �����̹迭
// ���� �ľ��� ���
// 1. 2���� �迭���� �ð�������� ���鼭 ���� �ִٺ��� �������� ��ĭ��+ �ǰ�, ������������ ��ĭ��-�Ǵ°��� �̿��Ͽ� ��Ģ�ִ� �ݺ��� �ۼ�
// 2. ��Ģ �ִ� �ݺ������� ���ǿ� �°� ��ü �ݺ�
// 3. Ȧ���϶� �� ������ ��� ���� �ʴ� ���� �Է��� ����� Ȧ���� ���� �Ǻ��Ͽ� �߾ӿ� ������ �� �߰�


// ���� ���� �κ� : ���� �����ϴ�

// �����ؾ� �� �κ� :  ��ü������ ���, �迭 ũ�Ⱑ �����Ǿ��ִµ� �������� �����غ���
#include "Header.h"

int main()
{
	int snail[100][100] = { 0, };
	int size;
	int insertNum = 1; // ������ �迭�� ���� ����
	cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
	cin >> size;

	int middle = size / 2; // Ȧ���� �� �߰��� ���� ���� �ֱ� ���� �ʿ��� ����
	int first=0;
	int end = size - 1;

	while (insertNum < (size * size)) // ������ �迭 ������ ���ڴ� ũ���� ������
	{
		// �Ʒ� 4���� for���� �ݺ�
		for (int x = first; x < end + 1; ++x) // �� ���� ����
		{
			snail[first][x] = insertNum;
			++insertNum;
		}
		for (int y = first + 1; y < end + 1; ++y) // �� ���� ����
		{
			snail[y][end] = insertNum;
			++insertNum;
		}
		for (int x = end - 1; x >= first; --x) // �� ���� ����
		{
			snail[end][x] = insertNum;
			++insertNum;
		}
		--end;
		for (int y = end; y >= first + 1; --y) // �� ���� ����
		{
			snail[y][first] = insertNum;
			++insertNum;
		}
		++first;
	}

	if (size % 2 == 1) // Ȧ���� ��� �����ִ� �߰����� �Է�
	{
		snail[middle][middle] = insertNum;
	}

	// ���
	for (int x = 0; x < size; ++x)
	{
		for (int y = 0; y < size; ++y)
		{
			cout << snail[x][y] << "\t";
		}
		cout << endl;
	}

	return 0;
}