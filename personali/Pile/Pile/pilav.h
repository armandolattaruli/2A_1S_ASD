#ifndef _PILAV_H
#define _PILAV_H
#include "Nodopv.h"

using namespace std;

const int MAXLUNGH = 100;

template <class T>
class Pila {
	//friend void stampapila(Pila& L);
public:
	typedef T tipoelem;
	Pila();
	Pila(int dim);
	//~Pila();
	void creaPila();
	bool pilaVuota() const;
	tipoelem leggiPila() const;
	void fuoriPila();
	void inPila(typename Nodo<T>::tipoelem);
private:
	Nodo<tipoelem> elementi[MAXLUNGH];
	int testa;
};

template<class T>
Pila<T>::Pila() {
	creaPila();
}

template<class T>
void Pila<T>::creaPila() {
	testa = 0;
}

template<class T>
bool Pila<T>::pilaVuota() const {
	return testa == 0;
}

template<class T>
typename Pila<T>::tipoelem Pila<T>::leggiPila() const {
	return elementi[testa - 1].getElemento();
}

template<class T>
void Pila<T>::fuoriPila() {
	if (!pilaVuota())
		testa -= 1;
	else
		cout << "pila vuota" << endl;
}

template<class T>
void Pila<T>::inPila(typename Nodo<T>::tipoelem el) {
	if (testa == MAXLUNGH)
		cout << "capacità massima raggiunta" << endl;
	else {
		elementi[testa] = el;
		testa++;
	}
}
#endif // _PILAV_H