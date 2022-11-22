// Pile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "pilav.h"

using namespace std;

int main()
{
	Pila<string> myPila;

	cout << "Pila pre-riempimento: " << myPila.pilaVuota() << endl;

	myPila.inPila("ciao");
	myPila.inPila("come");
	myPila.inPila("stai");

	cout << "Pila dopo aggiunta di 3 elementi:" << myPila.pilaVuota() << endl;
	cout << "Elemento in cima: " << myPila.leggiPila() << endl;

	myPila.fuoriPila();
	cout << "Elemento in cima dopo rimozione 1: " << myPila.leggiPila() << endl;

	myPila.fuoriPila();
	cout << "Elemento in cima dopo rimozione 2: " << myPila.leggiPila() << endl;

	myPila.~Pila();

}
