//4�� ����. �迭�� ���� ������������ �����ؼ� ��ȯ�ϴ� �Լ��� ���� �Ͻÿ�.

// �� �����ؾ��� �� : ���� ����� �ٸ� ������ �غ��� ��
#include "Header.h"


void sortArray(int* arr, int size) // ��������(���� �������̶��� �����غ��� ���ؼ� �������ķ� �߽��ϴ�)
{
	int sortcount = 0;
	// ��Ȯ��  while �ݺ���
	while (sortcount < size)
	{
		int* subArrPointer = arr; // �迭�� Ž���� ������
		for (int i = 0; i < size - 1; ++i) // �迭�� �ѹ� �����ϴ� �ݺ���
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