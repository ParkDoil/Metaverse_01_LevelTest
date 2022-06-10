//7번문제. 빙고!

// 더 공부 해야 할 것 : 객체지향적 사고
#include "Header.h"

int map[5][5] = { 0, };
int bingo = 0;

// 입력한 숫자 제거 함수
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

// 빙고 체크 함수
void Bingo()
{
	bingo = 0; //빙고값이 매번 더해지는 것을 막기 위해
	int horizontalBingoCheck = 0; // 가로
	int verticalBingoCheck = 0; // 세로

	// 가로 세로 빙고 체크
	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			if (map[x][y] == 0) // 가로 판단
			{
				++horizontalBingoCheck;
			}
			if (map[y][x] == 0) // 세로 판단
			{
				++verticalBingoCheck;
			}
		}
		//가로 빙고일경우 빙고 +1
		if (horizontalBingoCheck == 5)
		{
			bingo += 1;
		}
		horizontalBingoCheck = 0;

		//세로 빙고일경우 빙고 +1
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
	//대각 빙고 체크
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
	
	// 정렬되어있는 맵을 이용해서 숫자를 섞을 생각
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			setting[i][j] = mapSetting;
			++mapSetting;
		}
	}

	// 정렬되어있는 맵의 좌표를 랜덤으로 받아 입력.
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			int x = rand() % 5;
			int y = rand() % 5;
			while (setting[x][y] == 0)
			{ // 이미 값을 건네준 위치라면 다시 
				x = rand() % 5;
				y = rand() % 5;
			}
			map[i][j] = setting[x][y];
			setting[x][y] = 0;
		}
	}
	// 종료조건 구현하면 while문 탈출시키면 됨.
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

		cout << "현재 " << bingo << "줄 빙고" << endl;
		cout << "지울 숫자를 입력하세요 : _ ";
		cin >> removeNum;
		Remove(removeNum);
		Bingo();
		system("cls");
	}

	return 0;
}