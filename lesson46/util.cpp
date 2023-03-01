#include "main.h"
#include <string> 
#include "util.h"


void rand_init(int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100 - 50;  //от -50 до 50
	}
}

string show(int* array, int size) {
	string msg = "";
	for (int i = 0; i < size; i++)
	{
		msg += to_string(array[i]) + " ";
	}
	return msg;
}
