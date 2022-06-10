// 2번문제. 1000미만의 3의 승수를 차례대로 출력하는 코드를 구현 하시오.
#include "Header.h"

int main()
{
	int N = 3;
	int check = 1; // 현재 3의 몇제곱인지 확인하는 변수
	while (N < 1000)
	{
		cout << "3의 " << check << "제곱 : " << N << endl;
		N *= 3; // 3의 승수이므로 *3
		++check; // 제곱수도 1씩 증가해야 하므로
	}

	return 0;
}