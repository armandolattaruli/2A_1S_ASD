//realizzazione circolare

#include <iostream>
#include "Nodo.h"

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

	typedef Nodo<tipoVar>* posizione;

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
void Lista<tipoVar>::creaLista() {
	/*tipoelem ElementoNullo;
	lista = new Cella;
	lista->setElemento(ElementoNullo);
	lista->setSucc(lista);
	lista->setPrec(lista);*/
	//la sentinella punta a se stessa

	tipoVar ElementoNullo;
	Lista lista = new Nodo;
	lista->setElemento(ElementoNullo);
	lista->setNodoPrec(lista);
	lista->setNodoSucc(lista);
}


