#include <iostream>
#include "liste_puntatori.h"

int main() {
	
	int* a = new int[5];

	for (int i = 0; i < 5; i++) {
		a[i] = rand();
	}

	for (int i = 0; i < 5; i++) {
		std::cout << a[i] << ", ";
	}

	return 0;
}