#ifndef _circLista_H
#define _circLista_H

#include "cella.h"

template <class T>
class Lista {

public:		
	Lista(); //costruttore di copia ?
	//~Lista(); //distruttore	

	typedef Cella<T>* posizione;	

	//operatori
	void creaLista();
	/*bool listaVuota();
	tipoelem leggiLista(posizione);
	void scriviLista(tipoelem, posizione);
	posizione primoLista();
	bool fineLista(posizione);
	void insLista(tipoelem, posizione&);
	void cancLista(posizione& p);*/

	/*posizione succLista(posizione);
	posizione precLista(posizione);*/


private:
	//int dimensione; //la dimensione "fisica" della lista
	//int lunghezza; // il numero di elementi effettivamente presenti nella lista
	posizione elementi; // array dinamico che conterrà i valori
};


template <class T>
Lista<T>::Lista() {
	creaLista();
}


template <class T>
void Lista<T>::creaLista() {
	
	//dato che ElementoNullo è creato ma non inizializzato, non si sa come passarlo a (riga 49)
	//typename Cella<T>::tipoelem ElementoNullo;

	elementi = new Cella<T>;
	//elementi->setValoreCella(ElementoNullo);
	elementi->setCellaPrec(elementi);
	elementi->setCellaSucc(elementi);
}

#endif _circLista_H




