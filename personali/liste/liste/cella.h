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

	tipoelem getElementoCella() const {
		return elementoCella;
	}

	void setCellaSucc(Cella* valore) {
		CellaSucc = valore;
	}

	Cella* getCellaSucc() const{
		return CellaSucc;
	}


	void setCellaPrec(Cella* valore) {
		CellaPrec = valore;
	}

	Cella* getCellaPrec() const {
		return CellaPrec;
	}
				

private:
	Cella* CellaPrec;
	Cella* CellaSucc;
	tipoelem elementoCella;
};


#endif	_cella_h