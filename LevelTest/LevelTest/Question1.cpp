// 1번 문제. 포인터와 레퍼런스를 활용해 함수 외부에서 선언된 두 정수형 변수의 값을 서로 바꾸는 Swap 함수를 각각 구현하시오.
#include "Header.h"

// 포인터로 스왑하는 함수
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

// 레퍼런스로 스왑하는 함수
void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int num1 = 20;
	int num2 = 10;
	cout << "초기값(a, b) : " << num1 << ", " << num2 << endl;

	swap(&num1, &num2); // 매개변수 포인터이므로 주소값으로 함수 호출

	cout << "포인터로 swap(a, b) : " << num1 << ", " << num2 << endl;

	swap(num1, num2); // 매개변수 레퍼런스이므로 그대로 함수 호출

	cout << "레퍼런스로 swap(a, b) : " << num1 << ", " << num2 << endl;

	return 0;
}