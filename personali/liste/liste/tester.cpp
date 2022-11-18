#include <iostream>
#include "circLista.h"

using namespace std;

int main() {
	
						 
	/*TEST PER NODI*/
	/*Cella<int> primo(5);
	Cella<int> secondo(6);
	Cella<int> terzo(7);

	primo.setCellaSucc(&secondo);

	secondo.setCellaPrec(&primo);
	secondo.setCellaSucc(&terzo);

	terzo.setCellaPrec(&secondo);

	cout << "1 elemento: " << primo.getElementoCella() << " = " << &primo << " " << primo.getCellaSucc() << endl;
	cout << "2 elemento:     " << secondo.getCellaPrec()  << " " << secondo.getElementoCella() << " = " << &secondo << " " << secondo.getCellaSucc() << endl;
	cout << "3 elemento:     " << terzo.getCellaPrec() << " " << terzo.getElementoCella() << " = " << &terzo << endl;*/


	Lista<int> myList;


	cout << "Puntatore proprio: " << &myList << endl;
	


	return 0;
}