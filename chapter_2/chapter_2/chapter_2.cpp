// chapter_2.cpp : 定义控制台应用程序的入口点。
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

