#include <iostream>
#include "cella.h"

template <class tipoVar>
class Lista{
private:
	//int dimensione; //la dimensione "fisica" della lista
	//int lunghezza; // il numero di elementi effettivamente presenti nella lista
	tipoVar* elementi; // array dinamico che conterrà i valori

public:
	Lista(); //costruttore
	//Lista(); costruttore di copia ?
	~Lista(); //distruttore

	typedef Cella<tipoVar>* posizione;

	//operatori
	void creaLista();
	/*bool listaVuota();
	tipoelem leggiLista(posizione);
	void scriviLista(tipoelem, posizione);
	posizione primoLista();
	bool fineLista(posizione);	
	void insLista(tipoelem, posizione&);
	void cancLista(posizione& p);*/

	posizione succLista(posizione);
	posizione precLista(posizione);
	
	
};

template <class tipoVar>
Lista<tipoVar>::Lista() {
	cout << "costruttore default" << endl;
}

template <class tipoVar>
void Lista<tipoVar>::creaLista() {	

	tipoVar ElementoNullo;
	elementi = new Cella<tipoVar>();
	elementi->setElemento(ElementoNullo);
	elementi->setCellaPrec(elementi);
	elementi->setCellaSucc(elementi);
}


