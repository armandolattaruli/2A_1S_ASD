#ifndef _cella_h
#define _cella_h


template <class T>
class Cella {
public:
	typedef T tipoelem;
	
	Cella() {}

	void setValoreCella(tipoelem newVal) {
		elementoCella = newVal;
	}

	tipoelem getElementoCella()  {
		return elementoCella;
	}

	void setCellaSucc(Cella* valore) {
		CellaSucc = valore;
	}

	Cella* getCellaSucc() {
		return CellaSucc;
	}


	void setCellaPrec(Cella* valore) {
		CellaPrec = valore;
	}

	Cella* getCellaPrec()  {
		return CellaPrec;
	}
				

private:
	Cella* CellaPrec;
	Cella* CellaSucc;
	tipoelem elementoCella;
};


#endif	_cella_h