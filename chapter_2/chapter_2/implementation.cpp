
#include "implementation.h"

void Insetion_sort(int *A, int len)
{
	/*
	从第二个数开始取出，依次与左边的数进行比较，若满足条件，则将左边的数右移，
	最后再插入取出的数。
	*/
	/*
	param A: the array needed to be sorted.
	param len: integer, the length of the array.
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


void merge(int *A, int p, int q, int r)
{
	/*
	param A: the array needed to be sorted.
	param p: integer, the begin index of the left subarray.
	param q: integer, the end index of the left subarray.
	param r: integer, the end index of the right subarray.
	*/
	int n1 = q - p + 1;
	int n2 = r - q;
	
	int *L = (int*)malloc(sizeof(int)*(n1 + 1));
	int *R = (int*)malloc(sizeof(int)*(n2 + 1));

	for (int i = 0; i < n1; i++)
	{
		L[i] = A[p + i];
	}
	for (int i = 0; i < n2; i++)
	{
		R[i] = A[q + i + 1];
	}

	L[n1] = Inf;
	R[n2] = Inf;

	int i = 0, j = 0;

	for (int k = p; k <= r; k++)
	{
		if (L[i] <= R[j])
		{
			A[k] = L[i];
			i++;
		}
		else
		{
			A[k] = R[j];
			j++;
		}
	}

	free(L);
	free(R);
}

void merge_sort(int *A, int p, int r)
{
	/*
	param A: the array needed to be sorted.
	param p: integer, the begin index of the subarray.
	param r: integer, the end index of the subarray.
	*/
	if (p >= r)
	{
		return;
	}
	else
	{
		int q = (p + r) / 2;
		merge_sort(A, p, q);
		merge_sort(A, q + 1, r);
		merge(A, p, q, r);
	}
}


void bubble_sort(int *A, int length)
{
	/*
	param A: the array needed to be sorted.
	param length: integer, the length of the array.
	*/
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = length - 1; j >= i + 1; j--)
		{
			if (A[j] < A[j - 1])
			{
				int temp = 0;
				temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
			}
		}
	}

}
