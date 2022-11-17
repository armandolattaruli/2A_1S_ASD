#include "liste_puntatori.h"

//costruttore di default
template <class tipoDato>
Lista<tipoDato>::Lista() {
	
}

template <class tipoDato>
void Lista<tipoDato>::creaLista() {
	tipoelem ElementoNullo;
	lista = new Cella;
	lista->setElemento(ElementoNullo);
	lista->setSucc(lista);
	lista->setPrec(lista);
	//la sentinella punta a se stessa
}
