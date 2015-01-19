#include<stdlib.h>
#include<stdio.h>
#include"Sort.h"
void InsertSort(int size, int *array)
//Insertion Sort with Arrays
{
	//Variables
	int key, i, j;
	//Operations
	if (DEBUG) printArray(size, array);
	for (j = 1; j < size; j++){
		key = array[j];
		i = j - 1;
		while (i >= 0 && array[i] > key)
		{
			array[i + 1] = array[i];
			i = i - 1;
		}
		array[i + 1] = key;
		//array[i + 1] = key;
		if (DEBUG) printArray(size, array);
	}
}
//functions below are used for testing
int *makeTest(int size)
{
	//varibles
	int i, key;
	int *array;
	//operations
	key = size;
	array = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
	{
		array[i] = key;
		key -= 1;
	}
	//return
	return array;
}
void runTest(int size)
{
	//varibles
	int *testArray;
	//operations
	testArray = makeTest(size);
	InsertSort(size, testArray);
}
void printArray(int size, int *array)
{
	//variables
	int i;
	//operations
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}