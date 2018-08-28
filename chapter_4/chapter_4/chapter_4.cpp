// chapter_4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "maximum_subarray.h"

int main()
{
	//find the maximum subarray
	int A[16] = { 13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7 };
	Coor coord = find_maximum_subarray(A, 0, 15);

	printf("%d, %d, %d\n", coord.left_coor, coord.right_coor, coord.maximum);

    return 0;
}

