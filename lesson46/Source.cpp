#include "main.h"

#include "util.h"

#include "logic.h"  //


// теперь это понятный, разборчивый текст) (UTF-8)

int main() {
	srand(time(NULL));
	int size = rand() % 20;
	
	int* array = new int[size];

	rand_init(array, size);
	cout << show(array, size) << endl;
	cout << "Max: " << max(array, size) << endl;
	cout << "Min: " << min(array, size) << endl;
	delete[] array;

	return 0;
}