//This is the sorting project
#define DEBUG 1 
//Insertion Sort
void InsertSort(int size, int *array);
int *makeTest(int size);
void runTest(int size);
void printArray(int size, int *array);
//Merge Sort
void runMergeTest(int size);
void Merge(int *array, int start, int mid, int end);
void MergeSort(int *array, int start, int end);
//Quick Sort
int Partition(int *array, int start, int end);
void Quicksort(int *array, int start, int end);
void runQuickTest(int size);
