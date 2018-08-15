
#include "insertion_sort.h"

void Insetion_sort(int *A, int len)
{
	/*
	从第二个数开始取出，依次与左边的数进行比较，若满足条件，则将左边的数右移，
	最后再插入取出的数。
	*/
	int key = 0;
	int i = 0;
	for (int j = 1; j < len; j++)
	{
		key = A[j];
		i = j - 1;

		while (i >= 0 && A[i] > key)
		{
			A[i + 1] = A[i];
			i--;
		}

		A[i + 1] = key;
	}
}

