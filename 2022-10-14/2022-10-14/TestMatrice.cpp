#include <iostream>
#include "Matrice.h"
using namespace std;

int main() {
	int r1, c1;	

	cout << "Inserisci numero di righe e di colonne per la prima matrice: " << endl;
	cin >> r1;
	cin >> c1;

	//creazione prima matrice di dimensione r1*c1
	matrice mat1(r1, c1);
	matrice matScal(r1, c1);
	matScal = mat1.prodottoScalare(10);

	//stampa elementi
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			cout << mat1.leggimatrice(i, j) << " ";
		}
		cout << endl;
	}			 

	cout << endl;
	//stampa elementi scalare
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			cout << matScal.leggimatrice(i, j) << " ";
		}
		cout << endl;
	}			 


	return 0;
}