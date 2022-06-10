//7������. ����!

// �� ���� �ؾ� �� �� : ��ü������ ���
#include "Header.h"

int map[5][5] = { 0, };
int bingo = 0;

// �Է��� ���� ���� �Լ�
void Remove(int removeNum)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (map[i][j] == removeNum)
			{
				map[i][j] = 0;
			}
		}
	}
}

// ���� üũ �Լ�
void Bingo()
{
	bingo = 0; //������ �Ź� �������� ���� ���� ����
	int horizontalBingoCheck = 0; // ����
	int verticalBingoCheck = 0; // ����

	// ���� ���� ���� üũ
	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			if (map[x][y] == 0) // ���� �Ǵ�
			{
				++horizontalBingoCheck;
			}
			if (map[y][x] == 0) // ���� �Ǵ�
			{
				++verticalBingoCheck;
			}
		}
		//���� �����ϰ�� ���� +1
		if (horizontalBingoCheck == 5)
		{
			bingo += 1;
		}
		horizontalBingoCheck = 0;

		//���� �����ϰ�� ���� +1
		if (verticalBingoCheck == 5)
		{
			bingo += 1;
		}
		verticalBingoCheck = 0;
	}

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
		}
	}
	//�밢 ���� üũ
	if (map[0][0] == 0 && map[1][1] == 0 && map[2][2] == 0 && map[3][3] == 0 && map[4][4] == 0)
	{
		bingo += 1;
	}
	if (map[4][0] == 0 && map[3][1] == 0 && map[2][2] == 0 && map[1][3] == 0 && map[0][4] == 0)
	{
		bingo += 1;
	}
}


int main()
{
	srand(time(NULL));
	int mapSetting = 1;
	int setting[5][5];
	int removeNum = 0;
	
	// ���ĵǾ��ִ� ���� �̿��ؼ� ���ڸ� ���� ����
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			setting[i][j] = mapSetting;
			++mapSetting;
		}
	}

	// ���ĵǾ��ִ� ���� ��ǥ�� �������� �޾� �Է�.
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			int x = rand() % 5;
			int y = rand() % 5;
			while (setting[x][y] == 0)
			{ // �̹� ���� �ǳ��� ��ġ��� �ٽ� 
				x = rand() % 5;
				y = rand() % 5;
			}
			map[i][j] = setting[x][y];
			setting[x][y] = 0;
		}
	}
	// �������� �����ϸ� while�� Ż���Ű�� ��.
	while (1)
	{
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (map[i][j] == 0)
				{
					cout << " \t";
				}
				else
				{
					cout << map[i][j] << "\t";
				}
			}
			cout << endl;
		}

		cout << "���� " << bingo << "�� ����" << endl;
		cout << "���� ���ڸ� �Է��ϼ��� : _ ";
		cin >> removeNum;
		Remove(removeNum);
		Bingo();
		system("cls");
	}

	return 0;
}