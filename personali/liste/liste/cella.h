#pragma once
using namespace std;

template <class tipoVar>
class Cella {
private:
	Cella *CellaPrec;
	Cella *CellaSucc;
	tipoVar elementoCella;

public:
	Cella();
	Cella(tipoVar v);
	//~Cella();

	void setCellaPrec(Cella *valore) {
		CellaPrec = valore;
	}

	void setCellaSucc(Cella *valore) {
		CellaSucc = valore;
	}

	void setValoreCella(tipoVar newVal) {
		elementoCella = newVal;
	}

	Cella* getCellaPrec() {
		return CellaPrec;
	}

	Cella* getCellaSucc() {
		return CellaSucc;
	}

	tipoVar getElementoCella() {
		return elementoCella;
	}
};

template <class tipoVar>
Cella<tipoVar>::Cella() {
	
};

template <class tipoVar>
Cella<tipoVar>::Cella(tipoVar v) {
	elementoCella = v;
};