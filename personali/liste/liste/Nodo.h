#pragma once
using namespace std;

template <class tipoVar>
class Nodo {
private:
	Nodo *nodoPrec;
	Nodo *nodoSucc;
	tipoVar elementoNodo;

public:
	Nodo() {};
	Nodo(tipoVar v);
	//~Nodo();

	void setNodoPrec(Nodo *valore) {
		nodoPrec = valore;
	}

	void setNodoSucc(Nodo *valore) {
		nodoSucc = valore;
	}

	void setValoreNodo(tipoVar newVal) {
		elementoNodo = newVal;
	}

	Nodo* getNodoPrec() {
		return nodoPrec;
	}

	Nodo* getNodoSucc() {
		return nodoSucc;
	}

	tipoVar getElementoNodo() {
		return elementoNodo;
	}
};

template <class tipoVar>
Nodo<tipoVar>::Nodo(tipoVar v) {
	elementoNodo = v;
};