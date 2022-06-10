//문제 8번. 달팽이배열

// 더 공부 해야 할 것 : 배열 크기가 지정되어있는데 동적으로 구현해보기
#include "Header.h"

int main()
{
	int snail[100][100] = { 0, };
	int size;
	int insertNum = 1; // 달팽이 배열에 넣을 숫자
	cout << "배열의 크기를 입력하세요 : ";
	cin >> size;

	int middle = size / 2; // 홀수일 때 중간에 값을 집어 넣기 위해 필요한 변수
	int first=0;
	int end = size - 1;

	while (insertNum < (size * size)) // 달팽이 배열 마지막 숫자는 크기의 제곱수
	{
		// 아래 4개의 for문을 반복
		for (int x = first; x < end + 1; ++x) // → 방향 진행
		{
			snail[first][x] = insertNum;
			++insertNum;
		}
		for (int y = first + 1; y < end + 1; ++y) // ↓ 방향 진행
		{
			snail[y][end] = insertNum;
			++insertNum;
		}
		for (int x = end - 1; x >= first; --x) // ← 방향 진행
		{
			snail[end][x] = insertNum;
			++insertNum;
		}
		--end;
		for (int y = end; y >= first + 1; --y) // ↑ 방향 진행
		{
			snail[y][first] = insertNum;
			++insertNum;
		}
		++first;
	}

	if (size % 2 == 1) // 홀수일 경우 빠져있는 중간값을 입력
	{
		snail[middle][middle] = insertNum;
	}

	// 출력
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