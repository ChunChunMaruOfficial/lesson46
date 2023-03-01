#include "logic.h"

int max(int* array, int size) {
	int max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > array[max]) {
			max = i;
		}
	}
	return array[max];
}

int min(int* array, int size) {
	int min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] < array[min]) {
			min = i;
		}
	}
	return array[min];
}