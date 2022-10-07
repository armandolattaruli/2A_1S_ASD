#include "Studente.h"

int main() {
	Studente pippo;

	int mat, eta;
	string nome, cognome;

	cout << "Inserisci matricola: ";
	cin >> mat;
	pippo.setMatricola(mat);

	cout << "Inserisci nome: ";
	cin >> nome;
	pippo.setNome(nome);

	cout << "Inserisci cognome: ";
	cin >> cognome;
	pippo.setCognome(cognome);

	cout << "Inserisci eta': ";
	cin >> eta;
	pippo.setEta(eta);


	cout << "Dati dello studente: " << endl;
	cout << "Matricola: " << pippo.getMatricola() << endl;
	cout << "Nome: " << pippo.getNome() << endl;
	cout << "Cognome: " << pippo.getCognome() << endl;
	cout << "Eta': " << pippo.getEta() << endl;

	return 0;
}