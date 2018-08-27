#pragma once
#define Inf 0x3f3f3f3f
#define InfMin 0xc0c0c0c0
#include <stdlib.h>
void Insetion_sort(int *A, int len);
void merge(int *A, int p, int q, int r);
void merge_sort(int *A, int p, int r);
void bubble_sort(int *A, int length);