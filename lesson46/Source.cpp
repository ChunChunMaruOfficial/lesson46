#include <iostream> 

using namespace std;

void rand_init(int*, int);

string show(int*, int);

//алоаоаооаоаоаооавлоыраадыралдрфыжпражфрпжрфпжржпржф

int main() {
	srand(time(NULL));
	int size = rand() % 20;
	
	int* array = new int[size];

	rand_init(array, size);
	cout << show(array, size) << endl;

	delete[] array;

	return 0;
}