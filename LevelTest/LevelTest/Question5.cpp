//5번문제. 로또 번호 생성기를 구현 하시오
//최대값과 생성 숫자 입력하면 중복되지 않는 숫자를 생성 숫자 개수 만큼 출력
// 내가 파악한 방법
// 1. 배열의 생성 숫자만큼 난수를 중복없이 집어넣어야한단
// 2. 배열을 비교해서 만약 있는 숫자라면 다시 난수 생성


// 구현 못한 부분 : 배열을 동적할당을 이용하여 그때 그때 필요한 만큼만 할당

// 수정해야 할 부분 : 너무 절차지향적으로 생각하고 있어서 객체지향적으로 생각하고 구현해보기
#include "Header.h"

int main()
{
	srand(time(NULL));
	int maxNum;
	int numCount;
	int countCheck = 0;

	cout << "최대 번호 값 : ";
	cin >> maxNum;
	cout << "생성 숫자 값 : ";
	cin >> numCount;

	int Lotto[10000] = { 0, };

	while (countCheck < numCount) // 배열에 생성 숫자 만큼 난수 집어넣는 반복문
	{
		int randomNum = rand() % maxNum + 1;
		for (int i = 0; i < countCheck;)
		{
			if (Lotto[i] == randomNum) // 만약 이미 있던 숫자라면 다시 난수 생성
			{
				randomNum = rand() % maxNum + 1;
				i = 0;
			}
			else // 있던 숫자가 아니면 반복문 조건 하나 증가
			{
				++i;
			}
		}
		Lotto[countCheck] = randomNum;
		++countCheck;
	}

	// 출력
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