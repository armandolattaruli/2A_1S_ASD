#pragma once
using namespace std;

template <class tipoVar>
class Nodo {
private:
	int *nodoPrec;
	int *nodoSucc;
	tipoVar valoreNodo;

public:
	Nodo();
	~Nodo();

	void setNodoPrec(*valore) {
		nodoPrec = valore;
	}

	void setNodoSucc(*valore) {
		nodoSucc = valore;
	}
};
