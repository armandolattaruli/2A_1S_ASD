#ifndef _ESAME_H
#define _ESAME_H

#include <iostream>
#include <string>
using namespace std;

/*
costruttore di default esame()
costruttore esame(string): imposta solo il nome dell'esame
costruttore esame(string,int): imposta nome e voto ottenuto dell'esame
getEsame: restituisce il nome dell'esame
setEsame(string nome): imposta il nome dell'esame
getVoto: restituisce il voto ottenuto per l'esame se sostenuto
setVoto: imposta il voto ottenuto per l'esame
isSostenuto: restituisce true se l'esame è stato sostenuto
*/

class esame {
private:
	string nomeEsame;
	bool sostenuto;
	int votoEsame;

public:
	esame();
	esame(string nome);
	esame(string nome, int valore);
	string getEsame();
	void setEsame(string nomeEx);
	int getVoto();
	void setVoto(int valoreVoto);
	bool isSostenuto();
};

#endif // _ESAME_H 