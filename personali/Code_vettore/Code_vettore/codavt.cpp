#ifndef _CODAVT_
#define _CODAVT_

#include <assert.h>

template < class tipoelem >
class Coda {

public:

	Coda(int n) {
		maxlung = n;
		creaCoda();
	}

	~Coda() { delete[] elementi; }

	void creaCoda() {
		elementi = new tipoelem[maxlung];
		testa = 0;
		lung = 0;
	}

	bool codaVuota() {
		return (lung == 0);
	}

	tipoelem leggiCoda() {
		if (!codaVuota())
			return (elementi[testa]);
	}

	void fuoriCoda() {
		if (!codaVuota()) {
			/* %
			maxlung serve a ricominciare dall'inizio della coda
			nel momento in cui testa + 1 dà resto 0, allora si ricomincia
			*/
			testa = (testa + 1) % maxlung;
			lung--;
		}
	}

	void inCoda(tipoelem a) {

		if (lung != maxlung) {
			/*
			   % maxlung serve a ricominciare dall'inizio della coda
				nel momento in cui testa + lung dà resto 0, allora si ricomincia
			*/

			elementi[(testa + lung) % maxlung] = a;
			lung++;
		}
	}

private:
	tipoelem* elementi;
	int testa, // contiene l'indice della testa
		lung,  //contiene la lunghezza effettiva della coda
		maxlung; //contiene la dimensione massima della coda
};

#endif //CODAVT_