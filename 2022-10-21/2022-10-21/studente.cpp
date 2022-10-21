#include "studente.h"

/*
	studente();
	studente(string nome1, string nome2, string nome3, string nome4, string nome5);					
*/



string studente::getMatricola()
{
    return matricola;
}

void studente::setMatricola(string matricola)
{
    matricola = this->matricola;
}

string studente::getNome()
{
    return nome;
}

void studente::setNome(string nome)
{
    nome = this->nome;
}

int studente::getNumEsami(){
    return numEsami;
}

void studente::setEsame(int voto, int i){
    esami[i].setVoto(voto);
}

int studente::getVotoEsame(int i){
    return esami[i].getVoto();
}

string studente::getNomeEsame(int i) {
    return esami[i].getEsame();
}

bool studente::getSostenuto(int i) {
    return esami[i].isSostenuto();
}

float studente::getMedia() {
    int media = 0;

    for (int i = 0; i < numEsami; i++) {
        media += esami[i].getVoto();
    }

    media /= numEsami;

    return media;
}

void studente::printStudente() {
    cout << "Matricola: " << getMatricola() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Voti esami: "; 
    for (int i = 0; i < numEsami; i++) {
        cout << esami[i].getVoto() << ", ";
    }

}