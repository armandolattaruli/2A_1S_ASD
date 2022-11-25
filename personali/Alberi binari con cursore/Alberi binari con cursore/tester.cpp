#include "Bin_treec.h"
#include <iostream>

using namespace std;


int main() {
	Bin_treec<int> T;
	typename Bin_treec<int>::Nodo n1, n2;

	n1 = 10;

	T.ins_root(n1);
	T.write(T.root(), 666);
	n1 = T.root();
	T.ins_sx(n1);
	T.ins_dx(n1);
	T.write(T.sx(n1), 2);
	n1 = T.dx(n1);
	T.write(n1, 3);
	T.ins_dx(n1);
	T.write(T.dx(n1), 4);
	T.print();
	cout << T;
}
