#include<stdlib.h>
#include<stdio.h>
#include"Sort.h"
void main()
{
	//Variables
	int input;
	int size;
	//Operations
	printf("Test Sorting Operations\n");
	printf("Enter: ");
	scanf("%d", &input);
	switch (input)
	{
	case 0: return;
	case 1:
		printf("Insertion Sort Test\n");
		printf("Enter Size: ");
		scanf("%d", &size);
		runTest(size);
		break;
	case 2:
		printf("Merge Sort Test\n");
		printf("Enter Size: ");
		scanf("%d", &size);
		runMergeTest(size);
	case 3:
		printf("Quick Sort Test\n");
		printf("Enter Size: ");
		scanf("%d", &size);
		runQuickTest(size);
	}
	system("pause");
}
