#include<stdlib.h>
#include<stdio.h>
#include"Sort.h"
int Partition(int *array, int start, int end)
{
	//variables
	int x, i, j, temp;
	//operations
	x = array[end];
	i = start - 1;
	for (j = start; j < end - 1; j++)
	{
		if (array[j] < x)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[end];
	array[end] = temp;
	return i + 1;
}
void Quicksort(int *array, int start, int end)
{
	//variables
	int q;
	//operations
	if (start < end)
	{
		q = Partition(array, start, end);
		Quicksort(array, start, q - 1);
		Quicksort(array, q + 1, end);
	}
}
void runQuickTest(int size)
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
	Quicksort(testArray, 0, size - 1);
	printf("End: ");
	printArray(size, testArray);
}
