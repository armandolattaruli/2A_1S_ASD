#include "codavt.cpp"
#include <iostream>

using namespace std;

int main() {

	Coda<int> C(5);

	C.inCoda(10);
	C.inCoda(11);
	C.inCoda(12);
	C.inCoda(13);
	C.inCoda(14);
	C.inCoda(15);// elemeno non inserito

	for (int i = 0; i < 5; i++) {
		cout << C.leggiCoda() << " ";
		C.fuoriCoda();
		C.inCoda(50 + i);
	}
	cout << endl << "Coda vuota? " << C.codaVuota() << endl << endl;

	for (int i = 0; i < 5; i++) {
		cout << C.leggiCoda() << " ";
		C.fuoriCoda();
	}
	cout << endl << "Coda vuota? " << C.codaVuota() << endl << endl;
}