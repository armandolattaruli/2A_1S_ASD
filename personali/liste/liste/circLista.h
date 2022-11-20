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
	bool listaVuota();
	typename Cella<T>::tipoelem leggiLista(posizione p);
	void scriviLista(typename Cella<T>::tipoelem elemento, posizione p);
	posizione primoLista();
	bool fineLista(posizione p);
	void insLista(typename Cella<T>::tipoelem elemento, posizione& p);
	/*void cancLista(posizione& p); */

	/*posizione succLista(posizione);
	posizione precLista(posizione);*/


private:
	posizione elementi; // array dinamico che conterrà i valori
};


template <class T>
Lista<T>::Lista() {
	creaLista();
}


template <class T>
void Lista<T>::creaLista() {
	
	//dato che ElementoNullo è creato ma non inizializzato, non si sa come passarlo a (riga 48)
	//typename Cella<T>::tipoelem ElementoNullo;

	elementi = new Cella<T>;
	//elementi->setValoreCella(ElementoNullo);
	elementi->setCellaPrec(elementi);
	elementi->setCellaSucc(elementi);
}

template<class T> 
bool Lista<T>::listaVuota() {
	return ((elementi->getCellaSucc() == elementi) && (elementi->getCellaPrec() == elementi));
}

template <class T>
typename Cella<T>::tipoelem Lista<T>::leggiLista(posizione p) {
	return p->getElementoCella();
}

template <class T>
void Lista<T>::scriviLista(typename Cella<T>::tipoelem elemento, posizione p) {
	p->setValoreCella;
}

template <class T>
typename Lista<T>::posizione Lista<T>::primoLista() {
	return elementi->getCellaSucc();
}

template <class T>
bool Lista<T>::fineLista(posizione p) {
	return (p == elementi)
}

template <class T>
void Lista<T>::insLista(typename Cella<T>::tipoelem elemento, posizione& p) {

}


#endif _circLista_H




