//6������. Joker�� ������ 53���� ī�带 ���� ��, �� ���� �÷��̾�� 7�徿�� ī�带 ����ϴ� ���α׷��� ����ÿ�.

// �� �����ؾ� �� �� : �������� ó�� �ڵ� ���� ������ ������ ������ ���������� �ϵ��ڵ��Դϴ�. ���ȭ�� �����غ��ڽ��ϴ�.

#include "Header.h"

int main()
{
	srand(time(NULL));
	// ī�� ������ ���� �迭 1: ��Ŀ, �� �ܿ� 100����� �����̵�, 200����� Ŭ�ι�, 300����� ��Ʈ, 400����� ���̾�
	// �׿ܿ� ��,���� �ڸ����� ī���� ��ȣ 1�̸� A, 10:J, 11:Q, 12:K
	int deck[53] = { 1,
		101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112,
		201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212,
		301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312,
		401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412,
	};
	int player1[7] = { 0, };
	int player2[7] = { 0, };

	// ī�带 ���� ���� �ƴ� �÷��̾�1���� �������� ���
	for (int i = 0; i < 7;) 
	{
		int getCard = rand() % 53; // ���� ī��(0��) �� ��� �ٽ� �̱�
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
			player1[i] = deck[getCard]; // �÷��̾�1���� ī�� ����ϰ� �� ī�� �� 0���� ����
			deck[getCard] = 0;
			++i;
		}
	}
	//�÷��̾�2 �ݺ�
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

	//��� �κ�.
	// ������ �˼��մϴ�.
	// 100����� /100���� ī�幮�� �Ǵ�, %100���� ī����� �Ǵ�
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
				cout << "��";
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
				cout << "��";
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
				cout << "��";
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
				cout << "��";
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
				cout << "��";
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
				cout << "��";
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
				cout << "��";
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
				cout << "��";
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