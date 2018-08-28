#pragma once
#define InfMin 0xc0c0c0c0

typedef struct coordinate
{
	/*
	this struct included the left-coordinate,
	right-coordinate, and the maximum value of
	the subarray.
	*/
	int left_coor;
	int right_coor;
	int maximum;
}Coor;


Coor find_max_crossing_subarray(int *A, int low, int mid, int high);
Coor find_maximum_subarray(int *A, int low, int high);
