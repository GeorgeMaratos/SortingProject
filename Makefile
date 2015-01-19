make: main.c InsertionSort.c MergeSort.c
	gcc main.c InsertionSort.c MergeSort.c Quicksort.c -o debug
clean: debug
	rm debug
