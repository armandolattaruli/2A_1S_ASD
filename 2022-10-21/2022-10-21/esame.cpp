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
#include "esame.h"

esame::esame() {

}

esame::esame(string nome) {
	nomeEsame = nome;
}

esame::esame(string nome, int valore){
	nomeEsame = nome;
	votoEsame = valore;
}

string esame::getEsame() {
	return nomeEsame;
}

void esame::setEsame(string nomeEx) {
	nomeEsame = nomeEx;
}

int esame::getVoto() {
	return votoEsame;
}

void esame::setVoto(int valoreVoto) {
	votoEsame = valoreVoto;
}

bool esame::isSostenuto() {
	return sostenuto;
}