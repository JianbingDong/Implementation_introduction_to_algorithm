#include "maximum_subarray.h"

Coor find_max_crossing_subarray(int *A, int low, int mid, int high)
{
	/*
	This function is used to find the maximum subarray crossing the mid.
	param A: the original array.
	param low: the low index of that array.
	param mid: the mid index of that array.
	param high: the high index of that array.
	*/
	Coor coord;

	int left_sum = InfMin;
	int sum = 0;

	for (int i = mid; i >= low; i--)
	{
		sum += A[i];
		if (sum > left_sum)
		{
			left_sum = sum;
			coord.left_coor = i;
		}
	}

	int right_sum = InfMin;
	sum = 0;

	for (int j = mid + 1; j <= high; j++)
	{
		sum += A[j];
		if (sum > right_sum)
		{
			right_sum = sum;
			coord.right_coor = j;
		}
	}

	coord.maximum = left_sum + right_sum;

	return coord;
}

Coor find_maximum_subarray(int *A, int low, int high)
{
	/*
	This function is used to find the maximum subarray from the array.
	param A: the array;
	param low: the low index of the array.
	param high: the high index of the array.
	*/

	Coor coord = { low, high, A[low]};

	if (high == low)
	{
		return coord;
	}
	else
	{
		int mid = (low + high) / 2;

		Coor left_subarray = find_maximum_subarray(A, low, mid);
		Coor right_subarray = find_maximum_subarray(A, mid + 1, high);
		Coor cross_subarray = find_max_crossing_subarray(A, low, mid, high);

		if (left_subarray.maximum >= right_subarray.maximum
			&& left_subarray.maximum >= cross_subarray.maximum)
		{
			coord = left_subarray;
			return coord;
		}
		else if(right_subarray.maximum >= left_subarray.maximum &&
			right_subarray.maximum >= cross_subarray.maximum)
		{
			coord = right_subarray;
			return coord;
		}
		else
		{
			coord = cross_subarray;
			return coord;
		}
	}
}