#pragma once
#include <iostream>
#include "Nodo.h"

template <class tipoDato>
class Lista{
private:
	int dimensione; //la dimensione "fisica" della lista
	int lunghezza; // il numero di elementi effettivamente presenti nella lista
	tipoDato* elementi; // array dinamico che conterrà i valori

public:
	Lista();
	Lista(int dimUtente);
	~Lista();



	void setDimensione(int newDim); //imposta la dimensione
	void setLunghezza();  // imposta la lunghezza
	int getDimensione();
	int getLunghezza();

	void inserisciElemento(int posizione, tipoDato valore);
	
};

template <class tipoDato>
Lista<tipoDato>::Lista() {
	elementi = new tipoDato[10];
}

template <class tipoDato>
Lista<tipoDato>::Lista(int dimUtente) {
	elementi = new tipoDato[dimUtente];
}

template <class tipoDato>
void Lista<tipoDato>::setDimensione(int newDim) {
	dimensione = newDim;
}


