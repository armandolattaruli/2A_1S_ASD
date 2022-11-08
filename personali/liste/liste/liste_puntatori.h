#pragma once
#include <iostream>
using namespace std;
template <class tipoDato>
class Lista {
private:
	int dimensione; //la dimensione "fisica" della lista
	int lunghezza; // il numero di elementi effettivamente presenti nella lista
	tipoDato* elementi; // array dinamico che conterrà i valori

public:
	Lista();
	Lista(int dimUtente);
	~Lista();



	void setDimensione(); //imposta la dimensione
	void setLunghezza();  // imposta la lunghezza
	int getDimensione();
	int getLunghezza();

	void inserisciElemento(int posizione, tipoDato valore);
	
};

template <class tipoDato>
Lista::Lista() {
	elementi = new tipoDato[10];
}

template <class tipoDato>
Lista::Lista(int dimUtente) {
	elementi = new tipoDato[dimUtente];
}

