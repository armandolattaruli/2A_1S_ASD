#ifndef _NODOPV_H
#define _NODOPV_H
#include <iostream>

template <class T>
class Nodo {
public:
	typedef T tipoelem;

	Nodo();
	Nodo(tipoelem);
	~Nodo();
	void setElemento(tipoelem);
	tipoelem getElemento() const;
	bool operator ==(Nodo&);
private:
	tipoelem elemento;
};

template<class T>
std::ostream&
operator<<(std::ostream&,
	const Nodo<T>& nodo);
# endif // _NODOPV_H

template<class T>
Nodo<T>::Nodo() {}

template<class T>
Nodo<T>::~Nodo() {}

template<class T>
Nodo<T>::Nodo(tipoelem label) {
	elemento = label;
}

template<class T>
void Nodo<T>::setElemento(tipoelem label) {
	elemento = label;
}

template<class T>
typename Nodo<T>::tipoelem Nodo<T>::getElemento() const {
	return elemento;
}

template<class T>
bool Nodo<T>::operator==(Nodo& n) {
	return (getElemento() == n.getElemento());
}

template<class T>
std::ostream& operator<<(std::ostream& out,
	const Nodo<T>& nodo) {
	return out << nodo.getElemento();
}