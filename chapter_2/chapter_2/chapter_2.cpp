// chapter_2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

#include "implementation.h"

void print_arr(int *in, int len);

int main()
{
	int A[5] = { 5,2,4,6,1 };

	merge_sort(A, 0, 4);
	
	print_arr(A, 5);

    return 0;
}


void print_arr(int *in, int len)
{
	printf("the sorted array is:\n");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", in[i]);
	}
	printf("\n");

}
