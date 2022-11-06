#ifndef _LISTALIN_H
#define _LISTALIN_H

#include <iostream>
#include <ostream>

using std::cout;
using std::endl;
using std::ostream;

// classe astratta listaLinare
template< class T, class P >
class Linear_list{
 public:
	typedef T value_type;   // the type of object, T, stored in the list
	typedef P position;

	// operators
	virtual void create() = 0;
	virtual bool empty() const = 0; // true if the list's size is 0
	virtual value_type read(position) const = 0;
	virtual void write(const value_type & x, position p) = 0; // write x at position p
	virtual position begin() const = 0;  // returns a position pointing to the beginning of the list
	virtual bool end(position) const = 0; // verify whether a position points to the end of the list
	virtual position next(position) const = 0; // returns the next position
	virtual position previous(position) const = 0; // return the previous position
	virtual void insert(const value_type &, position) = 0; // insert an element
	virtual void erase(position pos) = 0; // ersaes the element at position pos

	// funzioni di servizio
	template <typename T1, typename P1>
	friend ostream& operator<< (ostream&, const Linear_list<T1,P1>&);

	/* Altre funzioni di servizio implementabili */

    int size() const{
      position p = begin();
      int c = 0;
      while (!end(p)) {c++; p = next(p);}
      return c;
    }  // returns the size of the list

    /*
	virtual void push_front(const value_type &); // insert a new element at the beginning
	virtual void push_back(const value_type &); // insert a new element at the end
	virtual void pop_front(); // removes the first element
	virtual void pop_back(); // removes the last element
	*/ 
	virtual void clear(){
      while(!empty())
        erase(begin());
    } // erases all the elements
};

/* sovraccarica <<. Attenzione se il tipo restituito da read non è primitivo, allora
 * anche per questo tipo bisogna sovraccaricare l'operatore <<
 */
template< class T, class P >
ostream& operator<<(ostream& os, const Linear_list<T,P> &l){
	typename Linear_list<T,P>::position p;
	p = l.begin();
	os << "[";
	while (!l.end(p)){
		if (p != l.begin())
			os << ", " << l.read(p);
		else
			os << l.read(p);
		p = l.next(p);
	}
	os << "]" << endl;
	return os;
}

/*
template< class T, class P >
int Linear_list<T,P>::size() const{
   ....
}
*/

#endif // _LISTALIN_H
