//4번 문제. 배열의 값을 오름차순으로 정렬해서 반환하는 함수를 구현 하시오.

// 더 공부해야할 것 : 정렬 방법을 다른 것으로 해보는 것
#include "Header.h"


void sortArray(int* arr, int size) // 버블정렬(아직 퀵정렬이랑을 구현해보지 못해서 버블정렬로 했습니다)
{
	int sortcount = 0;
	// 재확인  while 반복문
	while (sortcount < size)
	{
		int* subArrPointer = arr; // 배열을 탐색할 포인터
		for (int i = 0; i < size - 1; ++i) // 배열을 한번 정렬하는 반복문
		{
			int temp = *subArrPointer; 
			if (temp > *(subArrPointer + 1))
			{
				*subArrPointer = *(subArrPointer + 1);
				*(subArrPointer + 1) = temp;
			}
			subArrPointer++;
		}
		sortcount++;
	}
}

int main()
{
	int arr[5] = { 5, 2, 4, 1, 3 };

	sortArray(arr, 5);

	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}