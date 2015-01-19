#include<stdlib.h>
#include<stdio.h>
#include"Sort.h"
#define BOUNDARYSIZE 1000000
void Merge(int *array, int start, int mid, int end)
{
	//variables
	int i, j, k, temp;
	int size1, size2;
	int *array1, *array2;
	//operations
	size1 = mid - start + 1;
	size2 = end - mid;
	if (end - start == 1)
	{
		if (array[start] > array[end])
		{
			temp = array[start];
			array[start] = array[end];
			array[end] = temp;
		}
	}
	else
	{
		array1 = malloc(sizeof(int) * (size1 + 1));
		array2 = malloc(sizeof(int) * (size2 + 1));
		array1[size1] = BOUNDARYSIZE;
		array2[size2] = BOUNDARYSIZE;
		for (i = start; i <= mid; i++)
			array1[i - start] = array[i];
		for (j = mid + 1; j <= end; j++)
			array2[j - (mid + 1)] = array[j];
		for (k = start, i = 0, j = 0; k <= end; k++)
		{
			if (array1[i] < array2[j])
				array[k] = array1[i++];
			else array[k] = array2[j++];
		}
		if (DEBUG)
		{
			printf("Start: %d  Mid: %d  End: %d\n", start, mid, end);
			printArray(size1, array1);
			printArray(size2, array2);
		}
	}
}
void MergeSort(int *array, int start, int end)
{
	//Variables
	int mid;
	//Operations
	if (start < end)
	{
		mid = (start + end) / 2 ;
		MergeSort(array, start, mid);
		MergeSort(array, mid + 1, end);
		Merge(array, start, mid, end);
	}
}
//function used for testing
void runMergeTest(int size)
{
	//variables
	int *testArray;
	//operations
	testArray = makeTest(size);
	if (DEBUG)
	{
		printf("Begin: ");
		printArray(size, testArray);
	}
	MergeSort(testArray, 0, size - 1);
		printf("End: ");
		printArray(size, testArray);
}
