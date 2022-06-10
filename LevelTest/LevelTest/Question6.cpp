//6번문제. Joker를 포함한 53장의 카드를 섞은 후, 두 명의 플레이어에게 7장씩의 카드를 배분하는 프로그램을 만드시오.

// 더 공부해야 할 것 : 교수님이 처음 코드 보고 혈압이 오르실 정도의 절차지향적 하드코딩입니다. 모듈화를 생각해보겠습니다.

#include "Header.h"

int main()
{
	srand(time(NULL));
	// 카드 정보에 대한 배열 1: 조커, 그 외에 100번대는 스페이드, 200번대는 클로버, 300번대는 하트, 400번대는 다이아
	// 그외에 십,일의 자리수는 카드의 번호 1이면 A, 10:J, 11:Q, 12:K
	int deck[53] = { 1,
		101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112,
		201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212,
		301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312,
		401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412,
	};
	int player1[7] = { 0, };
	int player2[7] = { 0, };

	// 카드를 섞는 것이 아닌 플레이어1에게 랜덤으로 배분
	for (int i = 0; i < 7;) 
	{
		int getCard = rand() % 53; // 없는 카드(0값) 일 경우 다시 뽑기
		while (deck[getCard] == 0)
		{
			getCard = rand() % 53;
		}

		if (player1[i] == deck[getCard])
		{
			i = 0;
		}

		else
		{
			player1[i] = deck[getCard]; // 플레이어1에게 카드 배분하고 그 카드 값 0으로 변경
			deck[getCard] = 0;
			++i;
		}
	}
	//플레이어2 반복
	for (int i = 0; i < 7;)
	{
		int getCard = rand() % 53;
		while (deck[getCard] == 0)
		{
			getCard = rand() % 53;
		}

		if (player2[i] == deck[getCard])
		{
			i = 0;
		}

		else
		{
			player2[i] = deck[getCard];
			deck[getCard] = 0;
			++i;
		}
	}

	//출력 부분.
	// 교수님 죄송합니다.
	// 100번대는 /100으로 카드문양 판단, %100으로 카드숫자 판단
	cout << "player 1 : ";
	for (int i = 0; i < 7; i++)
	{
		if (player1[i] == 1)
		{
			cout << "Joker";
		}
		else
		{
			switch (player1[i] / 100)
			{
			case 1:
				cout << "♠";
				if (player1[i] % 100 < 10)
				{
					if (player1[i] % 100 == 1)
					{
						cout << "A";
					}
					else
					{
						cout << player1[i] % 100;
					}
				}
				else
				{
					switch (player1[i] % 100)
					{
					case 10:
						cout << "J";
						break;
					case 11:
						cout << "Q";
						break;
					case 12:
						cout << "K";
						break;
					}
				}
				break;
			case 2:
				cout << "♣";
				if (player1[i] % 100 < 10)
				{
					if (player1[i] % 100 == 1)
					{
						cout << "A";
					}
					else
					{
						cout << player1[i] % 100;
					}
				}
				else
				{
					switch (player1[i] % 100)
					{
					case 10:
						cout << "J";
						break;
					case 11:
						cout << "Q";
						break;
					case 12:
						cout << "K";
						break;
					}
				}
				break;
			case 3:
				cout << "♥";
				if (player1[i] % 100 < 10)
				{
					if (player1[i] % 100 == 1)
					{
						cout << "A";
					}
					else
					{
						cout << player1[i] % 100;
					}
				}
				else
				{
					switch (player1[i] % 100)
					{
					case 10:
						cout << "J";
						break;
					case 11:
						cout << "Q";
						break;
					case 12:
						cout << "K";
						break;
					}
				}
				break;
			case 4:
				cout << "◆";
				if (player1[i] % 100 < 10)
				{
					if (player1[i] % 100 == 1)
					{
						cout << "A";
					}
					else
					{
						cout << player1[i] % 100;
					}
				}
				else
				{
					switch (player1[i] % 100)
					{
					case 10:
						cout << "J";
						break;
					case 11:
						cout << "Q";
						break;
					case 12:
						cout << "K";
						break;
					}
				}
				break;
			}
		}
		cout << ", ";
	}
	cout << endl;
	cout << "player 2 : ";
	for (int i = 0; i < 7; i++)
	{
		if (player2[i] == 1)
		{
			cout << "Joker";
		}
		else
		{
			switch (player2[i] / 100)
			{
			case 1:
				cout << "♠";
				if (player2[i] % 100 < 10)
				{
					if (player2[i] % 100 == 1)
					{
						cout << "A";
					}
					else
					{
						cout << player2[i] % 100;
					}
				}
				else
				{
					switch (player2[i] % 100)
					{
					case 10:
						cout << "J";
						break;
					case 11:
						cout << "Q";
						break;
					case 12:
						cout << "K";
						break;
					}
				}
				break;
			case 2:
				cout << "♣";
				if (player2[i] % 100 < 10)
				{
					if (player2[i] % 100 == 1)
					{
						cout << "A";
					}
					else
					{
						cout << player2[i] % 100;
					}
				}
				else
				{
					switch (player2[i] % 100)
					{
					case 10:
						cout << "J";
						break;
					case 11:
						cout << "Q";
						break;
					case 12:
						cout << "K";
						break;
					}
				}
				break;
			case 3:
				cout << "♥";
				if (player2[i] % 100 < 10)
				{
					if (player2[i] % 100 == 1)
					{
						cout << "A";
					}
					else
					{
						cout << player2[i] % 100;
					}
				}
				else
				{
					switch (player2[i] % 100)
					{
					case 10:
						cout << "J";
						break;
					case 11:
						cout << "Q";
						break;
					case 12:
						cout << "K";
						break;
					}
				}
				break;
			case 4:
				cout << "◆";
				if (player2[i] % 100 < 10)
				{
					if (player2[i] % 100 == 1)
					{
						cout << "A";
					}
					else
					{
						cout << player2[i] % 100;
					}
				}
				else
				{
					switch (player2[i] % 100)
					{
					case 10:
						cout << "J";
						break;
					case 11:
						cout << "Q";
						break;
					case 12:
						cout << "K";
						break;
					}
				}
				break;
			}
		}
		cout << ", ";
	}

	return 0;
}