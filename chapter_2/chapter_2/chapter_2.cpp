// chapter_2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

#include "insertion_sort.h"

int main()
{
	int A[5] = { 5,2,4,6,1 };
	Insetion_sort(A, 5);

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", A[i]);
	}

    return 0;
}

