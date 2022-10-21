/*
costruttore di default studente(): imposta i nomi di default dei 5 esami e i rispettivi flag sostenuto a false
costruttore studente(nome1, nome2, nome3, nome4, nome5): imposta in nomi dei 5 esami usando i parametri nome1, ... e i rispettivi flag sostenuto a false
setMatricola, setNome, getMatricola, getNome
getNumEsami: restituisce 5 (numero massimo di esami da sostenere)
setEsame(Voto,i): imposta il voto dell'esame i-esimo
getVotoEsame(i), getNomeEsame(i), getSostenuto(i)
getMedia(): restituisce la media degli esami sostenuti
printStudente(): visualizza tutte le informazioni dello studente compresi gli esami sostenuti e i rispettivi voti
*/
#include "esame.h"

using namespace std;

class studente {
private:
    string matricola;
    string nome;    
    esame esami[5];
	const int numEsami = 5;	

public:
	studente();
	studente(string nome1, string nome2, string nome3, string nome4, string nome5);
	void setMatricola(string matricola);
	void setNome(string nome);
	string getMatricola();
	string getNome();
	int getNumEsami();
	void setEsame(int voto, int i);
	int getVotoEsame(int i);
	string getNomeEsame(int i);
	bool getSostenuto(int i);
	float getMedia();
	void printStudente();
};